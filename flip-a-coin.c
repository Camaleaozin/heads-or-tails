#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    char *array[] = {"Heads", "Tails"};
    srand(time(NULL));
    printf("%s", array[rand() % 2]);

    return 0;
}