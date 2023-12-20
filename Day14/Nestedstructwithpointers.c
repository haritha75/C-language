#include <stdio.h>
#include <string.h>


typedef struct Animal {

  char name[15];
  int price;

}animal; // it is alias name of Animal

typedef struct dog
{
  
  animal a1;

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




}