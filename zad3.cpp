

#include <iostream>

using namespace std;

int main()
{
    
    int tab[10][10];
 for (int i =0; i<10; i++)
 {
     for ( int j=0;j<10;j++)
 {
     if (i==j) {tab[i][j]=1;}
     else {tab[i][j]=0;}
     cout<< tab[i][j] << " ";
 }
 cout<<endl;
 }
   cout << endl;
   
}
