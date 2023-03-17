#include <stdio.h>

int cuadradoNumero(int num);
void cuadradoNumeroVoid(int num);
void invertirNumeros(int* pA,int* pB);
void ordenarNumeros(int* n1,int* n2);

int main() {
    int num,parametroA,parametroB,numA,numB;
    printf("Ingresar un numero entero: ");
    scanf("%d",&num);
    printf("\nSu cuadrado es: %d",cuadradoNumero(num));
    cuadradoNumeroVoid(num);
    printf("\nIngresar parametro A: ");
    scanf("%d",&parametroA);
    printf("\nIngresar parametro B: ");
    scanf("%d",&parametroB);
    invertirNumeros(&parametroA,&parametroB);
    printf("\nIngresar numero A: ");
    scanf("%d",&numA);
    printf("\nIngresar numero B: ");
    scanf("%d",&numB);
    ordenarNumeros(&numA,&numB);
    return 0;
}

int cuadradoNumero(int num) { return num*num;}

void cuadradoNumeroVoid(int num) {
    printf("\nDireccion: %p\nContenido: %d",&num,num);
    printf("\nSu cuadrado es: %d",(num*num));
}

void invertirNumeros(int* pA,int* pB) {
    int aux;
    aux = *pA;
    *pA = *pB;
    *pB = aux;
    printf("\nNumeros invertidos\nParametro A: %d\nParametro B: %d",*pA,*pB);
}

void ordenarNumeros(int* n1,int* n2) {
    if(*n1 > *n2) {
        int aux;
        aux = *n1;
        *n1 = *n2;
        *n2 = aux;
    }
    printf("Valor mas chico: %d\nValor mas grande: %d",*n1,*n2);
}