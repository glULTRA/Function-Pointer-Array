#include <stdio.h>
#include <string.h>

int add(int n1, int n2);
int sub(int n1, int n2);

int main(void)
{
    int n1 = 20, n2 = 30;
    int (*Calc[2])(int,int) = {add, sub};

    printf("add of %d and %d is %d\n", n1, n2, Calc[0](n1,n2));
    printf("sub of %d and %d is %d\n", n1, n2, Calc[1](n1,n2));
}

int add(int n1, int n2){
    return n1 + n2;
}
int sub(int n1, int n2){
    return n1 - n2;
}
