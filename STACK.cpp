#include<stdio.h>
#include<stdlib.h>
#define SIZE 5

int stack[5];
int top= -1;

void push(int n){
	if (top==SIZE-1){
		printf("\n Stack overflow");
	}
	else{
		top++;
		stack[top]=n ;
		printf("\n push into %d", n);
	}
}


void pop(){
	if(top==-1){
		printf("stack underflow");
	}
	else{
		printf("\n stack pop from:%d",stack[top]);
		top--;
	}
}

void peek(){
	if(top==-1){
		printf("Stack is empty");
	}
	else{
		printf("\ntop of the stack is :%d", stack[top]);
	}
}
void display() {
    int i;

    if(top == -1) {
        printf("Stack is empty\n");
    }
    else {
        printf("\nStack elements are:\n");

        for(i = top; i >= 0; i--) {
            printf("%d\n", stack[i]);
        }
    }
}

int main() {

    push(1);
    push(2);
    push(3 );
    push(4);
    push(5);
    pop();
    peek();
    

    display();

   

    return 0;
}
