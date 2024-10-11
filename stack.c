/*
NMAE : TANMAY SANJAY GAIDHANI
CLASS : SY 'A'
BATCH : 1
ROLL NO : 114
*/
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
/*
OUTPUT
Enter your choice:
1. Push
2. Pop
3. Display
4. Exit
1
you choose push operation:
 Enter the element to push: 33
33 pushed element in stack
Enter your choice:
1. Push
2. Pop
3. Display
4. Exit
1
you choose push operation:
 Enter the element to push: 44
44 pushed element in stack
Enter your choice:
1. Push
2. Pop
3. Display
4. Exit
2
you choose push operation:
 44 poped from stack
Enter your choice:
1. Push
2. Pop
3. Display
4. Exit
2
you choose push operation:
 33 poped from stack
Enter your choice:
1. Push
2. Pop
3. Display
4. Exit
2
you choose push operation:
Stack is empty
Enter your choice:
1. Push
2. Pop
3. Display
4. Exit
1
you choose push operation:
 Enter the element to push: 44
44 pushed element in stack
Enter your choice:
1. Push
2. Pop
3. Display
4. Exit
1
you choose push operation:
 Enter the element to push: 55
55 pushed element in stack
Enter your choice:
1. Push
2. Pop
3. Display
4. Exit
3
stack element:
55
44
Enter your choice:
1. Push
2. Pop
3. Display
4. Exit
4
Exiting...
PS C:\Users\tanma\OneDrive\Desktop\my c program> 
*/