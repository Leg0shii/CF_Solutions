#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

unsigned long long solve() {
    unsigned long long sum = 0;
    unsigned long long diff = 0;
    unsigned long long a, b, x, y;

    cin >> x;
    cin >> y;
    cin >> a;
    cin >> b;
   
   if (a+a <= b) {
       sum = (x+y)*a;
   }
   else {
       if (x >= y) {
           sum = sum + y*b + (x-y)*a;
       }
       else {
           sum = sum + x*b + (y-x)*a;
       }
   } 
  
    return sum;

}

int main() {

    int n, r1, r2;
    cin >> n;
    r1 = 0;
    r2 = n;
    vector<unsigned long long> sum;

    while(n--) {
        sum.push_back(solve());
    }

    while(r1 != r2) {
        cout << sum[r1] << endl;
        r1++;
    }

    return 0;
}