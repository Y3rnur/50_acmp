#include <iostream>
using namespace std;

int main(){
    int a, b, c, res;
    cin >> a >> b >> c;
    res = (max(a, b) + max(a, c) + max(c, b) - min(a, b) - min(a, c) - min(c, b)) / 2;
    cout << res << endl;
}