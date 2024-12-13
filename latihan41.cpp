#include <iostream>
#include <conio.h>
#include <string.h>
#include <dos.h>
#include <iomanip>
#include <cstdlib>

using namespace std;
struct buku  //membuat struktur buku
{
	int kodeB,sewa,stock;
	char judul[20];
	int b;
}buku[100];//deklarasi
struct pinjam //membuat struct pinjam
{
	int kodepinjam,d,kB,tglpin,tglbalik,dipinjem;
	char namap[40];
	char alamat[40];
	char status;
}pinjembuku[100]; //deklarasi

//body
int main(){
	system("cls"); //digunakan untuk membersihkan layar
	int jmlbuk,a,c,e,f,g,h,jmlpin,hs,lp,kodepin,stok;
	int b = -1;
	int d = -1;
	char yn,ch,temp;
	
	//membuat username dan password
	login:
	string user = "";
	string pass = "";
	cout << "\n\n\n\n\n\n\n\n";
	cout <<"\t\t------- program Aplikasi Perpustakaan ----------\n\n ";
	cout << "\t\t\t Username : "; cin>>user;
	cout << "\t\t\t password : ";
	ch = _getch();
	while (ch != 13) { //character 13 is enter
	pass.push_back(ch);
	cout << '*';
	ch = _getch();
	}
	cout<<endl;
	if(user == "admin" && pass == "12345678"){
		cout << "\n\n Anda berhasil login. \n" << endl;
		system ("pause");
		system ("cls");
		goto mulaimenu;
	}else{
		cout << "Password Anda Salah \n";
		system ("pause");
		system ("cls");
		goto login;	
	}
	//end memuat username dan password
	mulaimenu: //mulai menu
	int pil;
	cout << "----Aplikasi Perpustakaan ----"<<endl;
	cout << "-----------Menu------------\n";
	cout << "1. Input Buku              \n";
	cout << "2. Daftar Buku             \n";
	cout << "3. Peminjam                \n";
	cout << "4. Pengembalian            \n";
	cout << "5. Laporan                 \n";
	cout << "6. Exit                    \n";
	cout << "---------------------------- \n";
	cout << "Masukan Pilihan anda[1 s.d. 6 ] = ";cin>>pil;
	
	if(pil ==1){ //input buku
	    inbuk:
	   	system("cls");
	   	cout<<"\n"<<endl;
	   	cout<<"\t\t\tInput Buku : \n"; //input buku berdasarkan jumlah buku
	   	cout<<"\t\t\t____________________\n"<<endl;
	   	cout<<endl;
	   	b++;
	   	  cout<<"Masukan Data Buku Ke \t: "<<b+1<<endl;
	   	  cout<<" Kode Buku \t\t:";scanf("%d%c" , & buku[b].kodeB, &temp);
	   	  cout<<" Judul Buku \t\t:"gets(buku[b].judul);
	   	  cout<<" Harga Sewa \t\t:"scanf("%d%c" , & buku[b].sewa, &temp);
	   	  cout<<" Jumlah Buku \t\t:"scanf("%d%c" , & buku[b].stock, &temp);
	   	  cout<<endl;
	   	  cout<<"Apakah Anda Ingin Menambahkan Data Lagi ? (y/n) : ";cin>>yn;
	   	  if(yn=='y'||yn=='Y'){
	   	  	goto inbuk;
			 }else{
			 	cout << "\n\n Data Berhasil Disimpan \n"<<endl;
			 	system("pause");
			 	system("cls");
			 	goto mulaimenu;
			 }
			 {
			 	cout << "\n\n Data Berhasil Disimpan\n" <<endl;
			 	system("pause");
			 	system("cls");
			 	goto mulaimenu;
			 }
			 
	}else if( pil == 2){ //melihat daftar buku yg
	    system("cls");
	    cout<<"\n"<<endl;
	   	cout<<"\t\t\tDaftar Buku"<<endl; 
	   	cout<<"\t\t\t____________________\n"<<endl;
	   	cout<<"-----------------------------------------------------------------------------------\n";
	   	cout<<"No      Kode Buku      Judul Buku       Harga Sewa     Jumlah Buku      buku keluar\n";
	   	cout<<"-----------------------------------------------------------------------------------\n";
	   	for(c=0;c<=b;c++){
	   		stok = buku[c].stock-pinjembuku[c].dipinjem;
	   		cout<<setw(2)<<c+1<<setw(8)<<buku[c].kodeB<<setw(22)<<buku[c].judul <<setw(10)<<buku[c].sewa<<setw(14)<<stok<<setw(12)<<pinjembuku[c].dipinjem;
	   		cout<<endl;
		   }
		   cout<<endl;
		   system("pause");
	    	system("cls");
	    	goto mulaimenu;
	}else if (pil ==3){ //input transaksi peminjaman buku
    	transaksipinjem:
		d++;
		system("cls");
	    cout<<"\n"<<endl;
	   	cout<<"\t\t\t Transaksi Peminjaman : \n"; 
	   	cout<<"\t\t\t____________________\n"<<endl;
	   	cout<<endl;
	   	  cout<<" Masukan Data Pinjaman Ke \t: "<<d+1<<endl;
	   	  cout<<" kode Pinjaman \t\t\t:";scanf("%d%c", &pinjembuku[d].kodepinjam, &temp);
	   	  cout<<"  Kode Buku     \t\t\t:";scanf("%d%c",&pinjembuku[d].kB,&temp);
	   	  
	   	  cout<<"Nama Peminjam Buku \t\t:";gets(pinjembuku[d].namap);
	   	  cout<<"Alamat Peminjam\t\t:";gets(pinjembuku[d].alamat);
	   	  cout<<"Tanggal Pinjam (DDMMYYYY)\t:";scanf("%d%c", &pinjembuku[d].tglpin,&temp);
	   	  cout<<"Tanggal Balik (DDMMYYYY)\t:";scanf("%d%c", &pinjembuku[d].tglbalik,&temp);
	   	  lp = (pinjembuku[d].tglbalik-pinjembuku[d].tglpin)/1000000;
	   	  cout<<"Lama Pinjaman \t\t\t:"<<lp<<" Hari"<<endl;
	   	  cout<<"Banyak Buku Yang Dipinjam \t:";scanf("%d%c", &pinjembuku[d].dipinjem,&temp);
	   	  hs = pinjembuku [d].dipinjem*buku[d].sewa;
	   	  cout<<" Harga Sewa \t\t\t:"<<hs;
	   	  cout<<endl;
	   	  cout<<" Status dipinjam (y) ? \t\t: ";cin>>pinjembuku[d].status;
	   	  cout << endl;
	   	cout<<"Apakah anda Ingin Menambahkan Data Lagi ? (y/n) :";cin<< yn
		   if(yn=='y'||yn=='Y'){
		   	goto transaksipinjem;
		   }else}
		   cout << "\n\n Data Berhasil Disimpan\n" <<endl;
			 	system("pause");
			 	system("cls");
			 	goto mulaimenu; 
		   }  
	}
	
}


