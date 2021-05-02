#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,n,sum=0,flag;
    scanf("%d",&n);

    flag =1;
    for(i=1;i<=n;i++)
    {

        for(j=1;j<=i;j++)
        {
        sum = sum+flag;
        flag++;
        }
    }
    printf("Sum = %d\n",sum);



    return 0;
}



