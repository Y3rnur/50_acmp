#include <iostream>
using namespace std;

int main(){
    long long n, m, l, mini, maxi;
    cin >> n;
    m = n / 6;
    l = n % 6;
    if(n < 6){
        mini = 6 - (l - 1);
        maxi = n * 6;
    }
    if(n % 6 == 0 && n >= 6){
        mini = m * 1;
        maxi = n * 6;
    }
    if(n % 6 != 0 && n >= 6){
        mini = m * 1 + (6 - (l - 1));
        maxi = n * 6;
    }
    cout << mini << " " << maxi << endl;
}