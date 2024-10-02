#include <iostream>
#include <vector>

using namespace std;

int main() {

    int n, a, b, c;
    int sum = 0;
    int sum1 = 0;
    int sum2 = 0;
    int sum3 = 0;
    vector<int> x, y, z;
    cin >> n;
    int length = n;

    while (n--) {
        cin >> a;
        cin >> b;
        cin >> c;

        x.push_back(a);
        y.push_back(b);
        z.push_back(c);

        sum = a + b + c + sum;
    }

    for (int i = 0; i < length; i++) {
        sum1 = sum1 + x[i];
        sum2 = sum2 + y[i];
        sum3 = sum3 + z[i];
    }
    

    if (sum == 0 && sum1 == 0 && sum2 == 0 && sum3 == 0) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}