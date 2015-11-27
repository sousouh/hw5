#include <iostream>
#include <cmath>

using namespace std;

int main(){
 int N;
 double T = M_PI*20.0;
 double dt = M_PI/10.0;
 N = int(T/dt)+1;
 double ex[2] , ex_0[2];
 double im[2] , im_0[2];
 double an[2] ;
 ex_0[0]=1;
 ex_0[1]=0;
 im_0[0]=1;
 im_0[1]=0;

 
 for(double t=dt; t<=T; t+=dt){
   
   ex[0]=ex_0[0]+ex_0[1]*dt;
   ex[1]=ex_0[1]-ex_0[0]*dt;
   ex_0[0]=ex[0];
   ex_0[1]=ex[1];
   
   im[0]=(im_0[0]+im_0[1]*dt)/(1+(dt*dt));
   im[1]=(im_0[1]-im_0[0]*dt)/(1+(dt*dt));
   im_0[0]=im[0];
   im_0[1]=im[1];
 
  an[0]=cos(t);
  an[1]=sin(t);
  
    cout<< t << "\t" << ex[0] << "\t" << im[0] << "\t" << an[0] << endl;
  
 }
 return 0;
}