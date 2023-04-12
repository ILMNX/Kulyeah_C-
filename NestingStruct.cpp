#include <iostream>
#include <string>

using namespace std;

struct aktor{
	string nama;
	int tahunLahir;
	
};

struct film{
	string judul;
	string genre;
	int tahun;
	//struct aktor
	aktor pemeran_1;
	aktor pemeran_2;
};

int main (){
	
	aktor aktor1,aktor2;
	film film1;
	
	
	//buat aktor 1
	aktor1.nama = "Gilbert Sibuea";
	aktor1.tahunLahir = 2004;
	
	//aktor 2
	aktor2.nama = "Vito Evan";
	aktor2.tahunLahir = 2006;
	
	//buat film
	
	film1.judul = "Ant-Man";
	film1.genre = "Aksi";
	film1.tahun = 2012;
	film1.pemeran_1 = aktor1;
	film1.pemeran_2 = aktor2;
	
	cout << film1.judul <<endl;
	cout<< film1.genre <<endl;
	cout << film1.tahun <<endl;
	cout << film1.pemeran_1.nama <<endl;
	cout << film1.pemeran_2.nama<< endl;
	
	cin.get();
	return 0;
}
