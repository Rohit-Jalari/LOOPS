#include<stdio.h>
int main()
{
    int n,remainder,t;

    printf("Enter the number :");
    scanf("%d",&n);


    printf("The Armstrong numbers are :\n");

    for(int i=1;i<=n;i++)
    {
       int sum=0;
       t=i;
       while(t!=0)
       {
        remainder=t%10;
        sum=sum+(remainder*remainder*remainder);
        t=t/10;
       }
       if(sum==i)
      {
         printf("%d\t",i);
      }
       else("continue;");
    }
   return 0;
}
