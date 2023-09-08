/*LL impimentation of stack*/

/*
name = Narendra Dukhande
Roll No. = 16
pid = 16
SE-IT (sem 3)
2023-24
*/

#include<stdio.h>
int choice;
int x;
void push(int x)
{

}
void pop()
{

}
void display()
{

}
void main()
{

    /*calling the everlasting choices*/
    while(choice!=4)
    {
        /*description of menu bar*/
        printf("\n\n\n\n-----These are the menu panel-----");
        printf("\n1. Push");
        printf("\n2. Pop");
        printf("\n3. Traverse");
        printf("\n4. Exit");
        printf("\nenter the option no.: ");
        scanf("%d", &choice);

        /*switch on entered choice*/
        switch(choice)
        {
            /*case-wise calling functions*/
            case 1: 
            printf("enter the number you want to push: ");
            scanf("%d", &x);
            push(x);
                break;
            case 2: pop();
                break;
            case 3: display();
                break;
            case 4:
                break;
            default:
                printf("incorrect choice");
        }
    }/*end of while*/

    /*code execution completed*/
    printf("You got exit\n");
}
