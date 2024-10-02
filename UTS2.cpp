#include <iostream>
using namespace std;

int main() {
    int tinggi;

    cout<<"Masukkan Angka : ";
    cin>> tinggi;

    for(int i=0; i < tinggi; i++){
        for(int j=0; j <= i; j++){
            cout<< "*" ;
        }
        cout << endl;
    }
    return 0;
}
