#include <stdio.h>

int main(){

  int num1, num2, sum;

  while(1){
    scanf("%d %d", &num1, &num2);
 
    if (num1 == 0 && num2 == 0) break;

    sum = num1 + num2;
    printf("%d\n", sum);
  }
  return 0;
}


