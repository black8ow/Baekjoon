#include <stdio.h>

long long fibo(int num);

long long first_fibo = 0;
long long second_fibo = 1;

long long sum = 0;

int main(){
  int input;
  scanf("%d", &input);
  printf("%lld\n", fibo(input));
  return 0;
}

long long fibo(int num){
  
  if (num == 0) return first_fibo;
  if (num == 1) return second_fibo;
  
  int i;
  
  for (i = num; i > 1; i--){
    sum = first_fibo + second_fibo;
    first_fibo = second_fibo;
    second_fibo = sum;  
  }
  return sum;
}
