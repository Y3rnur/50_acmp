#include <iostream>
using namespace std;

int main(){
    long long n, f, g;
    cin >> n;
    f = n / 10;
    g = f + 1;
    if(n == 5){
        cout << "25" << endl;
    }
    else if(n >= 400000){
        cout << "0" << endl;
    }
    else{
        cout << f * g * 100 + 25 << endl;
    }
}