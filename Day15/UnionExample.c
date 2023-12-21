#include <stdio.h>

typedef union student {

  int age;
  float weight;

}student;

int main() {

  student s1;
  s1.age = 22;
  printf("%d\n",s1.age); //it gives wrong because whnever assign weight then previous one gone union gives one value at a time here we are assign weight so previous one gone weight will be assign and weight value print correct but age not print so you can use like this it will print
  
  s1.weight = 44;

  printf("%f",s1.weight);
}