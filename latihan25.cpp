#include<iostream>
#include<conio.h>
#include<string>
#include<stdio.h>
#include<windows.h>
#include <cstdlib>
#include<iomanip>
//materi struct dan penggabungan array

using namespace std;

void gotoxy(int x, int y){
	COORD coord; //struktur untuk mengatur koordinat
	coord.X = x; //koordinat X
	coord.Y = y; //koordinat Y
	 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
struct pegawai{
	char nik[9];
	char nama[20];
	char gol[3];	
} peg[20];

int main(){
	char lg='Y';
	int hasil,i,n=0;
	float gaji=0;
	while (lg=='Y'|| lg=='y'){
		
		system("cls");
		cout<<setprecision(15);
		cout<<"Input data pegawai\n";
		cout<<"*******************************************\n";
		n++;
		cout<<"NIK:";
		gets(peg[n].nik);
		cout<<"Nama:";
		gets(peg[n].nama);
		cout<<"Gol [I,II]:";
		gets(peg[n].gol);
		cout<<"-------------------------------------------\n";
		cout<<"Input lagi[Y/T]:";
		
		lg=getch();
	}
	system("cls");
	gotoxy(5,3) ; cout<<"LAPORAN DATA PEGAWAI\n";
	gotoxy(5,4) ; cout<<"--------------------------------------------------------------------------------\n";
	gotoxy(5,5) ; cout<<"No          Nik              Nama            Gol               Gaji          \n";
	gotoxy(5,6) ; cout<<"--------------------------------------------------------------------------------\n";
	for(i=1 ; i<=n ; i++)
	{
		gotoxy(6 ,6+i) ; cout<<i ;
		gotoxy(9 ,6+i) ; cout<<peg[i].nik ;
		gotoxy(17 ,6+i) ; cout<<peg[i].nama ;
		gotoxy(38 ,6+i) ; cout<<peg[i].gol ;
		hasil = strcmp(peg[i].gol,"I");
		if (hasil==0)
		gaji = 750000;
		hasil = strcmp(peg[i].gol,"II");
		if (hasil==0)
		gaji = 1250000;
		gotoxy(45,6+i);cout<<gaji;
	}
	gotoxy(5,7+i);cout<<"-----------------------------------------------------------------------------";
	return 0;
	
}

