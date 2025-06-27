#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    char str[15];
    int die1, die2;
    int total=0;

    printf("What is your name?\n> ");
    scanf("%s",str);
    printf("Hello, %s!\n",str);

    srand((unsigned) time(NULL));

    printf("Rolling dice...\n");
    die1 = rand() % 6 + 1;
    die2 = rand() % 6 + 1;
  
    total = die1 + die2;

    printf("Die 1: %d\nDie 2: %d\nTotal value: %d\n",die1, die2, total);

    if(total > 7){
        printf("You won!\n");
    }
    else {
        printf("You lost!\n");
    }

    return 0;
}
