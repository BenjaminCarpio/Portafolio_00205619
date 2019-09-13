#include <iostream>
using namespace std;

int main()
{
	int tam = 7;
	int a[tam]= {1, 3, 4, 5, 17, 18, 31, 33};
	int x;
	int low =0;
	int high = (8-1);
	int i;
	
	cout<<"Digite un numero entero positivo: "<<endl;
	cin>>x;
	i = int LlamadaRecursiva(x);
	if(i==-1)
	cout<<"No se encontro el numero en el arreglo"<<endl;
	else
	cout<<"El numero esta en la casilla: "<i<<endl;

return 0;
}

int LlamadaRecursiva ( int a[], int tam, int x)
{
  int high = tamano-1;
  int low = 0;
  int mid;
  while (Iow < high)
    {
      mid = (high + Iow)/2;
      if (arreglo[mid] == x)
 return mid;
      else
 if (x < a[mid])
   high=mid-1;
 else
   Iow=mid+1;
    }
  return -1;
}