#include<stdio.h>

int main() {


  int *ptr = (int*) malloc(5*(sizeof(int))); // 5*4 = 20 bytes of memery allocated

  printf("%p",ptr); //it return base address
  printf("%p",ptr+1);
  printf("%p",ptr+2);
  printf("%p",ptr+3);
  printf("%p",ptr+4);

  *ptr = 20;
  *(ptr+1) = 21;
  *(ptr+2) = 22;
  *(ptr+3) = 23;
  *(ptr+4) = 21;
  *(ptr+5) = 25; // here actually memory allocated 20 bytes but we can store extra data this is the drawback of pointers
  *(ptr+6) = 30; 


  printf("%d",*ptr);
  printf("%d",*(ptr+1));
  printf("%d",*(ptr+2));
  printf("%d",*(ptr+3));
  printf("%d",*(ptr+4));


free(ptr); // here we are removing the data from the ptr

*ptr = (int*)malloc(6 *(sizeof(int))); // like this we can change the size also 


}