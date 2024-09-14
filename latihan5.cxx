#include<iostream>
#include<iomanip>
using namespace std;
int main()

{
	 cout <<  "GAJI KARYAWAN STMIK PENUSA" << endl; 
	 char NamaPegawai[30],Jabatan[30];
	 float gaji,pajak,pinjaman,gaber=0;
	 cout<<"NamaPegawai = ";
	 cin>>NamaPegawai;
	 cout<<"Jabatan = ";
	 cin>>Jabatan;
	 cout<<"gaji = ";
	 cin>>gaji;
	 cout<<setprecision(13);
	 pajak=0.15*gaji;
	 cout<<"pajak = "<<pajak<<endl;
	 cout<<"pinjaman = ";
	 cin>>pinjaman;
	 gaber=gaji-(pinjaman+pajak);
	 cout<<"gaber = "<<gaber<<endl;
	 return 0;
}
