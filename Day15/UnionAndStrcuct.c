// we can take only one value at a time but in struct we can take multiple values at a time

#include <stdio.h>
#include <string.h>

typedef union  account
{
  int age;
  long accountNum;
  float balance;
}account;

typedef struct  accountEx
{
  int age;
  // long accountNum;
  float balance;
}a1;


int main() {

  printf("%d\n",sizeof(account)); //using union which gives always maximum value that means in above we have three variables but gives which have maximum bytes
  printf("%d",sizeof(a1)); //it gives variables bytes

}
