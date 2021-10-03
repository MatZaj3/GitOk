#include <cstdlib>
#include <iostream>
using namespace std;

long long fib(int a, double b, double c, int n)
{
   double d, e ;
e=c;
d=b+c;
cout<<d<<endl;
 if(a<n) {
        return fib(a+1,b=e,c=d, n); }
        else return 0;
}

int main()
{
 int n;
 
 cout<<"Podaj liczbę: ";
 cin>>n;
 cout<<"ciog fiba o n cyfrach to = 0  1 "<<fib(0,0,1, n)<<endl;

 system("pause");
 return 0;
}