#include <stdio.h>

typedef union student {

  int age;
  float weight;

}student;

int main() {

  student s1;
  scanf("%d",&s1.age);
  printf("%d\n",s1.age); //it gives wrong because whnever assign weight then previous one gone union gives one value at a time here we are assign weight so previous one gone weight will be assign and weight value print correct but age not print so you can use like this it will print
  
  s1.weight = 44;

  scanf("%f",&s1.weight);
  printf("%f",s1.weight);
}