#include<stdio.h>

int main()
{
    int num=0;
    int sum=0;

    while(1)
    {
        printf("Enter a positive integer: ");
        scanf("%d",&num);

        if(num<0)
        {
            printf("You entered a negative integer.\n");
            printf("The final sum is: %d",sum);
            break;
        }else{
            sum+=num;
        }
        printf("The sum is: %d\n",sum);
    }
    return 0;
}