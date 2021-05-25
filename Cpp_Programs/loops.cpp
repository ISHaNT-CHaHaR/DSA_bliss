#include<iostream>

using namespace std;



        //     int i,n,sum;
        // cout<<"Enter a number\n";
        // cin>>n;
        // sum=0;
        // for(i=0; i<(n+1); i++)
        // {
        // if(i%2==0) continue;
        // sum =sum + i;
        // }
        // cout<<sum<<endl;


            //         int i, j, sum;
            // i=1;
            // while (i<=100){ sum=0;j=1;
            // while (j<=i) { if (j==3) break;
            // sum = sum + j + i; j++; }
            // cout<< sum << " ";
            // i=i+2;}

            //     int i, j, k, n=0;
            //     int total = 0;
            //         for (i=1; i<=n; i++)
            //             for (j=1; j<=i; j++)
            //                 for (k=1; k<=j; k++)
            //                     total++;
            //                     cout<< total <<endl;

            // cout<<i<<j<<k;

        int bar(int v){
            int x = 0;
            {
                while(v>0){
                    
                    x += bar(--v);
                }

            }
            return v;
        }
int main(){ 
    cout<<bar(3);
    return 0;
}