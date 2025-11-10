#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int main() {
    struct Node *header = (struct Node*)malloc(sizeof(struct Node));
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    
    header->data = 0;  
    header->next = newNode;
    
    newNode->data = 10;
    newNode->next = NULL;
    
    printf("Header node data: %d\n", header->data);
    printf("Next node data: %d\n", header->next->data);
    
    return 0;
}
