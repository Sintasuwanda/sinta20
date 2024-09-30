#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	int jumlahdata,jumlahbarang,totalpenjualan=0;
	
	cout<<"masukan jumlah data";
	cin>>jumlahdata;
	
	for(int i=1;i<=jumlahdata; i++){
	
	cout<<"masukan jumlah barang yang terjual di toko"<<i<<":";
	cin>>jumlahbarang;
	
	totalpenjualan += jumlahbarang; //totalpenjualan = totalpenjualan+jumlahbarang
}


cout<<"total barang yang terjual di toko adalah:"<<totalpenjualan<<endl;

return 0;

}
