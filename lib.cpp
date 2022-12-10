
#include "lib.h"
float massimo(float array[],int n){
float max = 0;
  
  for(int i=0;i<n;i++){
  if(i == 0){
  max = array[i];
    }
    if(array[i] > max){
    max = array[i];
    }
  }
  return max;
}
