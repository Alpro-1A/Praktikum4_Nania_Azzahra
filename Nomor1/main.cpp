#include <iostream>

using namespace std;

int main()
{   cout << "Program Pengelompokkan Bilangan Bulat" << endl;

    int batas;
    int jumlahGanjil = 0;
    int jumlahGenap = 0;
    int jumlahPrima = 0;

    // Bilangan Ganjil
    do {
        cout << "Masukkan batas bilangan positif: ";
        cin >> batas;
    } while (batas <= 0);

    cout << "Bilangan Ganjil antara 1 dan " << batas << " adalah: ";
    for (int j = 1; j <= batas; ++j){
        if (j % 2 != 0) cout << j << " ";
        if (j % 2 != 0) jumlahGanjil += j;
    } cout << endl;

    // Bilangan Genap
    cout << "Bilangan Genap antara 1 dan " << batas << " adalah: ";
    for (int k = 1; k <= batas; ++k){
        if (k % 2 == 0) cout << k << " ";
        if (k % 2 == 0) jumlahGenap += k;
    } cout << endl;

    // Bilangan Prima
    cout << "Bilangan Prima antara 1 dan " << batas << " adalah: ";
    for (int i = 2; i <= batas; ++i){
        int bilanganPrima = 1;
        for (int j = 2; j * j <= i; ++j){
            if (i % j == 0){
                bilanganPrima = 0;
                break;
                }
        }
        if (bilanganPrima == 1){
            cout << i << " ";
            jumlahPrima += i;
            }
    }   cout << endl;

    // Jumlah
    cout << "Jumlah semua bilangan ganjil antara 1 dan " << batas << " adalah: " << jumlahGanjil << endl;
    cout << "Jumlah semua bilangan genap antara 1 dan " << batas << " adalah: " << jumlahGenap << endl;
    cout << "Jumlah semua bilangan prima antara 1 dan " << batas << " adalah: " << jumlahPrima << endl;

    // Faktor
    cout << "Faktor-faktor dari jumlah ganjil tersebut adalah: ";
    for (int s = 1; s <= jumlahGanjil; s++){
        if (jumlahGanjil % s == 0){
            cout << s << " ";
            }
        }
    cout << endl;

    cout << "Faktor-faktor dari jumlah genap tersebut adalah: ";
    for (int t = 1; t <= jumlahGenap; t++){
        if (jumlahGenap % t == 0){
            cout << t << " ";
            }
        }
    cout << endl;

    cout << "Faktor-faktor dari jumlah prima tersebut adalah: ";
    for (int r = 1; r <= jumlahPrima; r++){
        if (jumlahPrima % r == 0){
            cout << r << " ";
            }
        }
    cout << endl;

    return 0;
}
