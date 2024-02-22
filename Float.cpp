#include <iostream>

using namespace std;

int main(){
    int quizNot1 = 72.f; // Buraya .f gelmeli
    int quiznot2= 29;
    float quiznot3 = (float)(quizNot1+quiznot2) / 2; // yada başa (float) gelecek
    cout << quiznot3;
    return 0;
}