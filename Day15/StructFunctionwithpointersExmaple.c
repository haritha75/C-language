#include <stdio.h>
#include <string.h>


typedef struct account {

  char acouuntHolderName[30];
  long accountNumber;
  float balance;

}account; // it is alias name of account


void accountDetails(account);

int main() {
 account a1;

    a1.accountNumber = 34567898456;
    a1.balance = 23453;
    strcpy(a1.acouuntHolderName,"Haritha");

   accountDetails(a1); 

}


  void accountDetails(account account) {

        printf("%s\n",a1.acouuntHolderName);
        printf("%ld\n",a1.accountNumber);
        printf("%f\n",a1.balance);
    

  }