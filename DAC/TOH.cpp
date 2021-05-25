#include<iostream>
using namespace std;


class TOH{
    private: 
     int n;

    
    public:
    //  TOH(int n){
    //      this->n = n;
    //  }
        void TOHcompute(int s, char f_rod, char aux_rod, char to_rod);

};

    void TOH::TOHcompute(int s, char f_rod, char aux_rod, char to_rod){

        if (s == 1)
    {
        cout << "Move disk 1 from " << f_rod <<" to "<<to_rod<<endl;
        return;
    }

            TOHcompute(s-1, f_rod, to_rod, aux_rod);

                 cout<<"Move Disk "<<s<<" from "<<f_rod<<" to "<<to_rod<<endl;

            TOHcompute(s-1, aux_rod, f_rod, to_rod);
    }

int main(){

    int n;
    cin>>n;

        TOH obj;
            char f_rod = 'A', aux_rod = 'B', to_rod = 'C';

            obj.TOHcompute(n, f_rod, aux_rod, to_rod );
    
    return 0;
}