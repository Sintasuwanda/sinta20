#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	 float gjperjam=500,jlhjamkerja,lembur,totalgaji;
	 char npegawai[30];
	 
	 cout<<"PERHITUNGAN GAJI PEGAWAI HARIAN"<<endl;
	 cout<<"-------------------------------------------"<<endl;
	 cout<<"Nama Pegawai : ";
	 gets(npegawai);
	 cout<<"Jumlah Jam Kerja : ";
	 cin>>jlhjamkerja;
	 if(jlhjamkerja>7){
	 	lembur=(1.5*gjperjam*(jlhjamkerja-7));
	 	totalgaji=(7*gjperjam) + lembur;
	 }else {
	 	lembur=0;
	 	totalgaji=(jlhjamkerja*gjperjam)+lembur;
	 }
	 cout<<"Total Gaji Pegawai Harian = "<<totalgaji<<endl;
	 
	 return 0;
	
}