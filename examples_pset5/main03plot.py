from matplotlib import pyplot as plt
from matplotlib.backends.backend_pdf import PdfPages
pp   = PdfPages('out03plot.pdf')
tmp1 = plt.figure(1)
tmp1.set_size_inches(8.00,6.00)
plot = open('out03plot-0.dat')
plot = [line.split() for line in plot]
valx = [float(x[0]) for x in plot]
valy = [float(x[1]) for x in plot]
vale = [float(x[2]) for x in plot]
plt.hist( valx, vale, weights = valy, histtype='step', label=r'$p_{\perp}$ of $2 \to 2$ process')
plt.xlim( 0.000e+00, 5.000e+02)
plt.yscale('symlog', linthresh=5.76e+00)
plt.legend(frameon=False,loc='best')
plt.title(r'$p_{\perp}$ scale of hard interaction')
plt.xlabel(r'$p_{\perp}$ (GeV)')
plt.ylabel(r'$\mathrm{d}\sigma/\mathrm{d}p_{\perp}$ (nb/GeV)')
pp.savefig(tmp1,bbox_inches='tight')
plt.clf()
tmp2 = plt.figure(2)
tmp2.set_size_inches(8.00,6.00)
plot = open('out03plot-1.dat')
plot = [line.split() for line in plot]
valx = [float(x[0]) for x in plot]
valy = [float(x[1]) for x in plot]
vale = [float(x[2]) for x in plot]
plt.hist( valx, vale, weights = valy, histtype='step', color='royalblue', label=r'total')
plot = open('out03plot-2.dat')
plot = [line.split() for line in plot]
valx = [float(x[0]) for x in plot]
valy = [float(x[1]) for x in plot]
vale = [float(x[2]) for x in plot]
plt.hist( valx, vale, weights = valy, histtype='step', color='orange', label=r'charged (even only!)')
plt.xlim( -5.000e-01, 1.600e+03)
plt.ylim( 0.000e+00, 6.825e-03)
plt.ticklabel_format(axis='y', style='sci', scilimits=(-2,3))
plt.legend(frameon=False,loc='best')
plt.title(r'Total and charged particle multiplicities')
plt.xlabel(r'$n$')
plt.ylabel(r'$\mathrm{d}P/\mathrm{d}n$')
pp.savefig(tmp2,bbox_inches='tight')
plt.clf()
tmp3 = plt.figure(3)
tmp3.set_size_inches(8.00,6.00)
plot = open('out03plot-3.dat')
plot = [line.split() for line in plot]
valx = [float(x[0]) for x in plot]
valy = [float(x[1]) for x in plot]
plt.plot( valx, valy, '-', label=r'$\mathrm{d}n_{\mathrm{charged}}/\mathrm{d}y$')
plot = open('out03plot-4.dat')
plot = [line.split() for line in plot]
valx = [float(x[0]) for x in plot]
valy = [float(x[1]) for x in plot]
plt.plot( valx, valy, '--', color='magenta', label=r'$\mathrm{d}n_{\mathrm{charged}}/\mathrm{d}\eta$')
plt.xlim( -1.000e+01, 1.000e+01)
plt.ylim( 0.000e+00, 2.816e+01)
plt.ticklabel_format(axis='y', style='sci', scilimits=(-2,3))
plt.legend(frameon=False,loc='best')
plt.title(r'Charged (pseudo)rapidity distribution')
plt.xlabel(r'$y$ or $\eta$')
plt.ylabel(r'$\mathrm{d}n_{\mathrm{charged}}/\mathrm{d}(y/\eta)$')
pp.savefig(tmp3,bbox_inches='tight')
plt.clf()
tmp4 = plt.figure(4)
tmp4.set_size_inches(8.00,6.00)
plot = open('out03plot-5.dat')
plot = [line.split() for line in plot]
valx = [float(x[0]) for x in plot]
valy = [float(x[1]) for x in plot]
vale = [float(x[2]) for x in plot]
plt.hist( valx, vale, weights = valy, histtype='step', label=r'charged')
plt.xlim( 0.000e+00, 1.000e+01)
plt.yscale('symlog', linthresh=2.70e-01)
plt.legend(frameon=False,loc='best')
plt.title(r'Charged $p_{\perp}$ spectrum')
plt.xlabel(r'$p_{\perp}$ (GeV)')
plt.ylabel(r'$\mathrm{d}n_{\mathrm{charged}}/\mathrm{d}p_{\perp}$ (GeV$^{-1}$)')
pp.savefig(tmp4,bbox_inches='tight')
plt.clf()
pp.close()
