#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int main(){
 
  int s1,s2,total=0;
  char name[20];
  printf("What is your name?\n");
  printf("> ");
  scanf("%s",name);

  printf("Hello, %s!\n",name);

  srand((unsigned)time(NULL));
  printf("Rolling the dice...\n");

  s1 = rand() % 6 + 1;  
  s2 = rand() % 6 + 1;

  printf("Die 1: %d \n",s1);
  printf("Die 2: %d \n",s2);
  total = s1 + s2;
  printf("Total value: %d\n",total);

  if(total<8) printf("%s lost!\n",name);
  else if(total>=8) printf("%s won!\n",name);
  return 0;
}
