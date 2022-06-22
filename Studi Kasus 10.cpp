#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

struct parmatika
{
    long int nim, nim2, nim3, nim4, nim5;
    string nama, nama2, nama3, nama4, nama5;
};

class final {
	public :
		void ipres();
};

void final::ipres(){
	//Isi data peserta final parmatika
    struct parmatika *identitas, kartu;
    kartu.nim = 2100018378;
    kartu.nama = "MUHAMMAD NAUFAL LABIB RAMADHAN";
	kartu.nim2 = 2100018387;
	kartu.nama2 = "ILHAM NUR CAHYO";
	kartu.nim3 = 2000019178;
	kartu.nama3 = "SIMONSELI";
	kartu.nim4 = 2000020478;
    kartu.nama4 = "JULIANA PUTRI"; 
	kartu.nim5 = 2100018378;  
    kartu.nama5 = "CACA";   

	 //Variabel pointer identitas
    //Diatur menunjuk ke variabel kartu
    identitas = &kartu;

    //Mengakses data melalui variabel pointer identitas
    cout<<" Nomor Induk Mahasiswa ke - 1\t\t: " <<identitas->nim <<endl;
    cout<<" Nama ke - 1\t\t\t\t: " <<identitas->nama <<endl;
	cout<<" Nomor Induk Mahasiswa ke - 2 \t\t: " <<identitas->nim2 <<endl;
    cout<<" Nama ke - 2 \t\t\t\t: " <<identitas->nama2 <<endl;
	cout<<" Nomor Induk Mahasiswa ke - 3 \t\t: " <<identitas->nim3 <<endl;
    cout<<" Nama ke - 3 \t\t\t\t: " <<identitas->nama3 <<endl;
	cout<<" Nomor Induk Mahasiswa ke - 4 \t\t: " <<identitas->nim4 <<endl;
    cout<<" Nama ke - 4 \t\t\t\t: " <<identitas->nama4 <<endl;
	cout<<" Nomor Induk Mahasiswa ke - 5 \t\t: " <<identitas->nim5 <<endl;
    cout<<" Nama ke - 5 \t\t\t\t: " <<identitas->nama5 <<endl;
}

int main()
{
	cout<<"\t\n\tProgram C++ Pointer (Final Parmatika)\n\n\n";
	final win;
	win.ipres();
    
    getch();
}
