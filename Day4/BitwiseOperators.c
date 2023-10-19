#include<stdio.h>
#include<limits.h>

void main() {

    int a=11,b=3;
    printf("%d\n",a&b);
    printf("%d\n",a|b);
    printf("%d\n",a^b);
    printf("%d\n",a>>2); //decreasing half of the value
    printf("%d\n",b<<2);//doubling the value

}