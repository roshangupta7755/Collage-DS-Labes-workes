#include <stdio.h>
#define MAX 5
int q[MAX], f = -1, r = -1;

void enq(int x) {
    if (r == MAX - 1) printf("Overflow\n");
    else {
        if (f == -1) f = 0;
        q[++r] = x;
        printf("Inserted %d\n", x);
    }
}

void deq() {
    if (f == -1 || f > r) printf("Underflow\n");
    else {
        printf("Deleted %d\n", q[f++]);
        if (f > r) f = r = -1;
    }
}

void disp() {
    if (f == -1) printf("Empty\n");
    else {
        for (int i = f; i <= r; i++) printf("%d ", q[i]);
        printf("\n");
    }
}

int main() {
    int ch, v;
    while (1) {
        printf("1.Enq 2.Deq 3.Disp 4.Exit\n");
        scanf("%d", &ch);
        if (ch == 1) { scanf("%d", &v); enq(v); }
        else if (ch == 2) deq();
        else if (ch == 3) disp();
        else if (ch == 4) break;
        else printf("Invalid\n");
    }
}
