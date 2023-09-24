//overflow is nothing whenever the data adding beyond its limit it happens.

#include <stdio.h>
#include <limits.h>

int main() {
    int a=INT_MAX+1;
    printf("%d",a);
    return 0;
}

