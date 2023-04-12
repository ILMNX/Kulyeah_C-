#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

struct Mahasiswa {
    string nama;
    string NIM;
    string jurusan;
    float nilai;
};

class DataMahasiswa {
    private:
        Mahasiswa *mhs;
        int jumlah;
    
    public:
        DataMahasiswa() {
            jumlah = 0;
            mhs = new Mahasiswa[100];
        }

        void input_data() {
            cout << "Masukkan jumlah mahasiswa: ";
            cin >> jumlah;

            for(int i = 0; i < jumlah; i++) {
                cout << "Data mahasiswa ke-" << i+1 << endl;
                cout << "Nama: ";
                cin >> mhs[i].nama;
                cout << "NIM: ";
                cin >> mhs[i].NIM;
                cout << "Jurusan: ";
                cin >> mhs[i].jurusan;
                cout << "Nilai: ";
                cin >> mhs[i].nilai;
            }
        }

        void tampilkan_data() {
            for(int i = 0; i < jumlah; i++) {
                cout << "Data mahasiswa ke-" << i+1 << endl;
                cout << "Nama: " << mhs[i].nama << endl;
                cout << "NIM: " << mhs[i].NIM << endl;
                cout << "Jurusan: " << mhs[i].jurusan << endl;
                cout << "Nilai: " << mhs[i].nilai << endl << endl;
            }
        }

        float hitung_rata_rata() {
            float total = 0;
            for(int i = 0; i < jumlah; i++) {
                total += mhs[i].nilai;
            }
            return total / jumlah;
        }

        void urutkan_data() {
            sort(mhs, mhs+jumlah, [](Mahasiswa a, Mahasiswa b) {
                return a.nilai > b.nilai;
            });
        }

        void simpan_data() {
            ofstream myfile;
            myfile.open("data.txt");
            for(int i = 0; i < jumlah; i++) {
                myfile << mhs[i].nama << " " << mhs[i].NIM << " " << mhs[i].jurusan << " " << mhs[i].nilai << endl;
            }
            myfile.close();
        }

        ~DataMahasiswa() {
            delete[] mhs;
        }
};

int main() {
    DataMahasiswa dm;
    dm.input_data();
    dm.tampilkan_data();
    cout << "Rata-rata nilai: " << dm.hitung_rata_rata() << endl;
    dm.urutkan_data();
    dm.tampilkan_data();
    dm.simpan_data();
    return 0;
}
