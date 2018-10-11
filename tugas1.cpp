#include <iostream>

using namespace std;
int main()
{
	//Deklarasi Variable
	int Bilangan;
	
	//Input Tampilan
	cout<<" Masukan Bilangan : "; cin>>Bilangan ;
	cout<<endl;
	
	string messege ;
	messege = Bilangan % 2 == 0? "Bilangan Genap" :
"Bilangan Ganjil " ;
	cout<<messege ;
	return 0 ;
	
}
