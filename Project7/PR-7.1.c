#include<stdio.h>

int sum(int b, int c)
{
    return b+c;
}

int sub(int b,int c)
{
    return b-c;
}

int mul(int b,int c)
{
    return b*c;
}

int div(int b,int c)
{
    return b/c;
}

int mod(int b,int c)
{
    return b%c;
}

int main()
{
    int a,b=0,c=0;
    
    while(a!=0)
    {

    printf("Press 1 for +\nPress 2 for -\nPress 3 for *\nPress 4 for /\nPress 5 fro %%\nPress 0 for exit\n\nEnter your Choice => ");
    scanf("%d",&a);

    if(a!=0 && a<=5)
    {
        printf("\nEnter the First number => ");
        scanf("%d",&b);

        printf("\nEnter the Second number => ");
        scanf("%d",&c);
    }

    switch(a)
    {
        case 0:
        {
            break;
        }
        case 1:
        {
            printf("Adiition of %d and %d is %d\n",b,c,sum(b,c));
            break;
        }
        
        case 2:
        {
            printf("subtraction of %d and %d is %d\n",b,c,sub(b,c));
            break;
        }

        case 3:
        {
            printf("Multiplication of %d and %d is %d\n",b,c,mul(b,c));
            break;
        }

        case 4:
        {
            printf("Division of %d and %d is %d\n",b,c,div(b,c));
            break;
        }

        case 5:
        {
            printf("Modular is %d and %d is %d\n",b,c,mod(b,c));
            break;
        }

        default:
        {
            printf("Please enter valied number...\n");
            break;
        }
    }
}

}

//Press 1 for +
//Press 2 for -
//Press 3 for *
//Press 4 for /
//Press 5 fro %
//Press 0 for exit
//
//Enter your Choice => 1
//
//Enter the First number => 5
//
//Enter the Second number => 3
//Adiition of 5 and 3 is 8
//Press 1 for +
//Press 2 for -
//Press 3 for *
//Press 4 for /
//Press 5 fro %
//Press 0 for exit
//
//Enter your Choice => 4
//
//Enter the First number => 10
//
//Enter the Second number => 5
//Division of 10 and 5 is 2
//Press 1 for +
//Press 2 for -
//Press 3 for *
//Press 4 for /
//Press 5 fro %
//Press 0 for exit
//
//Enter your Choice => 0
