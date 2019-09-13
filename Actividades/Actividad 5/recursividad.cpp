#include <iostream>
using namespace std;
int producto(int, int);
int main()
{
 int a,b,Total;

 cout << "Introduzca primer numero a multiplicar (A): "<<endl;
 cin >> a;
 cout << "Introduzca segundo numero a multplicar (B):  "<<endl;
 cin >> b;
 Total = producto(a,b);
 cout << "producto: " << Total << endl;
 return 0;

}

int producto(int a, int b)
{
 if(b==1)
   return a;
  else
   {
    return a +producto(a, b-1);
   }
}