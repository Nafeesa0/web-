#include<stdio.h>
#include<stdlib.h>


struct node 
{
    int data;
    struct node *link;
};

struct node *header = NULL;

struct node *CreateNode(int data) 
{
    struct node *newNode;
    newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->link = NULL;
    return newNode;
}


void insertAtFront(int data) 
{
    struct node *newNode = CreateNode(data);
    newNode->link = header;
    header = newNode;
}

void traversal()
{
	struct node *ptr;
	ptr=header;
	while(ptr != NULL)
	{
		printf("%d",ptr -> data);
		ptr=ptr -> link;
	}
}

int main() 
{
	struct node *node;
	node = CreateNode(10);
	node = CreateNode(200);

    printf("Node data: %d\n", node->data);

    return 0;
}

