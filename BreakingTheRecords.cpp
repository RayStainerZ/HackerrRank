/* Kaustubh Sharma
Approach - Normal Implementation 
*/
#include <bits/stdc++.h>

using namespace std;

vector < int > getRecord(vector < int > v){
    vector<int>result(2);
    result[1]=result[0]=0;
    int max,min;
    max=min=v[0];
    
    for(int i=1;i<v.size();i++){
        if(v[i]>max){
            max=v[i];
            result[0]++;
        }
        if(v[i]<min){
            min=v[i];
            result[1]++;
        }
    }
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> s(n);
    for(int s_i = 0; s_i < n; s_i++){
       cin >> s[s_i];
    }
    vector < int > result = getRecord(s);
    string separator = "", delimiter = " ";
    for(auto val: result) {
        cout<<separator<<val;
        separator = delimiter;
    }
    cout<<endl;
    return 0;
}
