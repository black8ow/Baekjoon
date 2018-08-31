#include <stdio.h>
#include <string.h>

typedef struct Node *NodePtr;
typedef NodePtr Stack;

struct Node {
  int element;
  NodePtr next;
}
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
  string command;

  scanf("%d", &input);
  
  for (i = input; i > 0; i--){

    scanf("%s", &command);
    switch(command){

      case push :
	int push_num;
	scanf("%d", &push_num);
	Push(S, push_num);
        break;

      case pop :
	Pop(S);
        break;

      case size :
	PrintSize(S);
        break;

      case empty : 
	int result;
	result = IsEmpty(S);
	printf("%d\n", result);
        break;

      case top :
	int top_num;
	top_num = PrintTop(S);
	printf("%d\n", top_num);
        break; 

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
    return -1;
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
  printf("empty stack\n");
  return -1;
}


