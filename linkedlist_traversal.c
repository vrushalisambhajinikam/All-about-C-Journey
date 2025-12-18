#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node * next;
};

void linkedlistTraverse(struct Node *ptr)
{
	while(ptr!= NULL)
	{
		
		printf("Element: %d\n",ptr->data);
		ptr = ptr->next;
	}
	
}
int main()
{
	
	struct Node * head;
	struct Node * second;
	struct Node * third;
	struct Node * fourth;
	  
	//Dyanamic memory allocation for nodes in linked list in heap
	head = (struct Node*)malloc(sizeof(struct Node));
	second=(struct Node*)malloc(sizeof(struct Node));
	third=(struct Node*)malloc(sizeof(struct Node));
	fourth=(struct Node*)malloc(sizeof(struct Node));
	
	//Link first node to second node
	head->data=7;
	head->next=second;
	
		//Link second node to third node
	second->data=13;
	second->next=third;
	
		//Link third node to fourth node
	third->data=100;
	third->next=fourth;
	
		//Link fourth node to Null 
	fourth->data=1000;
	fourth->next=NULL;
	
	linkedlistTraverse(head);
	
	
	
	return 0;
}
