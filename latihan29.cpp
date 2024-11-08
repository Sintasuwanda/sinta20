#include<iostream>
#include<conio.h>
//membaca panjang karakter

using namespace std;

int main (){
	char nama[20];
	char alamat[35];
	
	//fungsi sizeof membaca string sesuai yg sudah di definisikan
  cout<<"Masukan Nama Anda :";
  cin.getline( nama, sizeof (nama)) ;
  cout<< " Masukan Alamat Anda :";
  cin.getline( alamat, sizeof (alamat)) ;
  cout<< "Nama Anda Adalah :" <<nama<<endl;
  cout<< "Alamat Anda :"<< alamat <<endl;
  
  return 0;
}
