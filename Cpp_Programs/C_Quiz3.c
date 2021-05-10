// #include<iostream>
#include<stdio.h>
// using namespace std; 

int fun(char *str1){
    char *str = str1;
    while(*++str1);
    printf("%s", str1);
   
    return (str1-str);
}


int main(){

    // char *str = "RamanQuiz";
    // printf("%d", fun(str));


    // int a[5] ={6,4,3};
    // for(int i = 0; i < 5 ; i++){
    //     printf("%d", a[i]);
    // }

  
    return 0;
}