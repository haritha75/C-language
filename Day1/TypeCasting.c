#include <stdio.h>
int main() {
    int a=10.2;
    printf("%d",a); //it is a implicit type casting it automatically done but loss the data.
    float b=22;
    printf("%f",b);
    float z=a/b; //here b is float value
    printf("%f",z);
    float f=5.0/2.0;
    printf("%f",f);

    int a1=1000000000,a2=1000000000;
    long s=a1*(long)a2; //it is aexplicit type casting .user can be done.
    printf("%ld",s);
    printf("%d",sizeof(int));
    printf("%d",sizeof(long));
    printf("%d",sizeof(long long));



    return 0;
}