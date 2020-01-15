#include<stdio.h>
int main()
{
    int n,sum=0;

    printf("Enter the number of odd numbers :");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            continue;
        }
        else
        {
            printf("%d\t",i);
        }
    }
    system("pause");
}
