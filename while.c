#include<stdio.h>
int main()
{
    int i=0 ,n;
    printf("enter a number:");
    scanf("%d",&n);
    while(i<=n)
    {
        if(i%2==0)
        printf("even\n");
        else
        printf("%d\n",i);
        i++;
    }
    return 0;
}