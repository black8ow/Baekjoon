#include <stdio.h>
#include <string.h>

typedef struct Node *NodePtr;

struct Node {
  int element;
  NodePtr next;
}

void Push(NodePtr, int);
void Pop(NodePtr);
void PrintSize(NodePtr);
void IsEmpty(NodePtr);
void PrintTop(NodePtr);

int main() {
  NodePtr S;
  S = malloc(sizeof(struct Node));
  S->next = NULL;
  if (S == NULL){
    printf("do not have enough space\n");
    return 0;
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
	IsEmpty(S);
        break;

      case top :
	PrintTop(S);
        break; 

  }

  MakeEmpty(S);
  return 0;
}

