#include <iostream>
#include <cmath>
using namespace std;


/*FUNGSI Tambah

int tambah(int a,int b){
	return a + b;
	
}

int main(){
	int x ,y ,hasil;
	
	cin>>x>>y;
	
	hasil = tambah (x,y);
	
	cout<<"Hasilnya adalah : "<<hasil;
}
*/

/*LUAS LINGKARAN

double luasLingkaran(double r){
	double pi = M_PI;
	return pi*r*r;
	
}

int main(){
	double r;
	
	cin>> r;
	
	cout<<"Luas Lingkaran adalah : "<<luasLingkaran(r);
	
	return 0;
}

*/


//PROGRAM BUAT ABSEN

void absen (string nama, int npm){
	cout<< nama<<"_"<<npm;
	
}

int main(){
	string nama;
	int npm;
	
	getline(cin,nama);
	cin>>npm;
	
	absen(nama,npm);
	
	return 0;
}






