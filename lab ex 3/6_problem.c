#include <stdio.h>
#define MAX 5
int s[MAX], top=-1;

void push(int x){ if(top==MAX-1) printf("Overflow\n"); else s[++top]=x; }
void pop(){ if(top==-1) printf("Underflow\n"); else printf("Popped %d\n",s[top--]); }
void peek(){ if(top==-1) printf("Empty\n"); else printf("Top %d\n",s[top]); }
void disp(){ if(top==-1) printf("Empty\n"); else for(int i=top;i>=0;i--) printf("%d ",s[i]); printf("\n"); }

int main(){
    int ch,v;
    while(1){
        printf("1.Push 2.Pop 3.Peek 4.Disp 5.Exit\n");
        scanf("%d",&ch);
        if(ch==1){ scanf("%d",&v); push(v); }
        else if(ch==2) pop();
        else if(ch==3) peek();
        else if(ch==4) disp();
        else if(ch==5) break;
        else printf("Invalid\n");
    }
}
