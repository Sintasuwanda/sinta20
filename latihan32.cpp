#include <iostream>
#include <conio.h>

//fungsi string parameter
//fungsi parametrik 1 variabel
using namespace std;

float hitung(int s); //int s = parameter 1 variabel yg menampung banyak nilai
int main(){
	float volume,sisi;
	cout << "\n Menghitung Volume KUBUS " ;
	cout << "\n Sisi KUBUS: ";
	cin >> sisi;
	volume = hitung(sisi);
	cout << "\n Volume KUBUS yaitu: " << volume;
	return 0;
}
float hitung(int s){
	return (s * s * s);
}
