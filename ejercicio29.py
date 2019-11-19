import numpy as np 
import matplotlib.pylab as plt



data= np.loadtxt("ejercicio29.dat")

plt.subplot(2,2,1)
plt.imshow(data, aspect=0.1)

plt.subplot(2,2,1)

plt.plot(data[:,0],data[:,1]  )
plt.plot(data[:,0],data[:,2]  )
plt.plot(data[:,0],data[:,3]  )
plt.plot(data[:,0],data[:,4]  )
plt.plot(data[:,0],data[:,5]  )
plt.plot(data[:,0],data[:,6]  )
plt.plot(data[:,0],data[:,7]  )
plt.plot(data[:,0],data[:,8]  )
plt.plot(data[:,0],data[:,9]  )
plt.plot(data[:,0],data[:,10]  )

plt.savefig('ejercicio29.png')
