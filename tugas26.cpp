#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <conio.h>
#include <windows.h>
//tugas struct

using namespace std;
void gotoxy(int x, int y){
	COORD coord; //struktur untuk mengatur koordinat
	coord.X = x; //koordinat X
	coord.Y = y; //koordinat Y
	 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
struct data_ujian{
	int npm;
	double nilai_mid,nilai_semester;
	char nama[30];
	double nilai_akhir;
	char nilai_huruf;
}mhs[100];

int main(){	
	char lg = 'Y';
	int i, n=0;
	
	data_ujian dt_ujian;	
cout << setprecision(20);

while(lg == 'Y' || lg == 'y'){
	system("cls");
	cout << " DATA NILAI UJIAN PEMROGRAMAN  C++\n";
	cout << " Dosen          : Budiman,S.Si\n";
	cout << "******************************************\n";
	n++;
	cout << " NPM       : ";
	cin >> mhs[n].npm;
	cout << " Nama      : ";
	cin >> mhs[n].nama;
	cout << " Nilai Mid  : ";
	cin >> mhs[n].nilai_mid;
	cout << " Nilai Semester : ";	
	cin >> mhs[n].nilai_semester;
	
	mhs[n].nilai_akhir = (0.4 * mhs[n].nilai_mid) + (0.6 * mhs[n].nilai_semester);
	if(mhs[n].nilai_akhir >= 80 && mhs[n].nilai_akhir <= 100){
	mhs[n].nilai_huruf= 'A';	
	}
	else if(mhs[n].nilai_akhir >= 70 && mhs[n].nilai_akhir <= 80){
		mhs[n].nilai_huruf = 'B';
	}
	else if(mhs[n].nilai_akhir >= 55 && mhs[n].nilai_akhir < 70){
	mhs[n].nilai_huruf = 'C';
	}
	else if(mhs[n].nilai_akhir >= 40 && mhs[n].nilai_akhir < 55){
	mhs[n].nilai_huruf = 'D';
	}	
	else if(mhs[n].nilai_akhir >= 0 && mhs[n].nilai_akhir < 40){
	mhs[n].nilai_huruf = 'E';
	}
	else{
	mhs[n].nilai_huruf = '-';	
	}
	cout << " Nilai Akhir    : " << mhs[n].nilai_akhir << endl;
	cout << " Nilai Huruf    : " << mhs[n].nilai_huruf << endl;
	cout << "====================================================\n";
	cout << " Input Lagi[Y/T]: ";
	lg = getch();
}
system("cls");
cout << "+----------------------------------------------------------------------------------------------------+\n";
cout << "|                      LAPORAN NILAI UJIAN PEMROGRAMAN C++                                           |\n";					
cout << "+----------------------------------------------------------------------------------------------------+\n";
cout << "| No |   NPM    |    Nama     |    Nilai Mid   |   Nilai Semester  |   Nilai Akhir   |   Nilai Huruf |\n";
cout << "+----------------------------------------------------------------------------------------------------+\n";
for(i = 1; i <=n; i++){
gotoxy(0,5+i);cout<<"|";
gotoxy(2,5+i);cout << i;
gotoxy(6,5+i); cout << mhs[i].npm;
gotoxy(20,5+i); cout << mhs[i].nama;
gotoxy(38,5+i); cout << mhs[i].nilai_mid;
gotoxy(57,5+i); cout << mhs[i].nilai_semester;
gotoxy(77,5+i); cout << mhs[i].nilai_akhir;
gotoxy(93,5+i); cout << mhs[i].nilai_huruf;
gotoxy(101,5+i); cout << "|";
}
gotoxy(0, 5+i);cout << "+----------------------------------------------------------------------------------------------------+\n";
return 0;
}
