#include<stdio.h>
int main()
{
    int n,sum=0;
    
    while(1)
    {
      printf("enter the number:\n");
      scanf("%d",&n);
      if(n==0)
      {
          break ;
      }
      sum = sum + n;
    }
    printf("the sum = %d",sum);
    return 0;
}