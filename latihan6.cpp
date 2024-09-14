#include<iostream>
#include<iomanip>
using namespace std;
int main()

{
	 cout <<  "PENJUALAN BARANG ELEKTRONIK" << endl; 
	 char nabar[30];
	 float harga,jumlahjual,totalharga,diskon,totalbayar=0;
	 cout<<"NamaBarang = ";
	 cin>>nabar;
	 cout<<"Harga = ";
	 cin>>harga;
	 cout<<"Jumlah Jual = ";
	 cin>>jumlahjual;
	 cout<<setprecision(13);
	 totalharga=harga*jumlahjual;
	 cout<<"totalharga = "<<totalharga<<endl;
	 diskon=0.1*totalharga;
	 cout<<"Diskon = "<<diskon<<endl;
	 totalbayar=totalharga-diskon;
	 cout<<"Total Bayar = "<<totalbayar<<endl;
	 return 0;
}
