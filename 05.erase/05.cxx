#include <iostream>
#include <string>
using namespace std;

int main() {
    string teks = "Selamat Pagi Dunia";
    teks.erase(7, 5); // Hapus mulai indeks 7 sebanyak 5 karakter

    cout << teks; // Output: Selamat Dunia
    return 0;
}