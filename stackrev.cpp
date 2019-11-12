#include <iostream>
#include <stack>
#include <cstdio>
#include <cstring>
using namespace std;

/*void Reverse(char *C, int n){
    stack<char> S;
    for(int i=0;i<n;i++){
        S.push(C[i]);
    }
    for(int i=0;i<n;i++){
        C[i] = S.top();
        S.pop();
    }
}

int main(){
    char C[51];
    printf("Enter a string: \n");
    gets(C);
    Reverse(C, strlen(C));
    printf("Output = %s", C);
    return 0;
}  */

 typedef struct node{
     int data;
     struct node * next;
 }node_t;

 node_t * head = NULL;

 void Reverse(){
     if(head==NULL) return;
     stack<node_t *> S;
     node_t * temp = head;
     while(temp!=NULL){
         S.push(temp);
        temp = temp->next;
     }
     temp = S.top();
     head = temp;
     while(!S.empty()){
         temp->next = S.top()
         S.pop();
         temp = temp->next;
     }
     temp->next = NULL;
  }
