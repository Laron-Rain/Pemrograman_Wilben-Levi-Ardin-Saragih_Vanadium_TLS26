#include <iostream>
using namespace std;

int main() {
    int a, x;
    
    cout << "Masukkan jumlah astronot : ";
    cin >> a;
    cout << "Masukkan nilai hitungan awal : ";
    cin >> x;

    int nyawa[a]; 
    for (int i = 1; i <= a; i++) {
        nyawa[i] = 1;
    }

    cout << "\nUrutan astronot yang dieliminasi: ";
    
    int nomor = 1; 
    int hidup = a;

    while (hidup > 1) {
        int hitungan = 0;
        
        while (hitungan < x) {
            if (nyawa[nomor] == 1) {
                hitungan++;
                if (hitungan == x) {
                    break; 
                }
            }
            nomor = (nomor % a) + 1;
        }
		
        nyawa[nomor] = 0;
        cout << nomor << " ";
        hidup--;

        int tewas = nomor;

        do {
            nomor = (nomor % a) + 1;
        } while (nyawa[nomor] == 0 && hidup > 1);

         if (tewas % 2 == 0) {
            x += 2;
        } else {
            x -= 1;
        }

        if (x < 2) {
            x = 2;
        }
    }

    int selamat;
    for (int i = 1; i <= a; i++) {
        if (nyawa[i] == 1) {
            selamat = i;
            break;
        }
    }

    cout << "\nAstronot terakhir yang bertahan: " << selamat << endl;

    return 0;
}