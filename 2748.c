#include <stdio.h>

int fibo(int num);
int first_fibo = 0;
int second_fibo = 1;
int sum = 0;

int main(){

  int input;
  scanf("%d", &input);

  printf("%d\n", fibo(input));

  return 0;
}

int fibo(int num){
  
  if (num == 1) return first_fibo;
  if (num == 2) return second_fibo;

  int i;
  for (i = num; i > 1; i--){
    sum = first_fibo + second_fibo;
    first_fibo = second_fibo;
    second_fibo = sum;  
  }
  return sum;
}

