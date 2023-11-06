#include <iostream>

using namespace std;

int main()
{   cout << "   PROGRAM PIRAMIDA BINTANG    " << endl;
    int s;

    cout << "   Masukkan tinggi piramida : ";
    cin >> s;

    char currentChar = '*';
    for (int i = 0; i <= s; i++){
        for (int j = s; j > i; j--){
            cout << " ";
        }
    for (int k = 1; k <= i; k++){
        cout << currentChar << " ";
        }

        cout << endl;
        }

    return 0;
}
