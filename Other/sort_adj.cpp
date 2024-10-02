#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {

    int count, index, var, dist, length;
    vector<int> v;
    vector<vector<int> > vec;

    cin >> count;

    for (int i = 0; i < count; i++) {
        cin >> index;
        for (int j = 0; j < index; j++) {
            cin >> var;
            v.push_back(var);
        }
        sort(v.begin(),v.end());
        vec.push_back(v); 
        v.clear();    
    }

    //cout << "Numb: " << vec[1][3] << endl;

    /* for (int h = 0; h < vec.size(); h++)
    {
        for (int k = 0; k < vec[h].size(); k++)
        {
            cout << vec[h][k] << " ";
        }
        cout << endl;       
    } */
    

    for (int a = 0; a < vec.size(); a++) {
        vector<int> sum;
        length = vec[a].size();
        for (int b = 0; b < length-1; b++) {
            sum.push_back(abs(vec[a][b] - vec[a][b+1])); 
            //cout << vec[a][b] << " - " << vec[a][b+1] << endl;
        } 
        //cout << "a: " << a << endl;
        //cout << "length: " << length << endl;
        for (int c = 0; c < (length/2); c++) {
            std::vector<int>::iterator result = std::min_element(sum.begin(), sum.end());
            dist = std::distance(sum.begin(), result);
            cout << vec[a][dist] << " " << vec[a][dist+1] << " ";
            // cout << "Sum: " << sum[c] << endl;
            // cout << "Distance: " << dist << endl;
            // cout << "Size von Vec2: " << vec[1].size() << endl;
            // cout << "Erste Elems: " << vec[1][0] << " " << vec[1][1] << endl;
            //cout << "Number: " << vec[0][1] << endl;
            if (dist == 0) {
                sum.erase(sum.begin()+dist);
            }
            else {
                sum.erase(sum.begin()+dist-1);
            }
            sum.clear();
            vec[a].erase(vec[a].begin()+(dist));
            vec[a].erase(vec[a].begin()+(dist));
            int length2 = vec[a].size();
            //cout << "Length2: " << length2 << endl;
            for (int b = 0; b < length2-1; b++) {
                sum.push_back(abs(vec[a][b] - vec[a][b+1])); 
                //cout << vec[a][b] << " - " << vec[a][b+1] << endl;
            } 
        }  
        dist = 0;
        if (length%2 != 0) {
            cout << vec[0][0];
        }
        cout << endl;
    }
    return 0;
}