#include <stdio.h> 
#include <stdlib.h> 
int main() 
{ 
int *ptr = (int *)malloc(sizeof(int)*2); 
int i; 
int *ptrNew; 
	
*ptr = 10; 
*(ptr + 1) = 20; 
	
ptrNew = (int *)realloc(ptr, sizeof(int)*3);  //here resizing the memory
*(ptrNew + 2) = 30; 
for(i = 0; i < 4; i++) 
	printf("%d ", *(ptrNew + i)); 

return 0; 
} 
