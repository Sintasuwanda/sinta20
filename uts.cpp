#include <iostream>
#include <iomanip>
using namespace std;
//uts sinta suwanda
//uts praktek (240121095)

int main(){
	cout <<setprecision(20);
	int maxmsiswa = 45;
	int nomP = 0;
	char lagi;
	string nama[maxmsiswa],jurusan[maxmsiswa],kode[maxmsiswa];
	int npm[maxmsiswa],pmbyrawl[maxmsiswa],jmlh_cclan[maxmsiswa],bsr_cclan[maxmsiswa],pmbyrnke[maxmsiswa],uang_kuliah[maxmsiswa],uang_trbyr[maxmsiswa],sisa_uang[maxmsiswa];
	float ttl_uangkuliah,ttl_uangterbayar,ttl_sisauang;
	
	cout<<"************************************************************************************************************************************************************************************"<<endl;
	cout<<"                                                                            PEMBAYARAN UANG KULIAH                                                                             "<<endl;
	
	do{
		cout<<"=============================================================================================================================================================================="<<endl;
		cout<<" Nomor Pembayaran: "<<nomP + 1<< endl;
		cout<<" Nama Mahasiswa  : ";
		cin>>nama[nomP];
		cout<<"    NPM          : ";
		cin>>npm[nomP];
		cout<<"   Kode          : ";
		cin>>kode[nomP];
		
	if(kode[nomP] == "SI"){
		jurusan[nomP] = "Sistem Informasi";
		pmbyrawl[nomP] = 2100000;
		jmlh_cclan[nomP] = 7;
		bsr_cclan[nomP]= 300000;
	}
	else if(kode[nomP] == "TI"){
		jurusan[nomP] = "Teknik Informatika";
		pmbyrawl[nomP] = 2500000;
		jmlh_cclan[nomP] = 7;
		bsr_cclan[nomP]= 300000;
	}
	else if(kode[nomP] == "KA"){
		jurusan[nomP] = "Komputer Akuntansi";
		pmbyrawl[nomP] = 1750000;
		jmlh_cclan[nomP] = 6;
		bsr_cclan[nomP] = 200000;
	}
	else if(kode[nomP] == "MI"){
		jurusan[nomP] = "Manajemen Informatika";
		pmbyrawl[nomP]= 1500000;
		jmlh_cclan[nomP] = 6;
		bsr_cclan[nomP] = 250000;
		
	}
	cout << "  Jurusan           : " << jurusan[nomP] << endl;
	cout << "  Pembayaran Awal   : Rp" << pmbyrawl[nomP] << endl;
	cout << "  Jumlah Cicilan    : " << jmlh_cclan[nomP] << endl;
	cout << "  Besar Cicilan     : Rp" << bsr_cclan[nomP]<< endl;
	cout << "  Pembayaran Ke     : ";
	cin >> pmbyrnke[nomP];
	
	uang_kuliah[nomP] = pmbyrawl[nomP] + (jmlh_cclan[nomP] * bsr_cclan[nomP]);
	uang_trbyr[nomP] = pmbyrawl[nomP] + (pmbyrnke[nomP] * bsr_cclan[nomP]);
	sisa_uang[nomP] = uang_kuliah[nomP] - uang_trbyr[nomP];
	
	ttl_uangkuliah = ttl_uangkuliah + uang_kuliah[nomP];
	ttl_uangterbayar = ttl_uangterbayar + uang_trbyr[nomP];
	ttl_sisauang = ttl_sisauang + sisa_uang[nomP];
	
	cout << "  Uang Kuliah          : Rp"<< uang_kuliah[nomP] << endl;
	cout << "  Uang Kuliah Terbayar : Rp" << uang_trbyr[nomP] << endl;
	cout << "  Sisa Uang kuliah     : Rp" << sisa_uang[nomP] << endl;
	cout << "======================================================================================================================================================" << endl;
	nomP++;
	cout << "  Masih Ingin Menghitung uang kuliah lagi?[Y/T]: ";
	cin >>lagi;
}
while(lagi == 'Y' || lagi == 'y');

cout << endl;
	cout << "\n************************************************************************************************************************************\n" << endl;
	cout << "                                           LAPORAN HASIL PEMBAYARAN UANG KULIAH" << endl;
	cout << "\n**************************************************************************************************************************************\n" << endl;
 
cout<< left; 
cout<< setw(25) << "Nama"
	<< setw(25) << "NPM"
	<< setw(25) << "Jurusan"
	<< setw(25) << "Pembayaran Ke"
	<< setw(25) << "Uang Kuliah"
	<< setw(25) << "Uang kuliah Terbayar"
	<< setw(25) << "Sisa Uang Kuliah" << endl;
	
	cout << "\n=======================================================================================================================================\n" << endl;
	
	for(int i = 0; i < nomP; i++){
		cout<< setw(10)<<i + 1
		<< setw(25) << nama[i]
    	<< setw(25) << npm[i]
	    << setw(25) << jurusan[i]
	    << setw(25) << pmbyrnke[i]
	    << setw(25) << uang_kuliah[i]
	    << setw(25) << uang_trbyr[i]
	    << setw(25) << sisa_uang[i] << endl;
	    
}
cout << "\n===================================================================================================================================================\n" << endl;
cout 
	<< right 
	<< setw(25) << "=" << ttl_uangkuliah
	<< setw(25) <<"=" << ttl_uangterbayar
	<< setw(25) <<"=" << ttl_sisauang<< endl;
cout << "\n====================================================================================================================================================\n" << endl;

	return 0;
}

