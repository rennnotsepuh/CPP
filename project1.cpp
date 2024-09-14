#include<iostream>
#include <ctime>

using namespace std;

int main() {
    // ctime
    time_t waktuSekarang;
    time(&waktuSekarang);
    struct tm* waktuLokal = localtime(&waktuSekarang);
    int jam = waktuLokal->tm_hour;
    
    string nama;

    int tahun_kelahiran;
    int tahun_sekarang = waktuLokal->tm_year + 1900;

    //input
    cout << "Masukkan nama - ";
    getline(cin, nama);
    cout << "Masukkan tahun kelahiran - ";
    cin >> tahun_kelahiran;
    
    
    cout << endl;
    
    // ucapan
    if (jam >= 0 && jam < 12) {
        cout << "Halo " << nama << ", selamat pagi!" << endl;
    } else if (jam >= 12 && jam < 18) {
        cout << "Halo " << nama << ", selamat siang!" << endl;
    } else {
        cout << "Halo " << nama << ", selamat malam!" << endl;
    }
    
    int usia = tahun_sekarang - tahun_kelahiran;
    cout << "Umur kamu sekarang adalah - " << usia << " tahun" << endl;

    return 0;
}


tidur nyenyak broooooooo