#include <iostream>
using namespace std;

int main(){
    const float usd = 37.02;
    const float eur = 39.39;
    float uah;
    cout << "uah" << endl;
    cout << "Enter the number: ";
    cin >> uah;
    cout << "Output number(usd): " << (uah/usd) << endl;
    cout << "Output number(eur): " << (uah/eur) << endl;
    return 0;
}