#include<iostream>
using namespace std;

int penjumlahan(int a, int b) {
    return a + b;
}
int pengurangan(int c, int d) {
    return c - d;
}
int perkalian(int e, int f) {
    return e * f;
}
int pembagian(int g, int h) {
    return g / h;
}

void log(int x, int y, char op, int result) {
    cout << "Hasil dari " << x << " " << op << " " << y << " adalah: " << result << endl;
}

int main() {
    int a = 5, b = 5;

    int tambah = penjumlahan(a, b);
    int kurang = pengurangan(a, b);
    int kali = perkalian(a, b);
    int bagi = pembagian(a, b);

    log(a, b, '+', tambah);
    log(a, b, '-', kurang);
    log(a, b, '*', kali);
    log(a, b, '/', bagi);

    return 0;
}