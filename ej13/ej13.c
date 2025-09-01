#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int arr[6] = {1,2,3,4,5,6};

    for (long long int i = 0; i < 600000000; i++)
    {
        int dado = rand() % 6;
        arr[dado]++;
    }
    for (int i = 0; i < 6; i++) {
        printf("Numero de veces que %d salio: %d \n", i+1, arr[i]);
    }
    
}