#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	cout<<setprecision(13);
	string nama;
	float jumlahterjual,komisi,sisa,totalkomisi;
	int jumlahsalesman;
	int i=1;
	jumlahsalesman=10;
	
	cout<<"KOMISI SALESMAN PT MURAH HATI"<<endl;
	cout<<"-----------------------------"<<endl;
	
	while(i=jumlahsalesman){
		cout<<"salesman"<<i<<endl;
		cout<<"NAMA:";
		cin>>nama;
		cout<<"JUMLAH PENJUALAN:";
		cin>>jumlahterjual;
		
		if(jumlahterjual==500000){
			komisi=jumlahterjual*0.10;
			sisa=0;
		
		}
		else if(jumlahterjual>500000){
			komisi=(jumlahterjual-500000)*0.15;
		}
		else{
			sisa=0;
		}
		
		totalkomisi=komisi+sisa;
		
		cout<<"komisi:"<<komisi<<endl;
		cout<<"sisa:"<<sisa<<endl;
		cout<<"totalkomisi:"<<totalkomisi<<endl;
		cout<<endl;
		return 0;
		
	}
	
}
