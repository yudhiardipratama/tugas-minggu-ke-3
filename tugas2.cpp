#include <iostream>

using namespace std;
int main()
{
	//Deklarasi Variable
	int Suhu, NilaiX ;
	
	//Input Tampilan
	cout<<" Masukan Suhu : " ; cin>>Suhu ;
	cout<<" Masukan Nilai X : " ; cin>>NilaiX ;
	cout<<endl ;
	
	//Perhitungan Variable
	if (( Suhu > NilaiX )) cout<<"Suhu Panas" ;
	
	if (( Suhu <= NilaiX )) cout<<"Suhu Dingin" ;
	
	return 0;
}
