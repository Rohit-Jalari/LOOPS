#include<stdio.h>
int main()
{
    int num,rem,a=0;

    printf("Enter a number :");
    scanf("%d",&num);

    for(int i=2;i<num;i++)
    {
        rem=num%i;
        if(rem==0)
        {
            a++;
        }
        else if(rem!=0)
        {
            continue;
        }
    }
    if(a>0)
    {
        printf("%d is not a prime number.",num);
    }
    else if(a==0)
    {
        printf("%d is a prime number.",num);
    }

}
