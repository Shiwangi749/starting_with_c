#include<stdio.h>
int main()
{
 int x;
 printf("Enter a number :");
 scanf("%d", &x);
 switch(x)
  {
    case 1 : printf("Food item - Pasta\nPrice - 179");
    break;
    case 2 : printf("Food item - Pizza\nPrice - 239");
    break;
    case 3 : printf("Food item - Burger\nPrice - 129");
    break;
    case 4 : printf("Food item - Sandwich\nPrice - 149");
    break;
    case 5 : printf("Food item - French Fries\nPrice - 99");
    break;
    default : printf("Choice among 1,2,3,4 and 5");
  }
  return 0;
 }
