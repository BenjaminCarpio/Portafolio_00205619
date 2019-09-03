include <iostream>

using namespace std;

	int main (){

	int tamaño;

	cout<<"Cuantos datos se van a ingresar?"<<endl;

	cin>>tamaño;

	float num[tamaño];

	cout<<"Ingrese los datos de manera ordenada: "<<endl;

	for(int i=1;i<=tamaño;i++){

		cout<<i<<": ";

		cin>>num[i];

		cout<<endl;

	}
	if(tamaño%2 ==0)

		cout<<"La mediana es: "<<((num[tamaño/2] + num[(tamaño/2)+1])/2);

	else

			cout<<"La mediana es: "<<num[(tamaño/2)+1]<<endl;

	
			
			return 0;
	}