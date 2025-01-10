#include <stdio.h>

#define MAX 100 // Maximum number of nodes

int Adjmat[MAX][MAX]; // Adjacency matrix
int visit[MAX];       // Array to keep track of visited nodes
int queue[MAX];
int front = -1;
int rear = -1;

int isEmpty() {
    return front == -1;
}

int isFull(int size) {
    return rear == size - 1;
}

void enqueue(int element, int size) {
    if (isFull(size)) {
        printf("Queue is full\n");
        return;
    }
    if (isEmpty()) {
        front = rear = 0;
    } else {
        rear++;
    }
    queue[rear] = element;
}

int dequeue() {
    if (isEmpty()) {
        printf("Queue is empty\n");
        return -1;
    }
    int element = queue[front];
    if (front == rear) {
        front = rear = -1;
    } else {
        front++;
    }
    return element;
}

void bfs(int startNode, int nodes) {
    enqueue(startNode, nodes);
    visit[startNode] = 1;
    printf("BFS Traversal: ");
    while (!isEmpty()) {
        int currentNode = dequeue();
        printf("%d ", currentNode + 1); // Printing nodes as 1-based index
        for (int i = 0; i < nodes; i++) {
            if (Adjmat[currentNode][i] == 1 && visit[i] == 0) {
                enqueue(i, nodes);
                visit[i] = 1;
            }
        }
    }
    printf("\n");
}

int main() {
    int nodes, startNode;

    printf("Enter the number of nodes: ");
    scanf("%d", &nodes);

    if (nodes > MAX) {
        printf("Number of nodes exceeds the maximum limit (%d).\n", MAX);
        return 1;
    }

    printf("Enter the adjacency matrix:\n");
    for (int i = 0; i < nodes; i++) {
        for (int j = 0; j < nodes; j++) {
            scanf("%d", &Adjmat[i][j]);
        }
    }

    printf("Enter the starting node (1-based index): ");
    scanf("%d", &startNode);

    // Validate starting node
    if (startNode < 1 || startNode > nodes) {
        printf("Invalid starting node.\n");
        return 1;
    }

    // Initialize visit array to 0
    for (int i = 0; i < nodes; i++) {
        visit[i] = 0;
    }

    // Perform BFS
    bfs(startNode - 1, nodes);

    return 0;
}
