#include <stdio.h>
#define MAXSIZE 10
int top = -1, stack[MAXSIZE];

void display() 
{
    if (top ==-1) 
    {
        printf("Stack is empty\n");
    }
    else
    {
    printf("stack element:\n");
    for (int i = top; i >= 0; i--) 
    {
        printf("%d\n", stack[i]);
    }
    }
}

void push()
 {
    int value;
    printf("you choose push operation:\n ");
    printf("Enter the element to push: ");
    scanf("%d", &value);
    if (top >= MAXSIZE - 1)
     {

        printf("Stack is full\n");
    }
    else
    {
        top++;
    stack[top] = value;
    printf("%d pushed element in stack\n", value);
    }
 }

void pop() {
    printf("you choose push operation: \n");
    if (top < 0) 
    {  
        printf("Stack is empty\n");
    }
    else{
    printf(" %d poped from stack\n", stack[top]);  
    top--;
    }
}

void main()
 {
    int choice;
    do {
        printf("Enter your choice:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice\n");
                break;
        }
    } while (choice!=4);
}
