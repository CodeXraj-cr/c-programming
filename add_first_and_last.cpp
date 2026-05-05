#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node * next;
};

struct node* first(struct node * head, int n){
	
	struct node * newNode;
	
	newNode= (struct node *)malloc(sizeof(struct node));
	
	newNode->data= n;
	
	newNode->next=head;
	
	
	if(head==NULL){
		head=newNode;
		return newNode;
	}
	
	newNode->next= head;
	head=newNode;
	
	return newNode;
	
	
}

struct node * last(struct node * head,int n){
	struct node * newNode, *temp;
	
	newNode= (struct node *)malloc(sizeof(struct node));
	
	newNode->data=n;
	newNode->next= NULL;
	
	if(head==NULL){
		head= newNode;
		
		return newNode;
	}
	
	temp=head;
	
	while(temp->next!= NULL){
		temp= temp->next;
	}
	temp->next=newNode;
	
	return head;
}
struct node * deletefast(struct node * head){
	if(head==NULL){
		printf("List empty");
		return head ;
	}
	head= head->next;
}

struct node * deletelast( struct node *head){
	struct node * c, * temp;
	
	if(head== NULL){
		printf("\nList is empty");
		return head;
	}
	if(head->next==NULL){
	//	head=NULL;
		head=head->next;
		
		return head;
	}
	
	temp= head;
	while(temp->next!= NULL){
		
		c=temp;
		temp= temp->next;
		
	}
	c->next=NULL;
	temp=temp->next;
	
	return head;
}





void print(struct node *head){
	
	while(head !=NULL){
		printf("%d ->", head->data);
		
		head= head->next;
	}
	printf("NULL");
}



int main(){
	struct node *head=NULL;
	
	head= first(head,4);
	head= first(head,3);
	head= first(head,2);
	head= first(head,1);
    head= last(head,5);
    head=deletefast(head);
  //  head=deletefast(head);
  head=deletelast(head);
	
	print(head);
	
	return 0;
	
}
