#include <stdio.h>

int main() {

  int i = 99;


while(i != 0){
  printf("%d bottles of pop on the wall\n", i);
  printf("Take one down and pass it around\n");
  printf("%d bottles of pop on the wall\n", i--);
}
return 0;
}