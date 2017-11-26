/* Kaustubh Sharma
   Algorithm - Disjoint set union
*/
#include <bits/stdc++.h>

using namespace std;

const int MAX=1e5+6;
int Arr[MAX];
int size[MAX];

void initialize()
{
    for(long long i = 0;i<MAX;i++)
    {
    Arr[ i ] = i ;
    size[ i ] = 1;
    }
}

long long root (long long i)
{
    while(Arr[ i ] != i)
    {
        Arr[ i ] = Arr[ Arr[ i ] ] ; 
        i = Arr[ i ]; 
    }
return i;
}

void weightedunion(int A,int B)
{
    long long root_A = root(A);
    long long root_B = root(B);
    
    if(root_A != root_B){
        Arr[root_B]=root_A;
        size[root_A]=size[root_A]+size[root_B];
        size[root_B]=0;
    }
}

int main(){
    long long n,m;
    cin>>n>>m;
    long sum=0;
    initialize();
    for (long long i = 0; i < m; ++i)
    {
        long long a,b;
        cin>>a>>b;
        weightedunion(a,b);
    }
    long long ans = 0;
    for(long long i = 0; i < n; i++) {
        if(size[i] != 0) {
        ans += sum*size[i];
        sum += size[i];
        }
    }
    cout<<ans;
    return 0;
}
