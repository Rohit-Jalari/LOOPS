          #include<stdio.h>
int main(){

    int n[10];
    float sum=0,average=0;

    printf("Enter 10 numbers : \n");
    for(int a=0;a<10;a++)
    {
        scanf("%d",&n[a]);
    }
    printf("The first %d natural numbers are\n",n);
    for(int i=0;i<=10;i++)
        {
            sum=sum+n[i];
            printf("%d\t",n[i]);
        }
    average=sum/10;
    printf("\nThe sum of first %d natural numbers is %f\n",n,sum);
    printf("\nThe average is %f\n",average);
    system("pause");
}
