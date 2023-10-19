#include<stdio.h>
#include<math.h>

void main() {

    int a=6,b=21,c=15;

    if(a>b && a<c || a>c && a<b)
      printf("%d",a);
    else if(b>a && b<c || b>c && b<a)
      printf("%d",b);
    else 
      printf("%d",c);    
}