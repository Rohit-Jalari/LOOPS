#include<stdio.h>
int main()
{
    int num,factorial=1;

    printf("Enter the number :");
    scanf("%d",&num);

    for (int i=1;i<=num;i++)
    {
        factorial=factorial*i;
    }
    printf("\nThe factorial of %d is %d\n",num,factorial);
    system("pause");
}
