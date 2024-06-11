#include <stdio.h>
#include <string.h>


typedef struct account {

  char acouuntHolderName[30];
  long accountNumber;
  float balance;

}accountdetails; // it is alias name of account

int main() {

  accountdetails accountDetails; // here we are creating vairable without using struct by using typedef we can use like this
  
  accountDetails.accountNumber = 62563478912;
  accountDetails.balance = 12345.65;
  //  we canot assign like this accountDetails.accountHolderName = "Haritha" because it is a string 
  strcpy(accountDetails.acouuntHolderName,"Haritha");
  printf("%s\n",accountDetails.acouuntHolderName);
  printf("%ld\n",accountDetails.accountNumber);
  printf("%f",accountDetails.balance);


}