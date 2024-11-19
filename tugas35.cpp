#include <iostream>
#include <conio.h>
#include <iomanip>
#include <windows.h>
//sinta suwanda
//nim : 240121095

using namespace std;

//deklarasi function
float pokok(float gaji, int jam);
int lembur(int gaji_pokok, int jam);
int jasa(int jam);
float makan(int jam);
int jamlembur(int jam, int gaji);
int label(int gaji, int jam);
void gotoxy(int x, int y){
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main(){
	cout << setprecision(15);
	string nama;
	const int gaji = 2000;
	float gajipokok,jam_kerja,uang_lembur,uang_makan,uang_jasa,gajitotal;
	int jam_lembur,pjg;
	
	//proses input
	cout << "******************************************************************";
	cout << "\n                   PT. Rejeki Nomplok \n";
	cout << "******************************************************************\n";
	cout << "\n MASUKAN NAMA           : ";
	getline(cin, nama);
	cout << "\n Masukkan Jumlah Jam Kerja: ";
	cin >> jam_kerja;
	
	//proses tampil data
	system("cls");
	cout << "====================================================================";
	cout << "\n                     PT. Rejeki Nomplok \n";
	cout << "====================================================================\n";
	
	jam_lembur = jam_kerja - 7 ;
	gajipokok = pokok(gaji,jam_kerja);
	uang_lembur = lembur(gaji,jam_kerja) * jam_lembur;
	uang_jasa = jasa(jam_kerja);
	uang_makan = makan(jam_kerja);
	pjg = nama.length();
	
	cout << " "<< nama << " bekerja selama " << jam_kerja << " jam:";
	gotoxy(pjg+2,4);cout <<"Gaji Pokok                ";
	gotoxy(33,4);label(gaji, jam_kerja);
	gotoxy(49, 4);cout << "= " << gajipokok;
	gotoxy(pjg+2, 5);cout << "Uang Lembur";
	gotoxy(33,5);jamlembur(jam_kerja, gaji);
	gotoxy(49, 5);cout << "= " << uang_lembur;
	gotoxy(pjg+2, 6);cout << "Uang Makan";
	gotoxy(49, 6);cout << "= " << uang_makan; 
	gotoxy(pjg+2, 7);cout << "Uang Jasa Lembur";
	gotoxy(49,7);cout << "= " << uang_jasa;
	gajitotal = gajipokok + uang_lembur + uang_makan + uang_jasa;
	gotoxy(pjg+2, 8);cout << "Gaji yang diterima";
	gotoxy(49,8);cout << "= " << gajitotal << endl;
	cout << "------------------------------------------------------------------------------------\n";

	return 0;
	
}

float pokok(float gaji, int jam){
	if(jam >= 0 and jam < 8){
		return (gaji * jam);
	}
	else if(jam >= 8){
		return (gaji * 7) ;
	}
}

int lembur(int gaji_pokok, int jam){
	if(jam > 7){
		return 1.5 * gaji_pokok;
	}
	if(jam < 7){
		return 0;
	}
}

int jasa(int jam){
	
	if(jam >= 9){
		return 3000;
	}
	else {
		return 0;
	}
}

float makan(int jam){
	if (jam >= 8 and jam <= 10){
		return 1500;
	}
	else if(jam > 10){
		return 2500;
	}
	else{
		return 0;
	}
}

int jamlembur(int jam, int gaji){
	if(jam > 7){
		int jml;
		jml = jam  - 7;
	cout << " = "<< jml << " x " << 1.5 * gaji;
	}
	else {
		return 0;
	}
}
int label(int gaji, int jam){
if(jam > 0 && jam <= 7)	{
	cout << " = " << jam << " x " << gaji;
}
else if (jam >= 8){
	cout << " = " << 7 << " x " << gaji;
}
else {
	return 0;
}
}
