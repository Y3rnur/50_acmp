#include <iostream>
using namespace std;

//Program should write how many "1" are in the given number in binary type// 

int main(){
    int a;
    cin >> a;
    int units = 0;
    while(a > 1){
        if(a % 2 != 0){
            units++;
        }
        a = a / 2;
    }
    cout << units + 1 << endl;
    return 0;
}