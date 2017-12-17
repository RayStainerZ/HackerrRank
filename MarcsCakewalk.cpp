/* Kaustubh Sharma 
   Time Complexity - O(nlogn) 
*/
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> calories(n);
    for(int calories_i = 0; calories_i < n; calories_i++){
       cin >> calories[calories_i];
    }
    sort(calories.begin(),calories.end());
    reverse(calories.begin(),calories.end());
    long int sum = 0;
    for(int i=0 ; i<n ; i++){
        sum+=(pow(2,i)*calories[i]);
    }
    cout<<sum;
    return 0;
}
