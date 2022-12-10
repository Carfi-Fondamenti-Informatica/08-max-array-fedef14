#include <iostream>
#include "lib.h"
using namespace std;

int main(){
  
  int n = 0;
  cin >> n;
  
  
 float array[n];
 
 for(int i=0;i<n;i++){
 cin >> array[i];
 }
  
  cout << massimo(array,n) << endl;
  
  return 0;
}
