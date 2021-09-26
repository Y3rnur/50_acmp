#include<iostream>
using namespace std;

int main(){
    int n, result;
    cin >> n;
    if(n == 1){
        cout << "0" << endl;
    }
    else{
        if(n % 2 == 0){
            result = n / 2;
        }
        if(n % 2 == 1){
            result = n;
        }
        cout << result << endl;
    }
}