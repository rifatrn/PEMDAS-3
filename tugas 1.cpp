#include <iostream>
#include <string>
using namespace std;

int main() {
    string nama;
    int nomorPeserta;
    string programStudi;
    int nilai;

    // Meminta pengguna memasukkan nama
    cout << "Masukkan nama: ";
    getline(cin, nama);

    // Meminta pengguna memasukkan nomor peserta
    cout << "Masukkan No. Ujian: ";
    cin >> nomorPeserta;
    cin.ignore(); // Mengabaikan karakter newline setelah nomor peserta

    // Meminta pengguna memasukkan program studi
    cout << "Masukkan program studi: ";
    getline(cin, programStudi);

    // Meminta pengguna memasukkan nilai
    cout << "Masukkan nilai: ";
    cin >> nilai;

    // Menentukan apakah nilai lulus atau tidak
    if (nilai >= 580) {
        cout << "Halo, " << nama << "! SELAMAT anda LULUS di Prodi " << programStudi << endl;
        cout << "Segera urus Daftar Ulang Anda." << endl;
    } else {
        cout << "Halo, " << nama << " ! SEMANGAT anda BELUM LULUS di Prodi " << programStudi  << endl;
        cout << "Tetap semangat dan coba kesempatan lainnya." << endl;
    }

    return 0;
}

