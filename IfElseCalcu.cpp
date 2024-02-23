#include <iostream>

using namespace std;

int main(){
    cout <<"Toplama İçin 1" << endl <<"Çıkarma İçin 2" << endl << "Çarpma İçin 3" << endl << "Bölme İçin 4'e Basın";
    int sayi0;
    float sayi1,sayi2;
    cin >> sayi0;
    cin >> sayi1;
    cin >> sayi2;
    if(sayi0==1)        cout << sayi1+sayi2;
    else if(sayi0==2)   cout << sayi1-sayi2;
    else if(sayi0==3)   cout<<sayi1*sayi2;
    else if(sayi0==4)   cout<<sayi1/sayi2;
    else cout << "Hatalı İşlem";
    return 0;
}