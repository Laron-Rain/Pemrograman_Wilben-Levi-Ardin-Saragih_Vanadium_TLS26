#include <iostream>
using namespace std;



int main() {
    char pesan[100];
    char sandi[100];
	
	cout<<"Masukkan pesan : ";
	cin >> pesan;
    
	int huruf=0;
	for(huruf=0; pesan[huruf]!='\0';huruf++) {
        if (pesan[huruf] >= 'a' && pesan[huruf] <= 'z') {
            pesan[huruf] = pesan[huruf] - 32;
        }
    }

	
    
    for (int i = 0; i < huruf; i++) {
        int depan = pesan[i] - 'A' + 1;
        int belakang = 0;
        if (i > 0) {
            belakang = pesan[i - 1] - 'A' + 1;
        }
        int Enkripsi = (depan + belakang - 1) % 26 + 1;
        sandi[i] = (char)(Enkripsi + 'A' - 1);
    }
    
    sandi[huruf] = '\0';
    
    cout << "Pesan Asli : " << pesan << endl;
    cout << "Hasil sandi: " << sandi << endl;
    
    return 0;
}