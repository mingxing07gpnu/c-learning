#include <stdio.h>

int main(void) {
    char name[50];

    printf("What's your name? ");
    if (scanf("%49s", name) != 1) {
        return 1;
    }
    printf("Hello, %s! Day 01 of learning C.\n", name);

    return 0;
}
