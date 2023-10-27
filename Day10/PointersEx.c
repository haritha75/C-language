#include<stdio.h>

void main() {

    int a=10;
    int *b=&a; //here we are storing address of a for that purpose we can use & symbol .address stored in hexadecimal format. and *b reference to the pointer variable.
    //if you want store address then we must use same data type.
    printf("%p\n",b); //whenever %p means it will print address of a because it stores a address.
    printf("%p\n",&b); //same above one also print address of b.
    printf("%d\n",*b); //*b means it will pirnt whatever the b value stored the address that address of the value will be printed means it store a address and insize the a value it store 10.
    printf("%p\n",&a);
    printf("%d",&a); //we cannot store adress in the integer it overflowing the data.
    
}