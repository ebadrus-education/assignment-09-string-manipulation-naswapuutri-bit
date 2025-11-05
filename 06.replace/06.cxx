#include <iostream>
#include <string>
using namespace std;

int main() {
    string teks = "Halo Dunia";
    teks.replace(5, 5, "Semesta"); // dari indeks 5, hapus 5 huruf, ganti dengan "Semesta"

    cout << teks; // Output: Halo Semesta
    return 0;
}