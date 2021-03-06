#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Node *NodePtr;
typedef NodePtr Stack;

struct Node {
  int element;
  NodePtr next;
};

int size = 0;

void Push(Stack, int);
void Pop(Stack);
void PrintSize(Stack);
int IsEmpty(Stack);
int PrintTop(Stack);
void MakeEmpty(Stack);

int main() {
  Stack S;
  S = malloc(sizeof(struct Node));
  S->next = NULL;
  if (S == NULL){
    printf("do not have enough space\n");
    return -1;
  }
  
  int input, i;
  char command[10];

  scanf("%d", &input);
  
  for (i = input; i > 0; i--){

    scanf("%s", &command);
   
    if (!strcmp(command, "push")){
      int push_num;
      scanf("%d", &push_num);
      Push(S, push_num);
    }

    else if (!strcmp(command, "pop")){
      if (size == 0) printf("-1\n");
      else {
          int k;
          k = PrintTop(S);
          printf("%d\n", k);
          Pop(S);
      }
    }

    else if (!strcmp(command, "size")){
      PrintSize(S);
    }

    else if (!strcmp(command, "empty")){ 
      int result;
      result = IsEmpty(S);
      printf("%d\n", result);
    }   
   
    else if (!strcmp(command, "top")){
      int top_num;
      top_num = PrintTop(S);
      printf("%d\n", top_num);
    }

    else printf("unknown input\n");

  }

  MakeEmpty(S);
  return 0;
}

void MakeEmpty(Stack S){
  while (!IsEmpty(S)) Pop(S);
}

void Push(Stack S, int new){

  NodePtr new_cell;
  new_cell = malloc(sizeof(struct Node));

  if (new_cell == NULL){
    printf("do not have enough space\n");
  }

  new_cell->element = new;
  new_cell->next = S->next;
  S->next = new_cell;
  size++;

}

void Pop(Stack S){

  NodePtr rmv_cell;
  rmv_cell = S->next;
  S->next = S->next->next;
  free(rmv_cell);
  size--;
}

void PrintSize(Stack S){
  printf("%d\n", size);
}

int IsEmpty(Stack S){
  if (S->next == NULL) return 1;
  return 0;
}

int PrintTop(Stack S){
  if (!IsEmpty(S)) return S->next->element;
  return -1;
}


