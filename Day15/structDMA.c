#include <stdio.h>
#include <string.h>


typedef struct account {

  char acouuntHolderName[30];
  long accountNumber;
  float balance;

}accountdetails; // it is alias name of account

int main() {

  accountdetails *accountDetails; // here we are creating pointer vairable without using struct by using typedef we can use like this

  accountDetails = (struct account*)malloc(5*sizeof(accountdetails)); //malloc function return void type

  accountDetails->accountNumber = 23456734567;
  (accountDetails+1)->balance = 235634;
  printf("%ld\n",accountDetails->accountNumber);
  printf("%f",(accountDetails+1)->balance);
  

}