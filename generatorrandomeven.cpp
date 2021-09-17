

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    int suma = 0;
    srand(time(NULL));
     for(int i=0; i < 100; i++)
     {int x = rand() %100 +1;
      if (x % 2==0)
     suma= suma + x;
     
     cout <<x<<endl; 
   
     }
    cout <<suma<<endl;
 system("pause");
 return 0;
}