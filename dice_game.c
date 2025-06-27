#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int die1, die2;
    int total=0;

    srand((unsigned) time(NULL));

    printf("Rolling dice...\n");
    die1 = rand() % 6 + 1;
    die2 = rand() % 6 + 1;
  
    total = die1 + die2;

    printf("Die 1: %d\nDie 2: %d\nTotal value: %d\n",die1, die2, total);
}
