#include <iostream>
using namespace std;

int main() {
    int suara[3] = {0}, pilihan;
    char ulang;

    do {
        cout << "=== Voting ===\n1.A\n2.B\n.3.C\nPilih (1-3):";
        cin >> pilihan;

        if(pilihan >= 1 && pilihan <= 3) {
            suara[pilihan-1]++;
            cout << "Anda memilih kandidat " << char('A' + pilihan - 1) << endl;
        } else cout << "pilihan tidak valid\n";

        cout << "Lagi? (y/n): "; cin >> ulang;
    } while(ulang == 'y' || ulang == 'Y');

    cout << "\n=== Hasil voting ===\n";
    for(int i=0; i < 3; i++)
        cout << "kandidat" << char('A' + i) << ": " << suara[i] << "suara\n";

        return 0;



}