#include <stdio.h>
int main() {
    int a=5,b=3;
    int max=(a>b)*a+(b>a)*b;
    printf("%d",max);
    return 0;
}