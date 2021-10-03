

#include <iostream>
#include <math.h>

using namespace std;

void dodawanie (int a, int b) {
   
    cout<<a+b<<endl;
}
void odejmowanie (int a, int b) {
  
    cout<<a-b<<endl;
}
void mnozenie (int a, int b) {
   
    cout<<a*b<<endl;
}
void dzielenie (int a, int b) {
 
    cout<<a/b<<endl;
}
void kwadrat (int a){
    cout<<a*a<<endl;
    cout<<a *4<<endl;
}
void trojkot (int a, int b){
    cout<<(a*b)/2<<endl;
    cout<<a*3<<endl;
}
void trapz (int a, int b, int h){
    cout<<((a+b)*h)/2<<endl;
   int d = (((a-b)/2)*((a-b)/2))+(h*h);
   int e= sqrt(d) ;
   cout<<e+e+a+b <<endl;
}

int main()
{  dodawanie (4, 5);
odejmowanie  (4, 5);
mnozenie (4, 5);
dzielenie (4, 5);
kwadrat (4);
trojkot (4, 5);
trapz (4, 5, 6);

    

    return 0;
}