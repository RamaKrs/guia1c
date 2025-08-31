#include <stdio.h>
// va a ser el ej11 al final y 12. 
// Hecho en O(n) temportal y O(n) espacial, si se usa rotacion in place se puede usar O(1) espacial

#define ARR_LENGTH 4

int main() {
    int arr[] = {1,2,3,4};
    int arr_aux[4] = {-1};
    int rotacion = 1;
    printf("Ingrese la rotacion:");
    scanf("%d", &rotacion);
    printf("primer pos de arr: %d \n", arr[0]);
    printf("size del elem: %lld \n", sizeof(arr[0]));
    
    for (int i = 0; i < ARR_LENGTH; i++)
    {
        arr_aux[i] = arr[(i+rotacion)%ARR_LENGTH];
        printf("i pos despues del cambio: %d \n", arr_aux[i]);
    }
    
    for (int i = 0; i < ARR_LENGTH; i++)
    {
        arr[i] = arr_aux[i];
    }
    

}