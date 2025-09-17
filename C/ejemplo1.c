#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ejemplo1() {
    int x = 5;
    int *p = &x;
    printf("Ejemplo 1: x = %d, *p = %d\n", x, *p);
}

void ejemplo2() {
    int x = 10;
    int *p = &x;
    *p = 20;
    printf("Ejemplo 2: x = %d\n", x);
}
void ejemplo3() {
    int arr[3] = {1, 2, 3};
    int *p = arr;
    printf("Ejemplo 3: Primer elemento = %d\n", *p);
}
void ejemplo4() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *p = arr;
    printf("Ejemplo 4: Array: ");
    for(int i = 0; i < 5; i++) {
        printf("%d ", *(p + i));
    }
    printf("\n");
}
void ejercicio1() {
    int y = 15;
    int *p = &y;
    printf("Ejercicio 1: Dirección de y = %p, Valor de y = %d\n", (void*)p, *p);
}
void ejercicio2() {
    int z = 7;
    int *p = &z;
    *p = 99;
    printf("Ejercicio 2: Nuevo valor de z = %d\n", z);
}
void ejercicio3() {
    int arr[4] = {4, 8, 12, 16};
    int *p = arr;
    printf("Ejercicio 3: Segundo elemento = %d\n", *(p + 1));
}
void ejercicio4() {
    int nums[6] = {1, 2, 3, 4, 5, 6};
    int *p = nums;
    int suma = 0;
    for(int i = 0; i < 6; i++) {
        suma += *(p + i);
    }
    printf("Ejercicio 4: Suma de elementos = %d\n", suma);
}
int main() {
    ejemplo1();
    ejemplo2();
    ejemplo3();
    ejemplo4();
    ejercicio1();
    ejercicio2();
    ejercicio3();
    ejercicio4();
    return 0;
}