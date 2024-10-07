#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;
//tugas penggabungan 

int main(){
	cout << setprecision(15);
	
	const int maxbarang = 100;
	int barangke =0;
	string namabarang[maxbarang];
	int harga[maxbarang],jumlahjual[maxbarang],totalharga[maxbarang],diskon[maxbarang],totalbayar[maxbarang];
	int totalpendapatan=0;
	char lagi;

	cout<<"PENJUALAN BARANG ELEKTRONIK"<<endl;
	cout<<"---------------------------------"<<endl;
	
			
	do{
		cout<<"masukkan nama barang: ";
		cin>>namabarang[barangke];
		cout<<"masukan harga:";
		cin>> harga [barangke];
		cout<<"masukkan jumlah jual:";
		cin>> jumlahjual[barangke];
		
		totalharga[barangke]= harga[barangke]*jumlahjual[barangke];
		diskon[barangke]= 0.1*totalharga[barangke];
		totalbayar[barangke] = totalharga[barangke] - diskon[barangke];
		totalpendapatan = totalpendapatan + totalbayar[barangke];
		barangke++;
		
		cout<<"apakah anda ingin input data lagi? (Y/T): ";
		lagi = getch();
		
		cout<<endl;
		
	}while (lagi == 'y'||lagi=='Y');
	
	cout<<"\n==================================================================\n";
	
		cout<< setw(15)<< left<<"Nama Barang"//left untuk memulai rata kiri
			<< setw(15)<<"Harga Barang"
			<< setw(15)<<"Jumlah jual"
			<< setw(15)<<"Total Harga"
			<< setw(15)<<"Diskon"
			<< setw(15)<<"Total Bayar"<<endl;
		cout<<"=================================================================\n";
		
		for (int i=0; i< barangke;i++){
		cout <<setw(15) << left<< namabarang[i]
			 <<setw(15)<< harga[i]
			 <<setw(15)<<jumlahjual[i]
			 <<setw(15)<< totalharga[i]
			 <<setw(15)<<diskon[i]
			 <<setw(15)<<totalbayar[i]<<endl;
		
	}
	
	cout <<"====================================================================\n";
	cout<<endl;
	cout<<right<<setw(100)<<"Total Pendapatan="<<totalpendapatan<<endl;
	cout<<endl;
	
	return 0;
}
		
	
