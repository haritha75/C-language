#include<stdio.h>
int main() {

    char ch;
    int number;

    scanf("%c %d", &ch,&number);
    printf("%c %d", ch,number);
    
    return 0;
}
//here if you enter 456 it takes only one number because character means only one letter and reaning will be skipped.