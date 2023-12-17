#include <stdio.h>

int main() {
     
     int *ptr;

     ptr = (int*)calloc(6 ,(sizeof(int))); // it takes two parameters one os how may values and  another one is size 

     *ptr = 22;
     *(ptr+1) = 11;

     printf("%d \n%d\n",*ptr,*(ptr+1));
     printf("%d \n%d\n",*(ptr+2),*(ptr+3)); // intially this values are zero
      printf("%d \n%d",*(ptr+4),*(ptr+5));


}