#include <iostream>
#include <vector>

using namespace std;

int main() {

    int index, var, res1, res2;
    cin >> index;
    vector<int> v;

    for (int i1 = 0; i1 < index; i1++) {
        cin >> var;
        v.push_back(var);
    }

    for (int i2 = 0; i2 < index; i2++) {
        if ((v[i2]/2)%2 != 0) {
            cout << "NO" << endl;
        }
        else if (v[i2] == 2) {
            cout << "NO" << endl;
        }
        else {
            cout << "YES" << endl;
            res1 = 0;
            res2 = 0;
            for (int i3 = 1; i3 < (v[i2]/2)+1; i3++) {
                cout << (i3 * 2) << " ";
                res1 = res1 + (i3 * 2);
            }
            for (int i4 = 1; i4 < (v[i2]/2); i4++) {
                cout << ((i4 * 2)+1)-2 << " ";
                res2 = res2 + (((i4 * 2) +1) -2);
            }

            cout << (res1 - res2) << endl;     
        }
    }

    return 0;
}