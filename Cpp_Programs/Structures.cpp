#include<iostream>
#include<math.h>
using namespace std; 


struct Employee{
    int Eid;
    string name;
    string branch;
    string post;
    float salary;
    string Address;
    
}E1,E2;



struct student{
    int roll;
    char name[50];
    float GPA;
};

float Average(struct student stud[], int size){

    int i;float s = 0; 
    for(i=0;i<size;i++){
            s += stud[i].GPA;
    }
    return s/size;

}

int Longest(struct student stud[], int size){
    int i; int l1,l2,l3;
    l1=0; l2=0; l3=0;

        int arr[size];

        for( i=0 ;i<size;i++){
           l1 = 0;
            for(int j = 0 ; stud[i].name[j] !='\0'; j++){
                    l1++;
            }
            arr[i] = l1;
        }

        int max = arr[0];int index = 0;

        for(i=0; i < size;i++){
            if(arr[i]> max){
                max = arr[i];
                index = i;
            }
        }






        return index;

}
int main(){

    struct student stud[10];

    cout<<"Enter NAME, Roll.No. , GPA....."<<endl;

    for(int i=0; i<3; i++){
        cin>>stud[i].name;
        cin>>stud[i].roll;
        cin>>stud[i].GPA;
    }

    cout<<Average(stud, 3)<<endl;

    int l = Longest(stud, 3);

    cout<<stud[l].name;

    return 0;
}


// struct triangle{
//     float x,y;
// };

// int main(){

//     struct triangle t1,t2,t3;

//     t1.x = 0;
//     t1.y = sqrt(3);
//     t2.x = -1;
//     t2.y = 0;
//     t3.x = 1;
//     t3.y = 0;

//     float s1 = sqrt((t2.x - t1.x)*(t2.x - t1.x) + (t2.y - t1.y)*(t2.y - t1.y)); /// euclidean distance;
//     float s2 =  sqrt((t3.x - t2.x)*(t3.x - t2.x) + (t3.y - t2.y)*(t3.y - t2.y)); /// euclidean distance;
//     float s3 =  sqrt((t3.x - t1.x)*(t3.x - t1.x) + (t3.y - t1.y)*(t3.y - t1.y)); /// euclidean distance;

//         if(s1 == s2 && s1 == s3){
//             cout<<"Yes, Equi TRI";

//         }
//         else{
//             cout<<"No!";
//         }


//     return 0;
// }


// struct rectangle{
//     float x,y;
// };
 
//  int main(){

//         struct rectangle r1,r2,r3,r4;

//         r1.x = 0; r1.y = 0;
//         r2.x = 4; r2.y = 0;
//         r3.x = 4; r3.y = 4;
//         r4.x = 0; r4.y = 0;


//         float m1,m2,m3,m4;

//         if(((r2.y - r1.y)*(r3.x - r2.x)) == ((r3.y - r2.y)*(r2.x - r1.x)) ){
//             cout<<"YES!";
//         }else{
//             cout<<"No!";
//         }
     
//      return 0;

//  }




