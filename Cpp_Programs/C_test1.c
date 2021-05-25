// #include<iostream>
// using namespace std;


#include<stdio.h>
#include<stdlib.h>
// int func(int m, int n){
//     if(n==0 || m==1){
//             return 1;
//     }
//     else{
//         return(func(m-1, n)+ func(m-1,n-1));
//     }
// }


// struct test{
//     int i;
//     char *c;
// } st[] = {5,"become",4,"better",6,"jungle",8,"ancestor",7,"brother"};





// struct test *p = st;

//     p+=1;
//   ++p->c;
//     printf("%s",p++->c);
//     printf("%c", *++p->c);
//     printf("%d", p[0].i);
//     printf("%s",p++->c);

    // int a[]={6,2,3,4,5,6};

    // int i,j,k;

    // j = ++a[2];
    // k =  a[1]++;
    // cout<<i;
    // i = a[i++];
     
    //  cout<<i<<j<<k;
// ??????????????????????????????????????????????????????????????????????


// int a[][2] = {2,4,1,3};

//     int sum = 0, j =0,i;
// cout<<a[0][1]<<endl;
//     for(i = 0 ; i< 2; i++,j++){
//         sum = sum + a[i][j] + i + j;
//         cout<<sum<<a[i][j]<<endl;

//     }

// cout<<sum;



        // cout<<func(3,2);



// int num[3][2] = {2,7,10,12,15,18};

// printf("%d%d%d",*(num+0)[1],**(num+2), num[2][0]);


// int x = 10;
// do{
//     x++;

// }while(x++ > 12);

// printf("%d", x);
// enum numbers{
//     zero,one=10,two,three,four = 3,five, six, seven = 0, eight
// };

// printf("%d %d %d %d %d %d %d %d %d" ,zero,one,two,three,four,five, six, seven, eight );

// int a =0;
// a =  5||2|1;
// printf("%d",a);

void m(int *p, int *q){
    printf("%p %p \n",p,q );
    int *temp;
    temp = p;
    p=q;
    q = temp; 
    printf("%p %p\n",p,q );
}

int main(){
// int a[] = {7,8,9};
// printf("%d ", 2[a]+ a[2]);

        // int aa = 2016, b =0 ;
        // m(&aa,&b);
        // printf("%d\n",aa);


        int *x  = malloc(sizeof(int));
         printf("%p\n",x);
        
        if(NULL == x){
             printf("%p\n",x);
        } 



return 0;


}