#include<stdio.h>

int main(){
    int i;
    int *pi = &i;

    scanf("%d", pi);
    printf("%d\n", i+5);
}