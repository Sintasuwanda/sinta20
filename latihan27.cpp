#include<iostream>
#include<string>
//fungsi string
 using namespace std;
 
 int main() {
 	string str1 = "STMIK";
 	string str2 = "PENUSA";
 	
 	//concatenation = menggabungkan 2 kata
 	string result = str1 + " " + str2;
 	cout<< "concatenated: "<<result<<std::endl;
 	
 	//length = menghitung pnjng karakter
 	size_t length = result.length();
 	cout<< "length: "<<length<<std::endl;
 	
 	//substring =m mengambil kata dari ke 6 sbnyk 6 karakter
 	string sub = result.substr(6,6);
 	cout<< "substring: "<<sub<<std::endl;
 	
 	//find= posisi ke berapa 
 	size_t pos = result.find("PENUSA");
	 cout<< "position of 'PENUSA':" <<pos<<std::endl;
	 
	 //replace menyisipkan/menambahkata dari karakter 0
	 result.replace(0,5, " Hi ");
	 cout<< "replaced :" <<result<<std::endl;
	 
	 return 0;  
 }
