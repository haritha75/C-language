#include <stdio.h>
int main() {
    int a=5,b=12,c=8;

    int max=(a>b)*a+(b>a)*b;
    int max1=(c>max)*c+(max>c)*max;
    printf("%d",max1);
    return 0;
}