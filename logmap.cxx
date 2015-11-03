#include <iostream>

using namespace std;

int main(){
  
  double x = 0.5;	//starting value
  double r = 0.01;		//scaling factor
  int n = 100;		//number of iterations
  int m = 20;		//not printed iterations
  
  for(r; r<=4; r+=0.01){
    int i = 1;
    x = 0.5;
    for(i; i<=m; i++){
      x = x*r*(1-x);
    }
    i++;
    for(i; i<=n; i++){
      x = x*r*(1-x);
      cout <<r<<"\t"<<x<< endl;
    }
  }
  
  return 0;
  
}