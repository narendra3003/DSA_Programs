/*
name = Narendra Dukhande
Roll No. = 16
pid = 2
SE-IT (sem 3)
2023-24
*/

#include<stdio.h>

/*function that prints the pascal's triangle*/
void pascal(int new_row[],int prev_row[], int n, int a)
{
    if(a==n-1)
    {
        return;
    }
    for(int i=0; i<a; i++)
    {
        //the new row element is sum of 2 elements of previous row
        new_row[i]=prev_row[i]+prev_row[i-1];
    }
    new_row[a]=1;
    for(int i=0; i<n-a; i++)
    {
        //gives triangular look
        printf(" ");
    }
    for(int i=0; i<=a; i++)
    {
        //prints elements
        printf("%3d", new_row[i]);
    }
    printf("\n");
    for(int i=0; i<n; i++)
    {
        prev_row[i]=new_row[i];
    }
    pascal(new_row, prev_row, n, a+1);
}

/*function giving factorial of n*/
int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    return n*fact(n-1);
}

/*gives combination of (n, r)*/
int comb(int n, int r)
{
    return fact(n)/(fact(n-r)*fact(r));
}
void main()
{
    //Pascal triangle
    //accepting the number of rows
    int n;
    printf("enter the value of number of rows: ");
    scanf("%d", &n);

    /*recursive method*/
    
    int arr1[n], arr2[n];
    pascal(arr1, arr2, n+1, 0);
    

    /*by using factorial and combinations (commented down)*/
    
    // for(int i=0; i<n; i++)
    // {
    //     for(int j=0; j<=n-i; j++){
    //         printf(" ");
    //     }
    //     for(int j=0; j<=i; j++){
    //         printf("%3d", comb(i, j));
    //     }
    //     printf("\n");
    // }
}
