
#include <math.h>
#include <iostream>

using namespace std;

void boss(int a, int b) {

    double c;
  
  c= (a*a)+(b*b) ;
   cout<<"c="<<sqrt(c);
}

int main()
{
     int a , b ;
    double c;
    cout<<"podaj a="<<endl;
   cin>>a;
   cout<<"podaj b="<<endl;
   cin>>b;
    boss(a,b) ;
   
   
}
