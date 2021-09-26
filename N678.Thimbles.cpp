#include <iostream>
#include <string>
using namespace std;

int main(){
    string peremesh, naperst = "X**";
    char reserve;
    int n;
    cin >> peremesh;
    n = peremesh.size();
    for(int i = 0; i <= n; i++){
        if(peremesh[i] == 'A'){
            reserve = naperst[0];
            naperst[0] = naperst[1];
            naperst[1] = reserve;
        }
        if(peremesh[i] == 'B'){
            reserve = naperst[1];
            naperst[1] = naperst[2];
            naperst[2] = reserve;
        }
        if(peremesh[i] == 'C'){
            reserve = naperst[2];
            naperst[2] = naperst[0];
            naperst[0] = reserve;
        }
        if(i == n){
            if(naperst[0] == 'X'){
                cout << "1" << endl;
            }
            if(naperst[1] == 'X'){
                cout << "2" << endl;
            }
            if(naperst[2] == 'X'){
                cout << "3" << endl;
            }
        }
    }

}