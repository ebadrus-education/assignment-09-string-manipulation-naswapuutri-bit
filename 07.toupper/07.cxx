#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main() {
    string teks = "Halo Dunia";

    // ubah ke huruf besar semua
    for (int i = 0; i < teks.length(); i++) {
        teks[i] = toupper(teks[i]);
    }
    cout << teks << endl; // Output: HALO DUNIA

    // ubah ke huruf kecil semua
    for (int i = 0; i < teks.length(); i++) {
        teks[i] = tolower(teks[i]);
    }
    cout << teks << endl; // Output: halo dunia

    return 0;
}