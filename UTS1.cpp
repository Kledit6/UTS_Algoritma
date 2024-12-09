#include <iostream>
using namespace std;


void tampilanMenu() {
    cout << "===== JUDUL BUKU =====" << endl;


    cout << endl;

    cout << "1. Laut Bercerita     - Leila S. Chudori              : Rp 115.000" << endl;
    cout << "2. Atomic Habits      - James Clear                   : Rp 175.000" << endl;
    cout << "3. Bumi Manusia       - Pramoedya Ananta Toer         : Rp 120.000" << endl;
    cout << "4. Filosofi Teras     - Henry Manampiring             : Rp 100.000" << endl;
    cout << "5. Batal" << endl;


}

int hargaBuku (int pilihan) {
    switch (pilihan) {
    case 1:
        return 115000;
    case 2:
        return 175000;
    case 3:
        return 120000;
    case 4:
        return 100000;
    default:
         return -1;
    }
}

int main() {
    int pilihan, harga;
    bool lanjut = true;
    while (lanjut) {
            cout << endl;
            tampilanMenu();

            cout << "PILIH ANGKA MENU BUKU ATAU BATAL: ";
            cin >> pilihan;

            cout << endl;


        if (pilihan == 5){
                break;
        } else if (pilihan <= 4){
            harga = hargaBuku (pilihan);
            cout << "BUKU YANG DI PILIH : " << pilihan << endl;
            cout << "DENGAN HARGA        : Rp " << harga << endl;
        } else {
            cout << "PILIH" << endl;
        }
    }
    return 0;
}