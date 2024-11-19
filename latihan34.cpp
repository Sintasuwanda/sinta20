#include <iostream>
#include <conio.h>
//gabungan fungsi lebih dari satu
//gabungan dari fungsi parameter dan nonparameter
//ada 4 fungsi
using namespace std;

float gaji_pk(char gol), pajak(float gaji);
float tunjangan(float gaji, char status, int anak);
void garis();

int main(){
	int anak;
	char golong,stat;
	float gaji, gajipokok, tnj, pjk;
	while(1){ //1 = true
		/*cetak judul program*/
		cout << "\n\n Program untuk menghitung Gaji Karyawan";
		cout << "\n\n Untuk Menghentikan Program ketik x pada Golongan \n";
		garis();
		
		/*Input data*/
		cout << "\n Golongan karyawan(A-C & untuk Selesai) :  ";
		golong = getche();
		if (golong == 'X' || golong == 'x')
		break;
		cout << "\n Status Karyawan (N=Nikah & B=Belum) :";
		stat = getche();
		if (stat == 'N' || stat == 'n'){
			cout << "\n\t Jumlah Anak: ";
			cin >> anak;
		}else
		cout << "\n\t";
		
		/*menghitung Gaji Bersih */
		gajipokok = gaji_pk(golong);
		tnj = tunjangan(gajipokok , stat, anak);
		pjk = pajak(gajipokok);
		gaji = gajipokok + tnj - pjk;
		
		/*Cetak Output */
		cout << "\n\n";
		cout << "\n Gaji Pokok = Rp." << gajipokok;
		cout << "\n Tunjangan = Rp." << tnj;
		cout << "\n-------------------------------------------------------------------------------+";
		cout << "\n Total = Rp." << gajipokok + tnj;
		cout << "\n Pajak = Rp." << pjk;
		cout << "\n-------------------------------------------------------------------------------+";
		cout << "\n Gaji Bersih = Rp." << gaji;
		cout << "\n-------------------------------------------------------------------------------+";
		cout << "\n\n Tekan Sembarangan Tombol";
		getch();
		
	}
}

void garis(){ // Menggambar garis*/

for(int i =1; i <= 50; i++){
	cout << "\xB1";
}
}
float gaji_pk(char gol){
	switch(gol){
		case 'A':
		case 'a':
			return (100000.00);
		case 'B':
		case 'b':
			return (150000.00);
		case 'C':
		case 'c':
			return (200000.00);
		default:
			return (0.00);
	}
}

/*menghitung tunjangan*/
float tunjangan(float gaji, char status, int anak){
	float ta, ti;
	if (status == 'B' || status == 'b'){
		ta = 0;
		ti = 0;
	}
	else if (status == 'N' || status == 'n'){
		ta = 0.15 * gaji;
		ti = anak > 3 ? 3 * .1 * gaji : anak * .1 * gaji; //? wildcart pengganti if 
	
	} 
	return (ta + ti);
}
/*menghitung Pajak*/
float pajak(float gaji){
float pjk;
pjk = gaji <= 96000 ? 0 : 0.15 * (gaji - 96000);
return (pjk);
}


