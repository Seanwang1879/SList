#include<stdio.h>

int i,j;
int array[20];  
int temp;

void main()
{
  echo(&(array++));
  
  for(j=0;j<20;j++){
    for(i=0;i<20-j;i++){
      if(array[i]<array[i+1]){
        temp=array[i];
        array[i]= array[i+1];
        array[i+1] = temp;
      }
    }
   }


}
