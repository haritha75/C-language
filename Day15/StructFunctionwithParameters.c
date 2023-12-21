#include <stdio.h>
#include <string.h>


typedef struct account {

  char acouuntHolderName[30];
  long accountNumber;
  float balance;

}account; // it is alias name of account

void accountDetails(account *);

int main() {
 account a1;

   accountDetails(&a1); 

   printf("%s\n",a1.acouuntHolderName);
   printf("%ld\n",a1.accountNumber);
   printf("%f\n",a1.balance);
 

}


  void accountDetails(account *ptr) {

    ptr->accountNumber = 34567898456;
    ptr->balance = 23453;
    strcpy(ptr->acouuntHolderName,"Haritha");

  }