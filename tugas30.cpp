#include<iostream>
#include<conio.h>
#include<string>
#include<iomanip>
#include<windows.h>
//tentang string gabungan
 using namespace std;
 
 int main(){
 	
 	char namapegawai[35],gol[20],kode[25],jabatan[30];
 	float gaji,tunjangan,pinjaman,pajak,gaji_ktr,gaji_brsih=0;
 	char lagi;
 	int pegawai_ke = 0;
 	int hasil      = 0;
 	cout<<setprecision(13);
 	cout<<"==============================================\n";
    cout<<"|          GAJI PEGAWAI PT.TELKOM            |\n";
    cout<<"==============================================\n";
    
    do{
    	system("cls");
    	cout <<"pegawai ke" <<pegawai_ke + 1 <<endl;
    	cout << " Nama Pegawai    : ";
    	cin>> namapegawai;
    	cout << " Golongan        : ";
    	cin>> gol;
    	cout << " kode jabatan    : ";
    	cin>> kode;
    	
    	hasil = strcmp(gol, "Ia");
    	if (hasil == 0){
    		gaji = 500000;
		}
		hasil = strcmp(gol, "IIa");
    	if (hasil == 0){
    		gaji = 750000;
	    }
	    hasil = strcmp(gol, "IIIa");
    	if (hasil == 0){
    		gaji = 1000000;
        }
        hasil = strcmp(gol, "Ib");
    	if (hasil == 0){
    		gaji = 1500000;
        }
        hasil = strcmp(gol, "IIb");
    	if (hasil == 0){
    		gaji = 1750000;
    	}
    	hasil = strcmp(gol, "IIIb");
    	if (hasil == 0){
    		gaji = 2500000;
    	}
    	
    	hasil = strcmp(kode, "Dir");
    	if (hasil == 0){
    		strcpy(jabatan,"Direktur");
    		tunjangan = 450000;
    	}
    	hasil = strcmp(kode, "Sek");
    	if (hasil == 0){
    		strcpy(jabatan,"Sekertaris");
    		tunjangan = 300000;
    	}
    	hasil = strcmp(kode, "Wak");
    	if (hasil == 0){
    		strcpy(jabatan,"Wakil Direktur");
    		tunjangan = 357000;
    	}
    	hasil = strcmp(kode, "Stf");
    	if (hasil == 0){
    		strcpy(jabatan,"Staf Administrasi");
    		tunjangan = 200000;
    	}
    	
    	cout << "Jabatan        :" <<jabatan<<endl;
    	cout << "Gaji           :" <<gaji<<endl;
    	cout << "Tunjangan      :" <<tunjangan<<endl;
    	cout << "Pinjaman       :" ;
    	cin>> pinjaman;
    	pajak = 0.05 * gaji;
    	cout<< "Pajak           :" <<pajak<<endl;
    	gaji_ktr   = gaji - tunjangan ;
    	cout << "   Total Gaji Kotor :"<<gaji_ktr<<endl;
    	gaji_brsih = gaji_ktr - pinjaman - pajak;
    	cout << "   Total Gaji Bersih :"<<gaji_brsih<<endl;
    	cout <<endl;
    	cout<< "***************************************************"<<endl;
    	cout<< "   Masih Ingin Menghitung Gaji Lagi [Y/T] :        "<<endl;
    	
    	pegawai_ke++;
    	lagi=getch();
    	
    } while (lagi == 'Y' || lagi == 'y');
     system ("cls");
     return 0;
    	
 }
