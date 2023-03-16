#include <stdio.h>

int main() {
    int num, *pNum;
    pNum = &num;
    printf("Hola mundo\n");
    printf("%p\n",pNum);
    printf("%p\n",&pNum);
    printf("%d\n",sizeof(pNum));
    printf("%d\n",*pNum);
    
    return 0;
}