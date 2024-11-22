#include<iostream>
#include<fstream>

using namespace std;

int main(){
	ofstream file("data.txt"); //untuk membaca file(menandakan file ada atau tidak
	
	if (file.is_open()){
		file << "STMIK Penusa \n";
		file << "Belajar Algoritma Pemrograman.";
		file.close();	
	}else{
		cout << "file tidak bisa dibuka";
	}
	return 0;
}
