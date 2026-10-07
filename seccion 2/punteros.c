#include <stdio.h>

int x = 10;
int y = 20;
int vector[5] ={1,2,3,4,5};

int *p;

int main() {
    printf("el valor de x es: %d\n, x ");
    printf("la direccion de x es: %p\n, p ");
    printf("el valor de y es: %d\n, y ");

    p = &vector[2];
    int z = vector[2];
    *p = 22;

    for (int i = 0; i < 5; i++) {

        printf(" el valor del vector[%d] es: %d\n", i, vector[i]);
        
    }

    printf("el valor de p quee apunta a vector[2] es %p\n", p);
    printf("el valor de z es: %d\n", z);
    p = &z;
    printf("el valor de p que apunta a z es: %p\n", p);
    return 0;


}