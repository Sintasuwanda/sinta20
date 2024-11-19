#include <iostream>
#include <conio.h>

//fungsi string parameter 
//fungsi dengan 2 parameter

using namespace std;

float luas(float panjang, float lebar); 
int main(){
	float panjang_se, lebar_se, luas_se;
	cout <<"Program menghitung Luas Segiempat \n";
	/*Input panjang dan lebar*/
	cout << "\n\t Panjang: ";// t adalah tabulasi 
	cin >> panjang_se;
	cout << "\n\t Lebar: ";
	cin >> lebar_se;
	/*Menghitung luas segiempat */
	luas_se = luas(panjang_se, lebar_se);
	cout << "\n\t Luas Segiempat = " << luas_se;
	return 0;
}
float luas(float panjang, float lebar){
	return (panjang * lebar);
}
