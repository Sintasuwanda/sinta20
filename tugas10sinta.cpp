//Dibuat oleh sinta_suwanda
//NIM 240121095

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	cout<<setprecision(20);
	char nama[30];
	int target,jmlhterjual,komisi,sisa,total;
	target=500000;
	cout<<"komisi pegawai perusahaan"<<
	endl;
	cout<<"------------------"<<endl;
	cout<<"Masukan Nama:";
	gets(nama);
	cout<<"Masukan Jumlah Terjual:";
	cin>>jmlhterjual;
	
	if(jmlhterjual<=target){
		komisi=jmlhterjual*0.1;
		sisa=0;
	}
	if(jmlhterjual>target){
		komisi=jmlhterjual*0.1;
		sisa=(jmlhterjual-target)*0.15;
	}
	total=komisi+sisa;
	
	cout<<"komisi:"<<komisi<<endl;
	cout<<"sisa:"<<sisa<<endl;
	cout<<"Total Komisi:"<<total;
	return 0;
}

