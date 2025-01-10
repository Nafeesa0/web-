#include <stdio.h>
#include <stdlib.h>

#define MAX_NODES 100

int Adjmat[MAX_NODES][MAX_NODES]; // Adjacency matrix
int visit[MAX_NODES] = {0};      // Array to keep track of visited nodes
int stack[MAX_NODES];
int top = -1;
int numNodes;

int isEmpty() {
    return top == -1;
}

int isFull() {
    return top == MAX_NODES - 1;
}

void push(int element) {
    if (isFull()) {
        printf("Stack is full\n");
        return;
    }
    stack[++top] = element;
}

int pop() {
    if (isEmpty()) {
        printf("Stack is empty\n");
        return -1;
    }
    return stack[top--];
}

void dfs(int startNode) {
    push(startNode);
    printf("DFS Traversal: ");
    while (!isEmpty()) {
        int currentNode = pop();
        if (!visit[currentNode]) {
            printf("%d ", currentNode + 1); // Printing nodes as 1-based index
            visit[currentNode] = 1;

            // Push all adjacent vertices of the current node into the stack
            for (int i = numNodes - 1; i >= 0; i--) { // Reverse order for stack behavior
                if (Adjmat[currentNode][i] == 1 && !visit[i]) {
                    push(i);
                }
            }
        }
    }
    printf("\n");
}

int main() {
    printf("Enter the number of nodes: ");
    scanf("%d", &numNodes);

    if (numNodes > MAX_NODES) {
        printf("Number of nodes exceeds the maximum allowed (%d).\n", MAX_NODES);
        return 1;
    }

    printf("Enter the adjacency matrix:\n");
    for (int i = 0; i < numNodes; i++) {
        for (int j = 0; j < numNodes; j++) {
            scanf("%d", &Adjmat[i][j]);
        }
    }

    int startNode;
    printf("Enter the starting node (1 to %d): ", numNodes);
    scanf("%d", &startNode);

    if (startNode < 1 || startNode > numNodes) {
        printf("Invalid starting node.\n");
        return 1;
    }

    // Perform DFS starting from the given node
    dfs(startNode - 1); // Convert to 0-based index

    return 0;
}
