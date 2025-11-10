#include <stdio.h>
#define MAX 5
int cq[MAX], front = -1, rear = -1;

void enqueue(int x) {
    if ((rear + 1) % MAX == front)
        printf("Overflow\n");
    else {
        if (front == -1) front = 0;
        rear = (rear + 1) % MAX;
        cq[rear] = x;
        printf("Inserted %d\n", x);
    }
}

void dequeue() {
    if (front == -1)
        printf("Underflow\n");
    else {
        printf("Deleted %d\n", cq[front]);
        if (front == rear)
            front = rear = -1;
        else
            front = (front + 1) % MAX;
    }
}

void display() {
    if (front == -1)
        printf("Empty\n");
    else {
        int i = front;
        printf("Queue: ");
        while (1) {
            printf("%d ", cq[i]);
            if (i == rear) break;
            i = (i + 1) % MAX;
        }
        printf("\n");
    }
}

int main() {
    int ch, v;
    while (1) {
        printf("1.Enqueue 2.Dequeue 3.Display 4.Exit\n");
        scanf("%d", &ch);
        if (ch == 1) { scanf("%d", &v); enqueue(v); }
        else if (ch == 2) dequeue();
        else if (ch == 3) display();
        else if (ch == 4) break;
        else printf("Invalid\n");
    }
}
