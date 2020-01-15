#include<stdio.h>
int main()
{
    int n,sum=0;

    printf("Enter the first natural numbers you want to display : ");
    scanf("%d",&n);

    printf("The first %d natural numbers are\n",n);
    for(int i=0;i<=n;i++)
        {
            sum=sum+i;
            printf("%d\t",i);
        }
    printf("\nThe sum of first %d natural numbers is %d\n",n,sum);
    system("pause");
}
