#include <iostream>
#include <string>
using namespace std;

int main() {
    string teks = "Selamat Pagi Dunia";

    size_t posisi = teks.find("Pagi");
    cout << posisi; // Output: 8

    return 0;
}