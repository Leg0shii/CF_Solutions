#include <iostream>
#include <math.h>

using namespace std;

int main() {

    double x, y, a, var1, var2, res;

    cin >> x;
    cin >> y;
    cin >> a;

    res = ceil(x/a) * ceil(y/a);
    cout << fixed << (long long int)res << endl;

    return 0;
}