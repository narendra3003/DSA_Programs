/*
name = Narendra Dukhande
Roll No. = 16
pid = 1
SE-IT (sem 3)
2023-24
*/

#include<stdio.h>

/*function that returns nth term of fibonnacci series*/
int fib(int n)
{
    if((n==1)||(n==2))
    {
        return 1;
    }
    return fib(n-1)+fib(n-2);
}

void main()
{
    /*taking input of the number that needs to be checked*/
    int num;
    printf("enter the number you want to check for: ");
    scanf("%d", &num);

    /*checking it is part of fibonnacci series or not*/
    for(int i=1;; i++)
    {
        if(num==fib(i))
        {
            /*we found the number*/
            printf("True");
            printf("\nThe number %d is a part of fibonacci series and it is %dth in the series", num, i);
            break;
        }
        if(num<fib(i))
        {
            /*
            if we didn't find the number in series 
            and we checked till a number bigger than entered number
            there is no way the number can be seen afterword in series
            so false
            */
            printf("False");
            printf("\nThe number %d is not a part of fibonacci series", num);
            break;
        }
    }/*end of for*/
}/*end of main*/