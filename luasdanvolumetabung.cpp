#include <iostream>
 
using namespace std;
 
float hitungLuasPermukaanTabung(float r, float t) {
  return 2 * (22.0/7.0) * r * (r + t);
}
 
float hitungVolumeTabung(float r, float t) {
  return (22.0/7.0) * t * r * r;
}
 
int main()
{
  cout << "##  Program C++ Luas Permukaan dan Volume Tabung  ##" << endl;
  cout << "====================================================" << endl;
  cout << endl;
 
  float jari2, tinggi;
 
  cout << "Input jari-jari tabung: ";
  cin >> jari2;
  cout << "Input tinggi tabung: ";
  cin >> tinggi;
  cout << endl;
 
  cout << "Luas permukaan tabung = "
       << hitungLuasPermukaanTabung(jari2,tinggi)<< endl;
 
  cout << "Volume tabung = "
       << hitungVolumeTabung(jari2,tinggi) << endl;
 
  return 0;
}
