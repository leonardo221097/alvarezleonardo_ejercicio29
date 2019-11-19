//este ejercicio fue tomado y modificado de: https://www.dreamincode.net/forums/topic/125770-simulating-diffusion-equation/
#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;


#define PI 3.14159265358979323846264338327

FILE *output;




int main ()
{
 int numx=30; //numero de puntos en x
 int numt=1000; //numero de pasos en el tiempo
 double dx=1/(numx-1);
 double dt=0.00005;
 double C[numx][numt]; //se define la matriz
 double x=0.0;
 double t;
 

 double mu=0.5; //params of the given Gaussian...
 double sigma=0.05; //...initial distribution


 output=fopen("ejercicio29.dat", "w");


 C[0][0]=0.0;
 C[numx-1][0]=0.0;
 dx=1.0/(numx-1.0);
 for(int i=0; i<numx; i++){ // i es el cambio en x y j es el cambio en t
  x=i*dx;
  C[i][0]=exp(-pow((x-mu),2.0)/(2.0*pow(sigma,2.0)))/pow((2.0*PI*pow(sigma,2.0)),0.5);
  C[0][0]=0.0;
  C[numx-1][0]=0.0;
 }




 for(int j=0;j<numt;j++){
   t+=dt;
for(int i=1; i<numx-1; i++){
x=i*dx;
C[i][j+1] = C[i][j] + (dt/(dx*dx))*(C[i+1][j] - 2*C[i][j] + C[i-1][j])+dt;
}
   C[0][j]=0.0; //posicion en (0,x)
   C[numx-1][j]=0.0; //posicion en (i-1,t)
 }


 

 for(int i=0; i<numx; i++){
   x=i*dx;
   fprintf(output, "%e\t", x);
for(int j=0; j<numt; j++){
fprintf(output, "%e\t", C[i][j]);
}
fprintf(output, "\n");
  }


   fflush(output);
   fclose(output);


  return 0;
}
