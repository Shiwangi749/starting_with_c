#include<stdio.h>
int main()
{
 int i, j, k;
 for(i=0;i<7;i++)
 {
     k=0;
     for(j=2;j<=i*2+1;j++)
     {
         printf("%d",k);
         if(k==1)
             k = 0;
         else
             k = 1;
     }
     printf("\n");
 }
getch();
}
