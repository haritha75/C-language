#include<stdio.h>
#include<string.h>

void main() {


    char arr[7];
    char a[15];

    scanf("%s",arr); // it read only one word after space it does not read here whenever take s formater then donot need '&' for reading
    scanf("%s",a);

    printf("%s\n",arr); //it print one word after space it does not print it consider another array
    printf("%s",a);

}