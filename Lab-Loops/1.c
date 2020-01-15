#include<stdio.h>
int main()
{
    int n;

    printf("Enter the first natural numbers you want to display : ");
    scanf("%d",&n);

    for(int i=0;i<=n;i++)
        {
            printf("%d\t",i);
        }
    printf("\n");
    system("pause");
}
