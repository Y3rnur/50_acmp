#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int a1, a2, a3, b1, b2, b3, aexp, amed, ache, bexp, bmed, bche;
    cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;
    aexp = max({a1, a2, a3});
    ache = min({a1, a2, a3});
    amed = a1 + a2 + a3 - aexp - ache;
    bexp = max({b1, b2, b3});
    bche = min({b1, b2, b3});
    bmed = b1 + b2 + b3 - bexp - bche;
    cout << aexp * bexp + amed * bmed + ache * bche << endl;
    return 0;
}