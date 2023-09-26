#include <stdio.h>

int main() {
    int a= 1 && 0;
    printf("%d",a);
    int a1= 1 && 1;
    printf("%d",a1);
    int a2= 0 && 0;
    printf("%d",a2);
    int a3= 0 && 1;
    printf("%d",a3);
    return 0;
}