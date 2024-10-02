#include <iostream>
using namespace std;

int main() {
    float IMT, berat, tinggi;
    string Kriteria;

    cout << "Program Menghitung IMT" << endl;
    cout << "Masukkan Berat Badan: ";
    cin >> berat;
    cout << "Masukkan Tinggi Badan: ";
    cin >> tinggi;

    IMT = berat / (tinggi*tinggi);

    if (IMT >= 40) {
        Kriteria = "Sangat Gemuk";
    } else if (IMT >= 30) {
        Kriteria = "Gemuk";
    } else if (IMT >= 25) {
        Kriteria = "Berat Badan Lebih";
    } else if (IMT >= 18.5) {
        Kriteria = "Berat Badan Ideal";
    } else {
        Kriteria = "Berat Badan Kurang";
    }
    cout << Kriteria;

    return 0;
}
