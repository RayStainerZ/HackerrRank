/* Kaustubh Sharma
Approach - Greedy Appraoch , Sort the array and then interate from begining to end of the array having the absolute difference 
           and updating the minimum absolute difference at each iteration .
           Time Complexity = O(nlogn)
*/
#include <bits/stdc++.h>

using namespace std;

int minimumAbsoluteDifference(int n, vector <int> arr) {
    sort(arr.begin(),arr.end());
    int min=INT_MAX;
    for(int i=0; i<n-1; i++){
            
        int d = abs(arr[i]-arr[i+1]);
        if(d<min){
            min = d;
        }
    }
    return min;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    int result = minimumAbsoluteDifference(n, arr);
    cout << result << endl;
    return 0;
}
