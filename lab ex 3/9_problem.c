#include <stdio.h>
#define MAX 50
int bst[MAX];

void insert(int val) {
    int i = 0;
    while (i < MAX) {
        if (bst[i] == -1) {
            bst[i] = val;
            printf("Inserted %d\n", val);
            return;
        }
        else if (val < bst[i]) i = 2 * i + 1;  // left child
        else i = 2 * i + 2;                    // right child
    }
    printf("Tree Full!\n");
}

void inorder(int i) {
    if (i < MAX && bst[i] != -1) {
        inorder(2 * i + 1);
        printf("%d ", bst[i]);
        inorder(2 * i + 2);
    }
}

int main() {
    for (int i = 0; i < MAX; i++) bst[i] = -1; // initialize tree
    int ch, val;
    while (1) {
        printf("1.Insert 2.Display(Inorder) 3.Exit\n");
        scanf("%d", &ch);
        if (ch == 1) { 
            printf("Enter value: "); 
            scanf("%d", &val); 
            insert(val); 
        }
        else if (ch == 2) {
            printf("Inorder: ");
            inorder(0);
            printf("\n");
        }
        else if (ch == 3) break;
        else printf("Invalid!\n");
    }
    return 0;
}
