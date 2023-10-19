#include<stdio.h>
#include<math.h>

void main() {

    int a=5,b=10,c=9;

    if(a>b) {

        if(c>a) 
         printf("%d",c);
        else 
          printf("%d",a); 
    }
    else {

        if(c>b)
           printf("%d",c);
        else 
           printf("%d",b);   
    }
}