#include <stdio.h>
#include <string.h>


struct account {

  char acouuntHolderName[30];
  long accountNumber;
  float balance;

};

int main() {
  struct account accountDetails; // accountDetails is a variable

  accountDetails.accountNumber = 62563478912;
  accountDetails.balance = 12345.65;
  //  we canot assign like this accountDetails.accountHolderName = "Haritha" because it is a string 
  strcpy(accountDetails.acouuntHolderName,"Haritha");
  printf("%s\n",accountDetails.acouuntHolderName);
  printf("%ld\n",accountDetails.accountNumber);
  printf("%f",accountDetails.balance);


}