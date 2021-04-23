// #include<iostream>
#include<stdio.h>
// using namespace std; 

int fun(char *str1){
    char *str = str1;
    while(*++str1);
   
    return (str1-str);
}


int main(){

    char *str = "RamanQuiz";
    printf("%d", fun(str));
    return 0;
}