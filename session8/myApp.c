#include <stdio.h>
#include <stdlib.h>

int main(){
  

  int *number = malloc(sizeof(int));
  puts("Enter a number : ");
  scanf("%i",number);
  printf("you have entered %i and save it to %p address.\n",*number,number);

  free(number);  
  return 0;
}

