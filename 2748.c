#include <stdio.h>

int fibo(int num);
int result;

int main(){

  int input;
  scanf("%d", &input);

  printf("%d\n", fibo(input));

  return 0;
}

int fibo(int num){
  
  if (num == 0) return 0;
  if (num == 1) return 1;

  else result = fibo(num - 2) + fibo(num - 1);

  return result;
}

