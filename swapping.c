#include<stdio.h>
int main()
{
 int a, b, c;
 printf("Enter the first number : ");
 scanf("%d",&a);
 printf("Enter the second number : ");
 scanf("%d",&b);
 c = a;
 a = b;
 b = c;
 print("After swapping the first number is : %d, second number is : %d", a, b);
 return 0;
}
