#include <stdio.h>
#include <string.h>


struct account {

  char acouuntHolderName[30];
  long accountNumber;
  float balance;

};

int main() {
  struct account accountDetails,*ptr;


  ptr = &accountDetails;  //here we ares stoing the address
  ptr->accountNumber = 62563478912; // it is equal to the *(ptr).accountNumber = 62563478912
  ptr->balance = 12345.65; //it is also same 

  strcpy(ptr->acouuntHolderName,"Haritha");
  printf("%s\n",ptr->acouuntHolderName);
  printf("%ld\n", ptr->accountNumber);
  printf("%f\n", ptr->balance);
  printf("%p",ptr);


}