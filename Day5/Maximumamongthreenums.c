#include<stdio.h>
#include<math.h>

void main() {

    int a=5,b=12,c=21;

    int large= ((a>b) && (a>c))*a + ((b>a) && (b>c)) *b +((c>a) && (c>b))*c;

    printf("%d",large);
}