#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, sum = 0;
    cin >> n;
    vector<int> chay(n);
    for(int i = 0; i < n; i++){
        cin >> chay[i];
        sum += chay[i];
    }
    cout << sum - (n - 1) << endl;
    return 0;
}