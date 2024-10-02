#include <iostream>
#include <vector>

using namespace std;

int main() {

    int count, timeSum, tMin, tMax, sum, testSum, diff;
    vector<int> min;
    vector<int> max;
    vector<int> result;

    cin >> count;
    cin >> timeSum;
    testSum = 0;

    for (int i = 0; i < count; i++) {
        cin >> tMin;
        cin >> tMax;
        min.push_back(tMin);
        max.push_back(tMax);
    }  

    sum = 0;

    for (int i = 0; i < count; i++) {
        sum = max[i] + sum;
    }

    for (int i = 0; i < count; i++) {
            testSum = testSum + min[i];
            result.push_back(min[i]);            
    }

    if (testSum > timeSum) {
        cout << "NO" << endl;
        sum = -1;
    }

    if (sum >= timeSum) {
        cout << "YES" << endl;

        diff = timeSum - testSum;

        for (int i = 0; i < count; i++) {
            tMin = min[i];
            tMax = max[i];
            for (int j = 0; j < (tMax-tMin) && (timeSum - testSum != 0); j++) {
                result.at(i) = result.at(i) + 1;
                testSum++;
            }        

            diff = timeSum - testSum;
            if (diff == 0) {
                for (int k = 0; k < count; k++) {
                    cout << result[k] << " ";
                }
                cout << endl;
                break;
            }          
        }       
        
    }
    else if (sum != -1) {
        cout << "NO" << endl;
    }
    
    return 0;
}