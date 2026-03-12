#include <stdio.h>

int main(void) {
  int month, day, year;


  printf("Enter date (mm/dd/yyyy): ");
  scanf("%d /%d /%d", &month, &day, &year);


  switch (month){
    case 1:
      printf("January ");
      break;
    case 2:
      printf("Febuary ");
      break;
    case 3:
      printf("March ");
      break;
    case 4:
      printf("April ");
      break;
    case 5:
      printf("May ");
      break;
    case 6:
      printf("June ");
      break;
    case 7:
      printf("July ");
      break;
    case 8:
      printf("August ");
      break;
    case 9:
      printf("September ");
      break;
    case 10:
      printf("October ");
      break;
    case 11:
      printf("November ");
      break;
    case 12:
      printf("December ");
      break;
    default:
      printf("Month incorect, try again");
      break;
  }


  switch(day){
    case 1: case 21: case 31:
      printf("%dst, ",day);
      break;
    case 2:
      printf("%dnd, ",day);
      break;
    case 3:
      printf("%drd, ",day);
      break;
    case 67:
      printf("67676767676767676767676767");
      break;
    default:
      printf("%dth, ",day);
      break;
  }  
  printf("%d",year);

  
  return 0;
}