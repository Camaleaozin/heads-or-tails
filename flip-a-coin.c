#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    char *array[] = {"Heads", "Tails"};  //arrays
    srand(time(NULL));                   //srand
    printf("%s", array[rand() % 2]);     //rand

    return 0;
}