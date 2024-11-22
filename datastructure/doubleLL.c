#include <stdio.h>
#include <stdlib.h>

struct Node
{
	int data;
	struct Node *Llink;
	struct Node *Rlink;
};
struct Node *header = NULL;
struct Node *createNode(int data)
{
	struct Node *newnode;
	newnode = malloc(sizeof(struct Node));
	newnode -> data = data;
	newnode -> Llink = NULL;
	newnode -> Rlink = NULL;
	return(newnode);
}

//insertion at front

void insertAtFront(int data)
{
struct Node *newnode;
	if (header == NULL)
	{
		newnode = createNode(data);
		header = newnode;
	}
	else
	{
		newnode = createNode(data);
		newnode -> Rlink = header;
		header -> Llink = newnode;
		header = newnode;
	}
}

//traversal

void traversal()
{
	struct Node *ptr;
	ptr=header;
	while(ptr != NULL)
	{
		printf("%d",ptr -> data);
		ptr = ptr -> Rlink;
	}
	printf("\n");
}

int main()
{
	 insertAtFront(12);
	 insertAtFront(13);
	 insertAtFront(14);
	 insertAtFront(15);

	traversal();
	return 0;
}
