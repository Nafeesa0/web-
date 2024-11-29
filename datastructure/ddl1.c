#include <stdio.h>
#include <stdlib.h>

struct Node 
{
	int data;
	struct Node *prev;
	struct Node *next;
};

struct Node* head = NULL;

//  create a new node

struct Node* createNode(int data) 
{
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = data;
	newNode->prev = NULL;
	newNode->next = NULL;
	return newNode;
}

// insert a node at the front of the list
void insertAtFront(int data) 
{
	struct Node* newNode = createNode(data);
	if (head == NULL) 
	{
        	head = newNode;
	} 
	else 
	{
        	newNode->next = head;
        	head->prev = newNode;
        	head = newNode;
	}
}

//insert a node at any
void insertAtAny(int data,int position)
{
	if(position < 1)
	{
		count << "Invalid position";
		return;
	}
	if(position == 1)
	{
		insertionAtFront(data);
		return;
	}
	Node* temp =head;
	int i=1;
	while(temp != NULL && i < position - 1)
	{
		temp=temp -> next;
		i++;
	}
	if(temp ==NULL)
	{
		count << "Position out of bounds\n";
		return;
	}
	Node* newNode = newNode;
	newNode -> data = data;
	newNode -> next = temp -> next;
	newNode -> prev = temp;
	if(temp -> next != NULL)
	{
		temp -> next -> prev = newNode;
	}
	temp -> next = newNode;
}

//  insert a node at the end of the list
void insertAtEnd(int data) 
{
	struct Node* newNode = createNode(data);
	if (head == NULL) 
	{
		head = newNode;
	} 
	else 
	{
		struct Node* last = head;
		while (last->next != NULL) 
		{
			last = last->next;
		}
		last->next = newNode;
		newNode->prev = last;
	}
}

// delete the first node from the list
void deleteAtFront() 
{
	if (head == NULL) 
	{
		printf("List is empty\n");
		return;
	}

	struct Node* temp = head;
	head = head->next;
	if (head != NULL) 
	{
		head->prev = NULL;
	}
	free(temp);
}

// traversal
void traversal() 
{
	struct Node* current = head;
	while (current != NULL) 
	{
		printf("%d ", current->data);
		current = current->next;
	}
	printf("\n");
}

int main() 
{
	int choice, data;

	do 
	{
	        printf("\nMenu:\n");
	        printf("1. Insert at Front\n");
	        printf("2. Insert at End\n");
	        printf("3. Delete at Front\n");
	        printf("4.traversal\n");
		printf("5. Exit\n");
        	printf("Enter your choice: ");
        	scanf("%d", &choice);

        	switch (choice) 
		{
			case 1:
			printf("Enter data to insert at front: ");
			scanf("%d", &data);
			insertAtFront(data);
			break;

			case 2:
			printf("Enter data to insert at end: ");
			scanf("%d", &data);
			insertAtEnd(data);
			break;

			case 3:
			deleteAtFront();
			break;

			case 4:
			traversal();
			break;

			case 5:
			printf("Exiting...\n");
			break;
			default:

			printf("Invalid choice!\n");
		}
	} 
	while (choice != 5);

	return 0;
}
