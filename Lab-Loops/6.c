#include<stdio.h>
int main()
{
    int num,multiplication=0;

    printf("Enter a number :");
    scanf("%d",&num);

    for(int i=1;i<=10;i++)
    {
        multiplication=i*num;
        printf("%d\t*\t%d\t=\t%d",num,i,multiplication);
        printf("\n");
    }
    system("pause");
}
