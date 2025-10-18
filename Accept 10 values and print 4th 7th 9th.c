#include<stdio.h>
#include<conio.h>
int main()
{
int a[5];
printf("Enter 5 values:\n");
for(int i=0;i<5;i++)
{
    scanf("%d",&a[i]);
}
printf("your asscending order is :");
for (i=0;i<5;i++)
{
    for(int j=0;j<5;j++)
        {if(a[i]>a[j])
    {
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
        }
        printf("%d\n",a[i]);
}

return 0;

}
