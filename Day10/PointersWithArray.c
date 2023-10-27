#include<stdio.h>

void main() {

    int arr[]={2,3,4,5,6};

    int *a=&arr;

    printf("%d\n",*a); //it default print first index of value or base index value
    printf("%d\n",*a+1);
    printf("%p\n",a); //it default print first index address or base index adderess
    printf("%p\n",a+1); //it default print first index address or base index adderess +1 means next index adress will be printed

    printf("%p\n",arr); //it also same base index address printed
    printf("\n");


    for(int i=0;i<5;i++) {

        printf("%p\n",&arr[i]); //here address of each element print

    }

     for(int i=0;i<5;i++) {

        printf("%d\n",*arr+i); //here value of each element print first *arr means base index value +i.

    }
    printf("\n");

    for(int i=0;i<5;i++) {

        *(arr+i) = *(arr+i)+5; //we can also change the values


        printf("%d\n",*(arr+i)); //here value of each element print first *arr means base index value +i.

    }



}