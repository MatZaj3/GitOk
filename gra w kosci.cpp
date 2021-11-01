
#include <stdlib.h>
#include <iostream>
#include <time.h>
#include <ctime>
#include <string>
using namespace std;



     
     int kostki(int b)

{
   int x, y, s;
    
x = rand() %6+1;
y = rand() %6+1;
s=x+y+b;
cout<<x<<"\n";
cout<<y<<"\n";
if (x%2==0 & y%2==0) {s=s+1;} 
if (x==1 & y==1) {return 0;}
else {if (x==6 & y==6) {return kostki(b+s);}
else {return s; } };
}
 
     
     
int main()
{
    int n, pc1,pc2,pc3,pc4,ps1,ps2,ps3,ps4;
     cout<<"podaj ile graczy (2-4): ";
    cin>>n;
    string pn1, pn2, pn3, pn4;
   pn3="nie wybrany";
   pn4="nie wybrany";
   ps3=0;
   pc3=0;
   ps4=0;
   pc4=0;
    cout<<"podaj nick pierwszego gracza ";
    cin>>pn1;
    cout<<"podaj nick drugiego gracza ";
    cin>>pn2;
    if (n==3) {
    cout<<"podaj nick trzeciego gracza ";
    cin>>pn3; }
    if (n==4) {
    cout<<"podaj nick trzeciego gracza ";
    cin>>pn3;
    cout<<"podaj nick czwartego gracza ";
    cin>>pn4;}
    srand(time(NULL));
    cout<< "runda pierwsza \n ";
    pc1 = kostki(0);
    ps1 = pc1;
    cout<< "pierwsze rzuty gracza "<< pn1 << " \n" << pc1<<" \n nastepny gracz \n";
    pc2 = kostki(0);
    ps2= pc2;
    cout<< "pierwsze rzuty gracza "<< pn2 << " \n" << pc2 <<" \n nastepny gracz \n"; 
    if (n>2) { pc3 = kostki(0); ps3= pc3;
    cout<< "pierwsze rzuty gracza "<< pn3 << " \n" << pc3 <<" \n nastepny gracz \n"; 
    if (n>3) {pc4 = kostki(0);   ps4= pc4;
    cout<< "pierwsze rzuty gracza "<< pn4 << " \n" << pc4 <<" \n wynik rundy 1= ";}}
    if (pc1>pc2 & pc1>pc3 & pc1>pc4) {cout<<"runde wygral "<<pn1;} 
    else {if (pc2>pc1 & pc2>pc3 & pc2>pc4) {cout<<"runde wygral "<<pn2;}
        else {if (pc3>pc1 & pc3>pc2 & pc3>pc4) {cout<<"runde wygral "<< pn3;}
        else {if (pc4>pc1 & pc4>pc2 & pc4>pc3) {cout<<"runde wygral "<< pn4;}
        else cout<<"nikt nie wygral";}}}
           cout<< "\n runda druga \n ";
    pc1 = kostki(0);
    ps1 = ps1+pc1;
    cout<< "drugie rzuty gracza "<< pn1 << " \n" << pc1<<" \n nastepny gracz \n";
    pc2 = kostki(0);
    ps2= ps2+pc2;
    cout<< "drugie rzuty gracza "<< pn2 << " \n" << pc2 <<" \n nastepny gracz \n"; 
    if (n>2) { pc3 = kostki(0); ps3= ps3+pc3;
    cout<< "drugie rzuty gracza "<< pn3 << " \n" << pc3 <<" \n nastepny gracz \n"; 
    if (n>3) {pc4 = kostki(0);   ps4= ps4+pc4;
    cout<< "drugie rzuty gracza "<< pn4 << " \n" << pc4 <<" \n wynik rundy 2= ";}}
    if (pc1>pc2 & pc1>pc3 & pc1>pc4) {cout<<"runde wygral "<<pn1;} 
    else {if (pc2>pc1 & pc2>pc3 & pc2>pc4) {cout<<"runde wygral "<<pn2;}
        else {if (pc3>pc1 & pc3>pc2 & pc3>pc4) {cout<<"runde wygral "<< pn3;}
        else {if (pc4>pc1 & pc4>pc2 & pc4>pc3) {cout<<"runde wygral "<< pn4;}
        else cout<<"nikt nie wygral";}}}
        cout<< "\n runda trzecia \n ";
    pc1 = kostki(0);
    ps1 = ps1+pc1;
    cout<< "trzecie rzuty gracza "<< pn1 << " \n" << pc1<<" \n nastepny gracz \n";
    pc2 = kostki(0);
    ps2= ps2+pc2;
    cout<< "trzecie rzuty gracza "<< pn2 << " \n" << pc2 <<" \n nastepny gracz \n"; 
    if (n>2) { pc3 = kostki(0); ps3= ps3+pc3;
    cout<< "trzecie rzuty gracza "<< pn3 << " \n" << pc3 <<" \n nastepny gracz \n"; 
    if (n>3) {pc4 = kostki(0);   ps4= ps4+pc4;
    cout<< "trzecie rzuty gracza "<< pn4 << " \n" << pc4 <<" \n wynik rundy 3= ";}}
    if (pc1>pc2 & pc1>pc3 & pc1>pc4) {cout<<"runde wygral "<<pn1;} 
    else {if (pc2>pc1 & pc2>pc3 & pc2>pc4) {cout<<"runde wygral "<<pn2;}
        else {if (pc3>pc1 & pc3>pc2 & pc3>pc4) {cout<<"runde wygral "<< pn3;}
        else {if (pc4>pc1 & pc4>pc2 & pc4>pc3) {cout<<"runde wygral "<< pn4;}
        else cout<<"nikt nie wygral";}}}
        cout<< "\n runda czwarta \n ";
    pc1 = kostki(0);
    ps1 = ps1+pc1;
    cout<< "czwarte rzuty gracza "<< pn1 << " \n" << pc1<<" \n nastepny gracz \n";
    pc2 = kostki(0);
    ps2= ps2+pc2;
    cout<< "czwarte rzuty gracza "<< pn2 << " \n" << pc2 <<" \n nastepny gracz \n"; 
    if (n>2) { pc3 = kostki(0); ps3= ps3+pc3;
    cout<< "czwarte rzuty gracza "<< pn3 << " \n" << pc3 <<" \n nastepny gracz \n"; 
    if (n>3) {pc4 = kostki(0);   ps4= ps4+pc4;
    cout<< "czwarte rzuty gracza "<< pn4 << " \n" << pc4 <<" \n wynik rundy 4= ";}}
    if (pc1>pc2 & pc1>pc3 & pc1>pc4) {cout<<"runde wygral "<<pn1;} 
    else {if (pc2>pc1 & pc2>pc3 & pc2>pc4) {cout<<"runde wygral "<<pn2;}
        else {if (pc3>pc1 & pc3>pc2 & pc3>pc4) {cout<<"runde wygral "<< pn3;}
        else {if (pc4>pc1 & pc4>pc2 & pc4>pc3) {cout<<"runde wygral "<< pn4;}
        else cout<<"nikt nie wygral";}}}
        cout<< "\n runda piota \n ";
    pc1 = kostki(0);
    ps1 = ps1+pc1;
    cout<< "piote rzuty gracza "<< pn1 << " \n" << pc1<<" \n nastepny gracz \n";
    pc2 = kostki(0);
    ps2= ps2+pc2;
    cout<< "piote rzuty gracza "<< pn2 << " \n" << pc2 <<" \n nastepny gracz \n"; 
    if (n>2) { pc3 = kostki(0); ps3= ps3+pc3;
    cout<< "piote rzuty gracza "<< pn3 << " \n" << pc3 <<" \n nastepny gracz \n"; 
    if (n>3) {pc4 = kostki(0);   ps4= ps4+pc4;
    cout<< "piote rzuty gracza "<< pn4 << " \n" << pc4 <<" \n wynik rundy 5= ";}}
    if (pc1>pc2 & pc1>pc3 & pc1>pc4) {cout<<"runde wygral "<<pn1;} 
    else {if (pc2>pc1 & pc2>pc3 & pc2>pc4) {cout<<"runde wygral "<<pn2;}
        else {if (pc3>pc1 & pc3>pc2 & pc3>pc4) {cout<<"runde wygral "<< pn3;}
        else {if (pc4>pc1 & pc4>pc2 & pc4>pc3) {cout<<"runde wygral "<< pn4;}
        else cout<<"nikt nie wygral";}}}
        cout<< "\n runda szosta \n ";
    pc1 = kostki(0);
    ps1 = ps1+pc1;
    cout<< "szoste rzuty gracza "<< pn1 << " \n" << pc1<<" \n nastepny gracz \n";
    pc2 = kostki(0);
    ps2= ps2+pc2;
    cout<< "szoste rzuty gracza "<< pn2 << " \n" << pc2 <<" \n nastepny gracz \n"; 
    if (n>2) { pc3 = kostki(0); ps3= ps3+pc3;
    cout<< "szoste rzuty gracza "<< pn3 << " \n" << pc3 <<" \n nastepny gracz \n"; 
    if (n>3) {pc4 = kostki(0);   ps4= ps4+pc4;
    cout<< "szoste rzuty gracza "<< pn4 << " \n" << pc4 <<" \n wynik rundy 6= ";}}
    if (pc1>pc2 & pc1>pc3 & pc1>pc4) {cout<<"runde wygral "<<pn1;} 
    else {if (pc2>pc1 & pc2>pc3 & pc2>pc4) {cout<<"runde wygral "<<pn2;}
        else {if (pc3>pc1 & pc3>pc2 & pc3>pc4) {cout<<"runde wygral "<< pn3;}
        else {if (pc4>pc1 & pc4>pc2 & pc4>pc3) {cout<<"runde wygral "<< pn4;}
        else cout<<"nikt nie wygral";}}}
        
        cout<<"\n wyniki to: "<<pn1<<" = "<<ps1<<"\n"<<pn2<<" = "<<ps2<<"\n"<<pn3<<" = "<<ps3<<"\n"<<pn4<<" = "<<ps4;
        if (ps1>ps2 & ps1>ps3 & ps1>ps4) {cout<<"\n wygral = "<<pn1<<endl;}
        else {if (ps2>ps1 & ps2>ps3 & ps2>ps4) {cout<<"\n wygral = "<<pn2<<endl;}
        else {if (ps3>ps1 & ps3>ps2 & ps3>ps4) {cout<<"\n wygral = "<<pn3<<endl;}
        else {if (ps4>ps1 & ps4>ps2 & ps4>ps3) {cout<<"\n wygral = "<<pn4<<endl;}
        else {cout<<"\n nikt nie wygral";}}}}

 system("pause");
 return 0;
}