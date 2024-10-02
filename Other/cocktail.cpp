#include <iostream>
#include <vector>

using namespace std;

int main() {   

    double sum, count, var;
    vector<int> v;

    cin >> count;

    for (int i = 0; i < count; i++) {
        cin >> var;
        sum = sum + var;       
    }

    cout << (sum/count) << endl;

    return 0;
}