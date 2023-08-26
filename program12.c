/*Array implementation of Queue*/
#include<stdio.h>
int f=-1, r=-1;
int n=5, x, choice;
void enQueue(int x, int arr[]){
    if(r==n-1){
        printf("Queue is full");
        return;
    }
    if(f==-1){
        f++;
    }
    r++;
    arr[r]= x;
}
void pop(int arr[]){
    if(f==-1){
        printf("Queue is empty");
        return;
    }
    if(f==r){
        f=-1;r=-1;
        return;
    }
    f++;
}
void printArr(int arr[]){
    if(f==-1){
        printf("Queue is empty");
        return;
    }
    for(int i=0; i<= head; i++){
        printf("%d\n", arr[i]);
    }
}
void main()
{
    printf("Enter the array length: ");
    scanf("%d", &n);

    int arr[n];

    /*calling the everlasting choices*/
    while(choice!=4)
    {
        /*description of menu bar*/
        printf("\n\n\n\n-----These are the menu panel-----");
        printf("\n1. Enter a value");
        printf("\n2. Delete a value");
        printf("\n3. Traverse");
        printf("\n4. Exit");
        printf("\nenter the option no.: ");
        scanf("%d", &choice);

        /*switch on entered choice*/
        switch(choice)
        {
            /*case-wise calling functions*/
            case 1: 
            printf("enter the number you wnat to push: ");
            scanf("%d", &x);
            push(x, arr);
                break;
            case 2: pop(arr);
                break;
            case 3: printArr(arr);
                break;
            case 4:
                break;
            default:
                printf("incorrect choice");
        }
    }/*end of while*/

    /*code execution completed*/
    printf("You got exit");
}