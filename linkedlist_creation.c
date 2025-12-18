#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node * next;
};

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
	head->data=13;
	head->next=third;
	
		//Link third node to fourth node
	head->data=100;
	head->next=fourth;
	
		//Link fourth node to Null 
	head->data=1000;
	head->next=NULL;
	
	
	
	
	return 0;
}
