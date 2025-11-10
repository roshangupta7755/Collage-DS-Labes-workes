#include <stdio.h>
#define MAX 5
int q[MAX], front = -1, rear = -1;

void enqueue(int x) {
    if (rear == MAX - 1) printf("Overflow\n");
    else {
        if (front == -1) front = 0;
        q[++rear] = x;
        printf("Inserted %d\n", x);
    }
}

void dequeue() {
    if (front == -1 || front > rear) printf("Underflow\n");
    else {
        printf("Deleted %d\n", q[front++]);
        if (front > rear) front = rear = -1;
    }
}

void display() {
    if (front == -1) printf("Empty\n");
    else {
        for (int i = front; i <= rear; i++) printf("%d ", q[i]);
        printf("\n");
    }
}

int main() {
    int ch, val;
    while (1) {
        printf("1.Enqueue 2.Dequeue 3.Display 4.Exit\n");
        scanf("%d", &ch);
        switch (ch) {
            case 1: scanf("%d", &val); enqueue(val); break;
            case 2: dequeue(); break;
            case 3: display(); break;
            case 4: return 0;
            default: printf("Invalid\n");
        }
    }
}
