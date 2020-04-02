#include <stdlib.h>
#include <stdio.h>
struct Node{
  int val;
  struct Node* left;
  struct Node* right;
};
struct queueNode{
  struct Node* np;
  struct queueNode* next;
};

void printTreeBFS(struct Node* head);
void insert(struct queueNode** hp, struct queueNode** tp, struct queueNode* ip);
struct queueNode* pop(struct queueNode** hp,struct queueNode** tp);
void test(int* tp){
  *tp=80;
}

int main(){
  //struct Node n0;
  //printf("size of Node=%ld\n",sizeof(struct test));
  //printf("size of an int=%ld\n",sizeof(struct Node));
  struct Node* head = malloc(sizeof(struct Node));
  head->val=10;
  struct Node* n1 = malloc(sizeof(struct Node));
  struct Node* n2 = malloc(sizeof(struct Node));
  n1->val = 9;
  n2->val = 30;
  head->left = n1;
  head->right = n2;
  struct Node* n3 = malloc(sizeof(struct Node));
  struct Node* n4 = malloc(sizeof(struct Node));
  n3->val = 1;
  n4->val = 7;
  n1->left = n3;
  n1->right = n4;
  //struct Node* tp = NULL;
  //int k=100;
  //int * tp=&k;
  //test(tp);
  //printf("%d",k);
  printTreeBFS(head);
  
  return 0;
}
void insert(struct queueNode** head, struct queueNode** tail, struct queueNode* node){
  if(NULL != *tail){
    (*tail)->next = node;
    *tail = node;

  } else {
    *tail = node;
    *head = node;
  }
}
struct queueNode* pop(struct queueNode** head, struct queueNode** tail){
  struct queueNode* tmp;
  struct queueNode* trimp;
  if(*head==NULL) return NULL;
  tmp = (*head)->next;
  if(NULL == tmp){ *tail=NULL;}
  (*head)->next = NULL;
  trimp = *head;
  *head = tmp;
  return trimp;
  
}

void treeToQueue(struct queueNode* qhp, struct queueNode* qtp, struct Node* hp){
  qhp->np=hp;
  /*qhp->next = malloc(sizeof(struct queueNode));
  qHeadp->next->np=hp->left;
  qHeadp->next = malloc(sizeof(struct queueNode));
  qHeadp->*/
  
  
}

void printTreeBFS(struct Node* hp){
  
  
  struct queueNode* qHeadp = NULL; //malloc(sizeof(struct queueNode));
  struct queueNode* qTailp = NULL; //malloc(sizeof(struct queueNode));
  struct queueNode* tmp = malloc(sizeof(struct queueNode));
  tmp->np=hp;
  insert(&qHeadp, &qTailp, tmp);
  struct queueNode* curp = pop(&qHeadp, &qTailp);
  //treeToQueue(qHeadp, qTailp, hp);
  //queueNode* curp = qHeadp;
  do{
    printf("%d,",curp->np->val);
    if(curp->np->left != NULL){
      struct queueNode* lp = malloc(sizeof(struct queueNode));
      lp->np = curp->np->left;
      insert(&qHeadp, &qTailp, lp);
    }
    if(curp->np->right != NULL){
      struct queueNode* rp = malloc(sizeof(struct queueNode));
      rp->np = curp->np->right;
      insert(&qHeadp, &qTailp, rp);
    }
    curp = pop(&qHeadp,&qTailp);
    if(curp == NULL){break;}
  }while(1);
  
  

  
  

}
