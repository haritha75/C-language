#include <stdio.h>
#include <string.h>


typedef struct account {

  char acouuntHolderName[30];
  long accountNumber;
  float balance;

}accountdetails; // it is alias name of account

accountdetails  accountDetails();

int main() {

  accountdetails AccountDetails;

  accountdetails account = accountDetails(); //here we are calling and it return some data with type accountdetails

  printf("%f\n",account.balance);
   printf("%ld",account.accountNumber);

}

accountdetails accountDetails() {

  accountdetails a1;
  a1.accountNumber = 45246786424;
  a1.balance = 4365245;
  return a1;
}