#include <stdio.h>

int main(void) {
  int i,num;
  printf("\nEnter a numbers :");
  scanf("%d",&num);
  printf("\nthe even numbers from 2 to %d are:\n",num);
  for(i=1;i<=num;i++)
  {
    if(i%2!=0)
    continue;
    printf("\t%d",i);
  }
  
  return 0;
}