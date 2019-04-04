#include <iostream>
#include <cstdlib>
#include <cmath>
#include <stdlib.h>

void MCMC(int N);
float distri(float x);
int main(){
    int N=10000;
    MCMC(N);
    
    return 0;
}

void MCMC(int N){
    srand(time(0));
    int i;
    float x, dx, nuevo, likeold, likenew, gamma, r;
    x=2*drand48()-1;
    std::cout<<x<<std::endl;   
    for(i=0; i<N; i++){
        dx=2*drand48()-1.0;
        r=drand48();
        nuevo=x+dx;
        likeold=distri(x);
        likenew=distri(nuevo);
        gamma=likenew/likeold;
        if(gamma>r){
            x=nuevo;
        }
    std::cout<<x<<std::endl; 
    }
}

float distri(float x){
    return exp(-x*x/2); 
}