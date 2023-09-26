#include <stdio.h>

int main() {

    int a=5,b=2,c=12;

    int large=((a>b) && (a>c)) *a +((b>a) && (b>c)) *b +((c>a) && (c>b)) *c;

    printf("%d",large);
    return 0;
}