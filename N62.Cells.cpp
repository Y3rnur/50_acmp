#include <iostream>
#include <string>
using namespace std;

int main(){
    int a, c;
    char b, d;
    string coord;
    cin >> coord;
    b = coord[1];
    d = coord[0];
    a = b - '0';
    c = d - 'A';
    if((a + c) % 2 == 0){
        cout << "WHITE" << endl;
    }
    else{
        cout << "BLACK" << endl;
    }
}