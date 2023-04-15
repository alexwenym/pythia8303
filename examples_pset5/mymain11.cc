#include "Pythia8/Pythia.h"
using namespace Pythia8;
int main() {

#ifdef GZIP
  bool useGzip = true;
#else
  bool useGzip = false;
#endif
  cout << " useGzip = " << useGzip << endl;

  // Generator. We here stick with default values, but changes
  // could be inserted with readString or readFile.
  Pythia pythia;

  // Initialize Les Houches Event File run. List initialization information.
  pythia.readString("Beams:frameType = 4");
  if (useGzip) pythia.readString("Beams:LHEF = ttbar.lhe.gz");
  //else         pythia.readString("Beams:LHEF = mymain11_events/run_01/ee_mumu_60GeV.lhe");
  //else         pythia.readString("Beams:LHEF = mymain11_events/run_02/ee_mumu_91GeV.lhe");
  else         pythia.readString("Beams:LHEF = mymain11_events/run_03/ee_mumu_200GeV.lhe");
  pythia.init();

  // Allow for possibility of a few faulty events.
  int nAbort = 10;
  int iAbort = 0;

  float sigma_plus = 0.0; 
  float sigma_minus = 0.0; 

  // Begin event loop; generate until none left in input file.
  for (int iEvent = 0; ; ++iEvent) {

    // Generate events, and check whether generation failed.
    if (!pythia.next()) {

      // If failure because reached end of file then exit event loop.
      if (pythia.info.atEndOfFile()) break;

      // First few failures write off as "acceptable" errors, then quit.
      if (++iAbort < nAbort) continue;

      break;
    }

    for (int i = 0; i < pythia.event.size(); ++i) {

      float e_pz; 
      float mu_pz; 

      // get the z momentum of the final muon and initial electron
      if (pythia.event[i].mother1()==0 && pythia.event[i].mother2()==0 && pythia.event[i].id()==11) {
        e_pz = pythia.event[i].pz();
      }
      else if (pythia.event[i].isFinal() && pythia.event[i].id()==13){
        mu_pz = pythia.event[i].pz();
      }

      // check if the final state muon and electron are going in the same direction
      if (e_pz * mu_pz > 0) {
        sigma_plus++; 
      }
      else if (e_pz * mu_pz < 0) {
        sigma_minus++;
      }
  
    }
  // End of event loop.
  }

  // Give statistics. Print histogram.
  pythia.stat();
  cout << "sigma_plus " << sigma_plus << endl;
  cout << "sigma_minus " << sigma_minus << endl;

  float A_FB;
  A_FB = (sigma_plus - sigma_minus) / (sigma_plus + sigma_minus); 
  cout << "A_FB " << A_FB << endl;

  // Done.
  return 0;
}

/* OUTPUTS: 

60 GeV Case:
sigma_plus 3.023e+04
sigma_minus 6.641e+04
A_FB -3.744e-01

91 GeV Case: 
sigma_plus 5.045e+04
sigma_minus 4.793e+04
A_FB 2.568e-02

200 GeV Case:
sigma_plus 7.542e+04
sigma_minus 2.120e+04
A_FB 5.612e-01

*/
