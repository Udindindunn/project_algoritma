#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    struct Data {string n; int j; float b, t;} d[10];
    int i=0; char l;

    do {
        cout << "\n=== LAUNDRY ===\nNama: "; cin >> d[i].n;
        cout << "Jenis(1:Reg 5k, 2:Exp 8k): "; cin >> d[i].j;
        cout << "Berat: "; cin >> d[i].b;
        d[i].t = d[i].b * (d[i].j==1?5000:d[i].j==2?8000:0);
        i++;
        cout << "lagi? (y/n): "; cin >> l;
    } while(l=='y' || l=='Y');

    cout << "\n=== TRANSAKSI ===\n";
    cout << left << setw(15) << "Nama" << setw(12) << "Layanan" << setw(8) << "Berat" << "total\n";

    for(int j=0; j<i; j++)
    cout << left << setw(15) << d[j].n << setw(12) 
            << (d[j].j==1?"Reguler":"Express") << setw(10)
            << d[j].b << "Rp " << d[j].t << "\n";
            
        return 0;
}   