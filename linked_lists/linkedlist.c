#include <stdio.h>
#include <stdlib.h>

typedef struct NodeT {
    struct NodeT* previous;
    int value;
    struct NodeT* next;
} Node;

int main(){
    printf("Hello world\n");

    Node* head = NULL;
    head = (Node *) malloc(sizeof(Node));

    head->value = 8;

    int max_nodes = 5;

    Node* nodes[4];

    nodes[0] = head;

    for(int i = 1; i < max_nodes; i++){
        Node* node_next = NULL;
        node_next = (Node *) malloc(sizeof(Node));

        node_next->value = i;

        node_next->previous = nodes[i-1];

        node_next->previous->next = node_next;

        nodes[i] = node_next;
    }

    nodes[3]->next = head;

    for(int i = 0; i < max_nodes; i++){
        printf("%d\n", nodes[i]->next->previous->value);
    }

    return 0;
}
