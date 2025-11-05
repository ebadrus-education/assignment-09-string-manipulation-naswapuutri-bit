#include <iostream>
#include <string>
using namespace std;

int main() {
    string teks = "Selamat Pagi Dunia";

    string kata = teks.substr(8, 4); // mulai dari indeks 8, ambil 4 karakter
    cout << kata; // Output: Pagi

    return 0;
}