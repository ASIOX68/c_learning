#include <stdio.h>

int main() {
  float weight;
  int planet;
  float gravity;
  printf("Enter your weight: ");
  scanf("%f",&weight);
  printf("Enter the planet number (1-7): ");
  scanf("%i",&planet);
  switch(planet){
    case 1:
      gravity = 0.38;
      break;
    case 2:
      gravity = 0.91;
      break;
    case 3:
      gravity = 0.38;
    case 4:
      gravity = 2.34;
      break;
    case 5:
      gravity = 1.06;
      break;
    case 6:
      gravity = 0.92;
      break;
    case 7:
      gravity = 1.19;
      break;
    default:
      printf("planet inconue");
      break;

    }
    weight *= gravity;
    printf("%f", weight);
}