#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main() {

    vector<int> arr;
    arr.push_back(1);
    arr.push_back(-2);
    arr.push_back(-7);
    arr.push_back(9);
    arr.push_back(1);
    arr.push_back(-8);
    arr.push_back(-5);

    double r1, r2, r3 = 0;
    int n = arr.size();

    while(n--){
        if (arr[n] > 0) {
            r1++;
        } else if (arr[n] < 0) {
            r2++;
        } else {
            r3++;
        }
    }
    
    cout << std::setprecision(7);
    if(r1 == 0) {
        cout << 0.000000 << endl;
    } else {
        cout << r1/arr.size() << endl;
    }
    if(r2 == 0) {
        cout << 0.000000 << endl;
    } else {
        cout << r2/arr.size() << endl;
    }
    if(r3 == 0) {
        cout << "0.000000" << endl;
    } else {
        cout << r3/arr.size() << endl;
    }


    return 0;
}