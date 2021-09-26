#include <iostream>
using namespace std;

int main(){
    int k, n, k1 = 0, n1;
    cin >> k >> n;
    for(int i = 0; i < n; i = i + k){
        k1++;    
    }
    n1 = n - (k1 - 1) * k;
    cout << k1 << " " << n1 << endl;
    return 0; 
}