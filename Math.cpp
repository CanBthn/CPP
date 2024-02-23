#include <iostream>
#include <cmath> //iostream üzerinde cmath vardır (Silsekte sorun olmaz Microsofta özeldir)

using namespace std;

int main(){
    //Sayı üstü alma
    int sayi;
    sayi = pow(2,5); // Sayı üstü alır
    cout << sayi;
    sayi = floor(2.7);  // Alta yuvarlar
    cout << endl << sayi;
    sayi = ceil(2.1); // Üste yuvarlar
    cout << endl << sayi;
    sayi = round(2.5); // En yakına yuvarlar
    cout << endl << sayi;

    return 0;
}