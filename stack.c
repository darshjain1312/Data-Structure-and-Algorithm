#include<stdio.h>
#define CAPACITY 5
int stack[CAPACITY], top=-1;
void push(int);
int pop();
int isFull();
int isEmpty();
void peek();
void traverse();
int main(){
	int ch,ele;
	while(1){
		printf("1. Insert(push)\n");
		printf("2. Delete(pop)\n");
		printf("3. Peek(peek)\n");
		printf("4. Traverse(visit)\n");
		printf("5. Exit\n");
		printf("Enter your choice\n");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				printf("Enter element: \n");
				scanf("%d",&ele);
				push(ele);
				break;
			case 2: 
				ele=pop();
				if(ele==0)
				{
					printf("Stack Underflow\n");
				}
				else{
					printf("poped item is %d\n",ele);
				}
				break;
			case 3: 
				peek();
				break;
			case 4:
				traverse();
				break;
			case 5: 
				exit(0);
			default:
				printf("Invalid choice Please enter correct no.\n");
		}
		
	}
	return 0;
}
void push(int ele){
	if(isFull())
		printf("Stack Overflow\n");
	else{
		top++;
		stack[top]=ele;
		printf("Element Pushed: %d\n",ele);
	}
}
int isFull(){
	if(top==CAPACITY-1)
		return 1;
	else 
		return 0;
}

int pop(){
	int ele;
	if(isEmpty()){
		return 0;
	}
	else{
		ele=stack[top--];
	}
}

int isEmpty(){
	if(top==-1)
		return 1;
	else
		return 0;
}

void peek(){
	if(isEmpty())
		printf("Stack Empty\n");
	else
		printf("Peek element is: %d\n",stack[top]);
	
}

void traverse(){
	if(isEmpty())
		printf("Stack Empty\n");
	else{
		int i;
		printf("stack element\n");
		for(i=0;i<=top;i++){
			printf("%d element is %d\n",i,stack[i]);
		}
	}
}




