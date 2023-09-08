/*stack implement with array sourav*****/
#include <stdio.h>
#include <stdlib.h>

int stack[5];
void push();
int pop();
void traverse();
int empty();
int top_element();
int top = 0;

void push(int value) {
   stack[top] = value;
   top++;
}

int pop() {
   top--;
   return stack[top];
}
int empty() {
   if (top == 0)
      return 1;
   else
      return 0;
}

int top_element() {
   return stack[top-1];
}

int main()
{
   int element, choice;

   for (;;)
   {
      printf("Stack Operations.\n");
      printf("1. Insert into stack.\n");
      printf("2. Delete from stack.\n");
      printf("3. Print top element of stack.\n");
      printf("4. Check if stack is empty.\n");
      printf("5. Exit.\n");
      printf("Enter your choice.\n");
      scanf("%d",&choice);

      switch (choice)
      {
         case 1:
            if (top == 5)
                  printf("Error: Overflow\n\n");
            else {
               printf("Enter the value to insert.\n");
               scanf("%d", &element);
               push(element);
            }
            break;

         case 2:
            if (top == 0)
               printf("Error: Underflow.\n\n");
            else {
               element = pop();
               printf("Element removed from stack is %d.\n", element);
            }
            break;

         case 3:
            if (!empty()) {
               element = top_element();
               printf("Element at the top of stack is %d\n\n", element);
            }
            else
               printf("Stack is empty.\n\n");
            break;

         case 4:
            if (empty())
               printf("Stack is empty.\n\n");
            else
               printf("Stack is not empty.\n\n");
            break;



         case 5:
            exit(0);
      }
   }
}
