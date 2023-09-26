#include <stdio.h>
#include <limits.h>
int main() {
    int a=INT_MAX;
    int b=INT_MIN;
    printf("%d %d",a,b);
    long a1=LONG_MAX;
    long a2=LONG_MIN;
    printf("%ld %ld",a1,a2);
    return 0;
}