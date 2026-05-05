#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node * prev;
	struct node * next;
};




struct node * pushfront(struct node * head, int n){
	
	struct node * newNode;
	
	newNode=(struct node *)malloc(sizeof (struct node));
	
	newNode->data= n;
	newNode->prev=newNode->next=NULL;
//	newNode->next = head;
	
	if(head==NULL){
		head= newNode;
		return head;
	}
	else{
		newNode->next= head;
		head->prev= newNode;
		head= newNode;
		
	}
	return head;
}

struct node * pushBack(struct node * head,int n){
	
	struct node * newNode,* taill;
	
	newNode= (struct node *)malloc(sizeof(struct node));
	
	newNode->data= n;
	

	newNode->next=NULL;
	
	if(head==NULL){
		head= newNode;
		
		return head;
	}
	else{
		taill= head;
		
		while(taill->next!=NULL){
			taill= taill->next;
		}
		
		newNode->prev=taill;
		taill->next=newNode;
		taill=newNode;
		
	}
	
	
	return head;
}

//delete

struct node * pop_front(struct node * head){
	struct node * temp;
	
	if(head==NULL){
		printf("\nList is empty");
		return head;
		
	}
	
	temp=head;
	
	head=head->next;
	
	if(head!=NULL){
		head->prev=NULL;
		temp->next =NULL;
		
		free(temp);
	}
	return head;
}

struct node * pop_back(struct node * head){
	
	struct node * temp,*tail;
	
	temp=head;
	
	
	while(temp->next!=NULL){
		temp=temp->next;
		tail=temp->prev;
		
	}
	temp->prev=NULL;
	tail->next=NULL;
	free(temp);
	
	
	return head;
}







void display(struct node *head) {
    struct node *temp = head;

    while (temp != NULL) {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
}


int main() {
    struct node *head = NULL;

 
    head=   pushfront(head,10);
    head = pushfront(head, 20);
    head = pushfront(head, 30);
    head = pushfront(head, 40);
    head=  pushBack(head,50);
    head=  pop_front(head);
    head=  pop_back(head);
    head=  pop_back(head);
   

    printf("Forward:\n");
    display(head);


    return 0;
}
