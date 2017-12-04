/* Kaustubh Sharma
Approach - 1. Finding the LCM of all elements in array A using formula :
                                                                        ans = arr[0]
                                                                        for i=1 to n-1
                                                                        lcm = ans = ans*arr[i]/GCD(arr[i],ans)
           2. Finding the GCD of all elements in array B using STL function __gcd : 
                                                                                    ans = brr[0]
                                                                                    for i=1 to m-1
                                                                                    GCD = __gcd(brr[i],ans)
           3. Now counting the number of multiples of LCM of array A which evenly divides GCD of array B.
           
           4. Time Complexity = O(nlog(n)). 
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,m;
    cin>>n>>m;
    int arr[n],brr[m];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<m;i++)
        cin>>brr[i];
    
    int count=0;
    
    //finding the LCM of array A.
    int lcm=arr[0];
    for (int i = 1; i < n ; ++i)
    {
        lcm = (lcm*arr[i])/__gcd(arr[i],lcm);
    }
    
    //finding the GCD of array B.
    int gcd=brr[0];
    for (int i = 1; i < m ; ++i)
    {
        gcd=__gcd(brr[i],gcd);
    }
    
    //finding the multiple of LCM of array A that evenly divides GCD of array B.
    int multiple_of_lcm = lcm;
    while(multiple_of_lcm<=gcd){
        if(gcd%multiple_of_lcm==0)
            count++;
        multiple_of_lcm+=lcm;
    }
    
    cout<<count;
    
    return 0;
}
