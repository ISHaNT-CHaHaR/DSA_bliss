#include<iostream>

using namespace std;

int a, b, c = 0;

void prtFun(void);


int main( )
{
auto a = 1; /* Line 1 */
prtFun( );
a += 1;
prtFun( );
cout<<a<<b<<endl;
return 0;
}


void prtFun(void)
{
register int a=2; /* Line 2 */
int b=1;
a+= ++b;
cout<<a<<b<<endl;

}