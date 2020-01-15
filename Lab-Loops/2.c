#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter the number of natural number you want to find the sum of :");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("The sum of first %d natural numbers is %d\n",n,sum);
    system("pause");


}
