#include <iostream>
using namespace std;
int main(){
  double var = 2.4;
  double* point = &var;
  cout<<"variable is: "<< var<<" address is: "<< &var<<endl;
  cout<<"Pointer value is: "<<point<<" address is: "<<&point<<" deref is: "<<*point;
  return 0;
  
}
