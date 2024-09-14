#include<iostream>
#include <chrono>

using namespace std;



int main()
{
    string nama {};
    string usia {};
    
    //tahun kelahiran
    int tahun_kelahiran {};
    auto tahun_sekarang = chrono::system_clock::now();
    cout << tahun_sekarang;
    cout << "masukan nama :";
    cin >> nama;
    cout << "masukan usia";
    cin >> usia;
    
    cout << "halo " << nama << "selamat malam";
     
    return 0;
}