#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;
//tugas array

int main(){
	cout << setprecision(20);
	const int maxpgawai = 50;
	string nama[maxpgawai],gol[maxpgawai],kode[maxpgawai],jabatan[maxpgawai];
	float gaji[maxpgawai],tunjangan[maxpgawai],pinjaman[maxpgawai],pajak[maxpgawai],gajikotor[maxpgawai],gajibersih[maxpgawai],total;
	char lagi,label;
	int nopgawai = 0;
	cout << "                     GAJI PEGAWAI PT. TELKOM" << endl;
	cout << "--------------------------------------------------------------------------" << endl;
	
	do{
		

		
		cout << "Pegawai ke-" << nopgawai + 1 << endl;
		cout << "Nama Pegawai             : ";
		cin >> nama[nopgawai];
		cout << "Golongan                 : ";
		cin >> gol[nopgawai];
		cout << "Kode Jabatan             : ";
		cin >> kode[nopgawai];
		
		if(gol[nopgawai] == "Ia"){
			gaji[nopgawai] = 500000;
		}
		else if(gol[nopgawai] == "IIa"){
			gaji[nopgawai] = 750000;
		}
		else if(gol[nopgawai] == "IIIa"){
			gaji[nopgawai] = 1000000;
		}
		else if(gol[nopgawai] == "Ib"){
			gaji[nopgawai] = 150000;
		}
		else if(gol[nopgawai] == "IIb"){
			gaji[nopgawai] = 1750000;
		}
			else if(gol[nopgawai] == "IIIb"){
			gaji[nopgawai] = 2500000;
		}
		else{
			gaji[nopgawai] = 0;
		}
		
		if(kode[nopgawai] == "Dir"){
			jabatan[nopgawai] = "DIREKTUR";
			tunjangan[nopgawai] = 450000;
		}
		else if(kode[nopgawai] == "Sek"){
			jabatan[nopgawai] = "SEKRETARIS";
			tunjangan[nopgawai] = 300000;
		}
		else if(kode[nopgawai] == "Wak"){
			jabatan[nopgawai] = "WAKIL DIREKTUR";
			tunjangan[nopgawai] = 375000;
		}
		else if(kode[nopgawai] == "Stf"){
			jabatan[nopgawai] = "STAF ADMINISTRASI";
			tunjangan[nopgawai] = 200000;
		}
		else{
			jabatan[nopgawai] = "-";
			tunjangan[nopgawai] = 0;
		}
		
		pajak[nopgawai] = gaji[nopgawai] * 0.05;
		gajikotor[nopgawai] = gaji[nopgawai] + tunjangan[nopgawai];
	
		
		
		cout << "Jabatan                  : " << jabatan[nopgawai] << endl;
		cout << "Gaji                     : " << gaji[nopgawai]<< endl;
		cout << "Tunjangan                : " << tunjangan[nopgawai]<< endl;
		cout << "Pinjaman                 : ";
		cin >> pinjaman[nopgawai];
		
		cout << "Pajak                    : " << pajak[nopgawai]<< endl;
		cout << "Total Gaji Kotor         : " << gajikotor[nopgawai]<< endl;
			gajibersih[nopgawai] = gajikotor[nopgawai] - pinjaman[nopgawai] - pajak[nopgawai];
		cout << "Total Gaji Bersih        : " << gajibersih[nopgawai]<< endl;
		cout << endl;
		cout << "------------------------------------------------------------------------------" << endl;
			total = total + gajibersih[nopgawai];
		nopgawai++;
		cout << endl;
		cout << "Masih Ingin Menghitung Gaji Lagi[Y/T]: ";
		lagi = getch();
		cout << endl;
	}while(lagi == 'Y' || lagi == 'y');

	cout << "                                Laporan PT. TELKOM" << endl;
	cout << "\n================================================================================\n " << endl;
	cout 
		<< left << setw(2) <<""
		<<setw(9) << "Nama "
		<< setw(18) << "Jabatan "
		<< setw(9) << "Gaji "
		<< setw(14) << "Pinjaman "
		<< setw(14) << "Gaji Kotor "
		<< setw(14) << "Gaji Bersih " << endl;
	cout << "\n================================================================================\n " << endl;
		
	for(int i = 0; i < nopgawai; i++){
		cout << endl;
		cout << left << setw(2) <<""
		<< setw(9) << nama[i]
		<< setw(18) << jabatan[i]
		<< setw(9) << gaji[i]
		<< setw(14) << pinjaman[i]
		<< setw(14) << gajikotor[i]
		<< setw(14) << gajibersih[i] << endl;

	}
	cout << "\n================================================================================\n " << endl;
	cout <<right<< setw(66) << "Total Gaji Keseluruhan: " << total;
	return 0;
}
