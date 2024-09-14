#include <iostream>
#include <ctime>
using namespace std;

int main() {
    // Mendapatkan waktu saat ini
    time_t waktuSekarang;
    time(&waktuSekarang);
     cout << waktuSekarang;
    // Mengonversi ke waktu lokal dalam bentuk struktur tm
    struct tm* waktuLokal = localtime(&waktuSekarang);

    // Mengambil tahunnya saja (tm_year + 1900)
    int tahun = waktuLokal->tm_hour;

    // Menampilkan tahunnya
    cout << "Tahun sekarang: " << tahun;

    return 0;
}