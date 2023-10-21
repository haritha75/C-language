#include<stdio.h>

int main() {
    printf("Enter n1 and n2 :\n");
    int n1,n2;
    scanf("%d %d",&n1,&n2);

    int lcm = n1>n2?n1:n2;
    int flag=1;

    while(flag) {
        if(lcm%n1==0 && lcm%n2==0) {
            printf("%d",lcm);
            flag =0;


        }
        lcm++;
    }

   
}