#include <stdio.h>
#include <stdlib.h>

struct Node { int data; struct Node *next; };

int main() {
    struct Node *head=NULL,*temp,*newN;
    int n,i;
    printf("Enter n: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        newN=(struct Node*)malloc(sizeof(struct Node));
        printf("Enter data: ");
        scanf("%d",&newN->data);
        newN->next=NULL;
        if(head==NULL) head=temp=newN;
        else { temp->next=newN; temp=newN; }
    }
    printf("List: ");
    for(temp=head;temp;temp=temp->next) printf("%d ",temp->data);
    return 0;
}
