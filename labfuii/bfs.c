//bfs
#include<stdio.h>

int FRONT = -1,REAR = -1;  
int queue[maxsize];  


int adjmtr[4][4] = {{0,0,1,0},{1,0,0,0},{0,0,0,1},{0,0,1,0}};
//visit array 
int visit[4] = {0,0,0,0};

int Queue[4];

void enqueue()
{
	int ITEM;
	printf("\nEnter the element : \n");
	scanf("%d",&ITEM);
	if (REAR == maxsize-1)
	{
		printf("\n Overflow \n");
		return;
	}
	if (FRONT == -1 && REAR == -1)
	{
		FRONT = REAR = 0;
	}
	else
	{
		REAR = REAR + 1;
	}
	queue[REAR] = ITEM;
	printf("\n element inserted\n");
}

void dequeue()
{
	int ITEM;
	if (FRONT ==-1)
	{
	printf("\n UNDERFLOW\n");
	return;	
	}
	else
	{
	ITEM = queue[FRONT];
	if (FRONT == REAR)
	{
		FRONT = -1;
		REAR = -1;
	}
	else
	{
		FRONT = FRONT + 1;

	}
	printf("\n element deleted\n");
	}
}

