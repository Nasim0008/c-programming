#include<stdio.h>
int main()
{
    int n;
    printf("enter the value of N: ");
    scanf("%d",&n);
    int fibo[n];

    fibo[0]=0;
    fibo[1]=1;

    for(int i=2;i<=n;i++)
    {
        fibo[i]=fibo[i-1]+fibo[i-2];
    }

    for(int i=0;i<=n;i++)
    {
        printf("%d ",fibo[i]);
    }

    return 0;
}
