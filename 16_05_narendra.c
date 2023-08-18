/*
name = Narendra Dukhande
Roll No. = 16
pid = 5
SE-IT (sem 3)
2023-24
*/

#include<stdio.h>

/*function finding maximum of an array*/
int maxim(int arr[], int n)
{
    int max=arr[0];
    for(int i=0; i<n; i++)
    {
        if(max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}

void main(){
    /*dynamic input of array*/
    int n;
    printf("enter the length of the array:");
    scanf("%d", &n);
    
    int arr[n];
    printf("enter the array values:");
    for(int i=0; i<n; i++)
    {
        printf("enter %d th value: ", i+1);
        scanf("%d", &arr[i]);
    }
    /*calling maxim function*/
    printf("the maximum of the array is:%d", maxim(arr, 5));
}