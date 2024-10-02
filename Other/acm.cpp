#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    vector<int> v, s;
    int var, sum;

    for (int i = 0; i < 6; i++) {
        cin >> var;
        v.push_back(var);
    }
    sort(v.begin(),v.end());
    sum = v[0] + v[1] + v[2] + v[3] + v[4] + v[5];

    for (int i1 = 0; i1 < 6; i1++) {
        for (int i2 = i1; i2 < 6; i2++) {
            for (int i3 = i2; i3 < 6; i3++) {
                if (i1 != i2 && i2 != i3) {
                    s.push_back(v[i1] + v[i2] + v[i3]);
                    //cout << i1 << i2 << i3 << endl;
                }
            }          
        }       
    }

    sort(s.begin(), s.end());

    if (((sum/2) > v[5] && (sum%2 == 0)) || ((sum/2) == v[5] && v[3] == 0)) {
        int k = (s.size()-1);
        for (int j = 0; j < ((s.size()-1)); j++) {
            //cout << j << " " << s[j] << " " << s[j+1] << endl;
            if (s[j] == s[k
            ]) {
                cout << "YES" << endl;
                //cout << s[j] << " " << s[j+1] << endl;
                break;
            }   
            else if (j == s.size()-2) {
                cout << "NO" << endl;
                break;
            }
            k--;
        } 
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}