#include<iostream>
using namespace std; 

void f();
void reverse(int i){
    if( i>5 ){
        exit(0);

    cout<<i<<endl;

    return reverse(i++); /// Tis will be stack overflow!  It should be i+1;
    }
}
int main(){

    //2/////////////////////#define max 10  //// WE can Define it in here too!, Bur Function should be under these lines, IOther wise it will generate errors. 
    // f(); 
    //     reverse(1);
    
    // unsigned int x = -1;
    // int y = ~0;

    // if(x==y){
    //     cout<<"same";  // SAME IS THE ANSWER!
    //     }
    //     else{
    //     cout<<"Not Same!";
    //     }



        unsigned int x = 4294967293;

        x = x+3;

        cout<<x<<endl; //// 0 

    return 0;



}

// void f(){
//     cout<<max*10<<endl;
// }

