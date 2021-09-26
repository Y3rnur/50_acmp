#include <iostream>
using namespace std;
 
int main(){
    char a;
    bool known = false;
    while(cin >> a){
        if(a == '0'){
            known = true;
        }
    }
    if(known == false){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}