#include <iostream>
#include <ctime>
using namespace std;

int main() {
    // Mendapatkan waktu saat ini
    time_t waktuSekarang;
    time(&waktuSekarang);
     cout << waktuSekarang;
    // Mengonversi ke waktu lokal 
    struct tm* waktuLokal = localtime(&waktuSekarang);

    // Mengambil tahun
    int tahun = waktuLokal->tm_year + 1900;

    // Menampilkan tahunnya
    cout << "Tahun sekarang: " << tahun;

    return 0;
}
