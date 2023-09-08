/*Linked List Functions*/

/*
name = Narendra Dukhande
Roll No. = 16
pid = 15
SE-IT (sem 3)
2023-24
*/

#include<stdio.h>
int f=-1, r=-1;
int n=5, x, choice;
int arr[5];

void main()
{

    /*calling the everlasting choices*/
    while(choice!=8)
    {
        /*description of menu bar*/
        printf("\n\n\n\n-----These are the menu panel-----");
        printf("\n1. Insert at Beginning");
        printf("\n2. Insert at pth position");
        printf("\n3. Insert at end");
        printf("\n4. Delete from Beginning");
        printf("\n5. Delete from pth position");
        printf("\n6. Delete from end");
        printf("\n7. Traverse");
        printf("\n8. Exit");
        printf("\nenter the option no.: ");
        scanf("%d", &choice);

        /*switch on entered choice*/
        switch(choice)
        {
            /*case-wise calling functions*/
            case 1: 
            printf("enter the number to be added in LL: ");
            scanf("%d", &x);
            insertBeg(x);
                break;
            case 2: 
            printf("enter the number to be added in LL: ");
            scanf("%d", &x);
            insertAtP(p, x);
                break;
            case 3: 
            printf("enter the number to be added in LL: ");
            scanf("%d", &x);
            insertAtEnd(x);
                break;
            case 4: deleteBeg();
                break;
            case 5: deleteAtP();
                break;
            case 6: deleteEnd();
                break;
            case 7: display();
                break;
            case 8:
                break;
            default:
                printf("incorrect choice");
        }
    }/*end of while*/

    /*code execution completed*/
    printf("You got exit\n\n");
}
