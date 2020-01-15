#include<stdio.h>
int main()
{
    int rows,a=0;

    printf("Enter the number of rows :");
    scanf("%d",&rows);

    for(int i=1;i<=rows;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d",a=a+1);
        }
        printf("\n");
    }
    system("pause");

}
