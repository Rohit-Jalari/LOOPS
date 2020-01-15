#include<stdio.h>
int main()
{
    int num,square;

    printf("Enter the number of terms :");
    scanf("%d",&num);

    for(int i=1;i<=num;i++)
    {
       square=i*i;
       printf("%d\t",square);
    }
    system("pause");
}
