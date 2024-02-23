#include <iostream>

using namespace std;

int main(){
    int sayi1, sayi2, sayi3, max;
    cout<<"Please enter 3 integer";
    cin>>sayi1;
    cin>>sayi2;
    cin>>sayi3;
    max = 0;
    if(sayi1>=max) max=sayi1;
    if(max<=sayi2) max=sayi2;
    if(max<=sayi3) max=sayi3;
    cout<<max;  
    return 0;
}