#include <iostream>

using namespace std;

int main(){
    int control;
    cin>>control;
    switch(control){
        case 1:
            cout <<"Pazartesi";
            break;
        case 2:
            cout <<"Salı";
            break;
        case 3:
            cout <<"Çarşamba";
            break;
        case 4:
            cout <<"Perşembe";
            break;
        case 5:
            cout <<"Cuma";
            break;
        case 6:
            cout <<"Cumartesi";
        case 7:
            cout <<"Pazar";
            break;
        default:
            cout<<"Yanlış Değer Girildi.";
            break;
    }
    return 0;
}