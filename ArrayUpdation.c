#include <stdio.h>  
  
int main() {  
   int arr[5] = {10, 40, 55, 98, 92};  
   int item = 45, i, pos = 3;  
     
   printf("Given array elements are :\n");  
      
   for(i = 0; i<5; i++) {  
      printf("arr[%d] = %d,  ", i, arr[i]);  
   }  
      
arr[pos-1] = item;    
   printf("\nArray elements after updation :\n");  
      
   for(i = 0; i<5; i++) {  
      printf("arr[%d] = %d,  ", i, arr[i]);  
   }  
}  