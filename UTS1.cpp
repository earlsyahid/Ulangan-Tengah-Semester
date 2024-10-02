#include <iostream>
using namespace std;

int main() {
    int NPM, absen, tugas, UTS, UAS, nilaiakhir;
    string hurufmutu, nama;

    cout << "Nilai Akhir Mahasiswa" << endl;
    cout << "Masukkan Nama Mahasiswa: ";
    cin >> nama;
    cout << "Masukkan NPM: ";
    cin >> NPM;
    cout << "Masukkan Nilai Absen: ";
    cin >> absen;
    cout << "Masukkan Nilai Tugas: ";
    cin >> tugas;
    cout << "Masukkan Nilai UTS: ";
    cin >> UTS;
    cout << "Masukkan Nilai UAS: ";
    cin >> UAS;

    nilaiakhir = (absen * 0.10) + (tugas * 0.20) + (UTS * 0.30) + (UAS * 0.40);

    if (nilaiakhir >= 85) {
        hurufmutu = "A";
    } else if (nilaiakhir >= 80) {
        hurufmutu = "B";
    } else if (nilaiakhir >= 75) {
        hurufmutu = "C";
    } else if (nilaiakhir >= 70) {
        hurufmutu = "D";
    } else {
        hurufmutu = "E";
    }
    cout << endl << "Program Nilai Akhir Mahasiswa" << endl;
    cout << "Nama                    : " << nama << endl;
    cout << "NPM                     : " << NPM << endl;
    cout << "Nilai Absen             : " << absen << endl;
    cout << "Nilai Tugas             : " << tugas << endl;
    cout << "Nilai UTS               : " << UTS << endl;
    cout << "Nilai UAS               : " << UAS << endl;
    cout << "Nilai Akhir             : " << nilaiakhir << endl;
    cout << "Huruf Mutu              : " << hurufmutu << endl;

    return 0;
}
