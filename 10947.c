#include <stdio.h>
#include <time.h>

#define MAX 46

int getint(int num);

int main(){
  
  srand(time(NULL));

  int n1,n2,n3,n4,n5,bonus;
  n1 = getint(MAX);
  do {
    n2 = getint(MAX);
  } while (n1 == n2);
  do {
    n3 = getint(MAX);
  } while (n1 == n3 || n2 == n3);
  do {
    n4 = getint(MAX);
  } while (n1 == n4 || n2 == n4 || n3 == n4);
  do {
    n5 = getint(MAX);
  } while (n1 == n5 || n2 == n5 || n3 == n5 || n4 == n5);
  do {
    bonus = getint(MAX);
  } while (n1 == bonus || n2 == bonus || n3 == bonus || n4 == bonus || n5 == bonus);

  printf("%d %d %d %d %d %d\n", n1, n2, n3, n4, n5, bonus);

  return 0;
}

int getint(int num){
  return rand() % num + 1;
}
