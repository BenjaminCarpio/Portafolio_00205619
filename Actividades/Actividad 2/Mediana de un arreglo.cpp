include <iostream>

using namespace std;

	int main (){

	int tama�o;

	cout<<"Cuantos datos se van a ingresar?"<<endl;

	cin>>tama�o;

	float num[tama�o];

	cout<<"Ingrese los datos de manera ordenada: "<<endl;

	for(int i=1;i<=tama�o;i++){

		cout<<i<<": ";

		cin>>num[i];

		cout<<endl;

	}
	if(tama�o%2 ==0)

		cout<<"La mediana es: "<<((num[tama�o/2] + num[(tama�o/2)+1])/2);

	else

			cout<<"La mediana es: "<<num[(tama�o/2)+1]<<endl;

	
			
			return 0;
	}