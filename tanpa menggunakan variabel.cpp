#include <iostream>
using namespace std;

int main() {
    int x=10, y=15;
    //pertukaran tidak memakai variabel sementara
    cout << "Nilai awal x=" << x << ", Nilai awal y=" << y << endl;
    x = x+y;
    y = x-y;
    x = x-y;
    cout << "setelah ditukar x=" << x << " kemudian y=" << y << endl;

    return 0;
}
