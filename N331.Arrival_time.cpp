#include <iostream>
#include <string>
using namespace std;

int main(){
    string data, hou, minu;
    int h, m, exm, forma;
    cin >> data >> h >> m;
    
    m = (data[3] - '0') * 10 + (data[4] - '0')+ m;
    h = (data[0] - '0') * 10 + (data[1] - '0')+ h;
    exm = m / 60;
    m = m % 60;
    h = (h + exm) % 24;
    hou = to_string(h);
    minu = to_string(m);
    forma = hou.size();
    if(forma < 2){
        hou = "0" + hou;
    }
    forma = minu.size();
    if(forma < 2){
        minu = "0" + minu;
    }
    data = hou + ":" + minu;
    cout << data << endl;
    return 0;
}








/* if(h < 10 && m < 10){
        data = ("0" + to_string(h)) + ":" + "0" + to_string(m);
    }
    if(h < 10 && m >= 10){
        data = "0" + to_string(h) + ":" + to_string(m); 
    }
    if(h >= 10 && m < 10){
        data = to_string(h) + ":" + "0" + to_string(m);    
    }
    else{
        data = to_string(h) + ":" + to_string(m);
    }
*/