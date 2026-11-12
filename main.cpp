#include <iostream>
#include <string>

using namespace std;

int main() {
    string nama, sekolah;
    char ulang;

    do {
        cout << "=========================================" << endl;
        cout << "      PROGRAM INPUT NAMA & SEKOLAH       " << endl;
        cout << "=========================================" << endl;

        cout << "Masukkan Nama    : ";
        getline(cin, nama);

        cout << "Masukkan Sekolah : ";
        getline(cin, sekolah);

        cout << "\n--- Hasil Input ---" << endl;
        cout << "Nama    : " << nama << endl;
        cout << "Sekolah : " << sekolah << endl;
        cout << "-------------------\n" << endl;

        cout << "Apakah ingin mengulang input? (y/t): ";
        cin >> ulang;
        cin.ignore(); // Membersihkan karakter newline dari buffer sebelum getline berikutnya
        cout << endl;

    } while (ulang == 'y' || ulang == 'Y');

    cout << "Program selesai. Terima kasih!" << endl;

    return 0;
}
