#include<stdio.h>

int main() {
    printf("Enter n1 and n2 :\n");
    int n1,n2;
    scanf("%d %d",&n1,&n2);

    int max = n1>n2?n1:n2;
    int hcf;
    for(int i=max;i>=1;i--) {
        if(n1%i==0 && n2%i==0) {
            hcf=i;
            break;
        }

    }
    int p= (n1*n2)/hcf;
    printf("%d",p);

}