import os
import numpy as np
import matplotlib.pyplot as plt

os.system('g++ DiegoTorres_Ejercicio22.cpp -o  ejercicio.x')
os.system("./ejercicio.x > datos.dat")

data = np.loadtxt("datos.dat")
x=np.linspace(-3,3)
plt.figure()
plt.plot(x, np.exp(-x*x/2)/np.sqrt(2*np.pi))
_=plt.hist(data, bins=80, density=True)
plt.savefig("distribucion.png")
