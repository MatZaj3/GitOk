#include <cstdlib>
#include <iostream>
using namespace std;

long long kan(int n, int a)
{


 if(a=1) { return n * 1000; }
  if(a=2) { return n * 10000; }
   if(a=3) { return n * 100; }
    if(a=4) { return n * 40; }
     if(a=5) { return n * 0.2; }
      if(a=6) { return n * 200; }
       if(a=7) { return n * 300; }
        if(a=8) { return n * 777; }
         if(a=9) { return n * 9999; }
        
        else return 0;
}

int main()
{
 int n, a;
 
 cout<<"ile masz pieniedzy: ";
 cin>>n;
 cout<<"kliknij: 1=dong, 2=balboas, 3=ruble, 4=dinar, 5=dollar, 6=baht, 7=doublon, 8=ducat, 9=juan ";
 cin>>a;
  cout<<"masz teraz tyle w wybrannej walucie "<<kan(n, a)<<endl;

 system("pause");
 return 0;
}