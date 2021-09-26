#include <iostream>
using namespace std;

int main(){
    int a, b, mini, maxi;
    cin >> a >> b;
    if(a < b){
        maxi = a;
        mini = a / 2;
        mini = mini + (a % 2);
    }
    if(a > b){
        maxi = b;
        mini = b / 2;
        mini = mini + (b % 2);
    }
    if(a == b){
        maxi = a;
        mini = a / 2;
    }
    cout << mini << " " << maxi << endl;
}