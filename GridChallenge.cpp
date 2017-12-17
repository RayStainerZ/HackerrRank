/* Kaustubh Sharma
Approach - A vector of strings is used for the 2-D array of the strings . At each time of the input of arr[i] (upto n , this will
           create the whole vector of string/2-D matrix) , we sort the arr[i]. At last we loop in the matrix to check if any previous 
           row element is greater than the current row element i.e if i+1 > i , then we return false and print NO , else use the flag
           as true and print YES.
           Time Complexity - O(T*N*N*log N)
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        vector<string> arr(n);
       
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sort(arr[i].begin(),arr[i].end());
        }
        
        bool flag = true;
        for(int i=0;i<n-1;i++){
            for(int j=0;j<n;j++){
                if(arr[i][j]>arr[i+1][j])
                    flag = false;
                 }
       }
       if(flag==true)
           cout<<"YES\n"; 
        else
            cout<<"NO\n";
      
    }
    return 0;
}
