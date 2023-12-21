#include <stdio.h>
#include <string.h>


typedef struct Animal {

  char name[15];
  int price;

}animal; // it is alias name of Animal

typedef struct dog
{
  
  animal a1,*a2;

  char color[12];
}dog;

int main() {

dog d1,*ptr;

 ptr = &d1;
 
 ptr->a1.price = 10000;
 strcpy(ptr->a1.name,"teddy");
 strcpy(ptr->color,"brown");

 printf("%s\n",ptr->a1.name);
 printf("%s\n",ptr->color);
 printf("%d\n",ptr->a1.price);



ptr->a2 = & ptr->a1; //here we area1 address in a2 pointer using ptr pointer
ptr->a2->price = 234566;
printf("%d",ptr->a2->price);



}