#include <iostream>
using namespace std;
int main () {
    int x=10, y=15, temp;
    //pertukaran memakai variabel sementara
    cout << "Nilai awal x=" << x << ", Nilai awal y=" << y << endl;
    temp = x;
    x = y;
    y = temp ;
    cout << "setelah ditukar x=" << x << ", kemudian y=" << y << endl;

    return 0;
}
