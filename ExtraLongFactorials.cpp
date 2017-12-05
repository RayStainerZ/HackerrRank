/* Kaustubh Sharma
    **Extra Long Factorials**
    Approach - * The basic approach is to store each potition of the factorials result in and result array.
               * Hence we declre a array result[500] and we also take a varibale result_size to kee the check
                 on the size of the array at each multilication.
               * we declare result[0] and result_size = 1.
               * now our aim is to multiply each digit one by one and the append the carry value in a temporary
                 variable say 'carry' (initialized as 0) and then add the carry to the product of next number in 
                 the iteration series (such as if we have to find factorial of 3 , then number first is 1 , then 2 and then 3.)
               * Like this we'll kee on incrementing the position in array 'result'. The array 'result' will store our 
                 answer in reverse order. Hence at last we print our answer in reverse order.
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define MAX 500
using namespace std;

int result[MAX];
int result_size;

void multiply(int x) {

    int carry=0;

    for (int i = 0; i < result_size; ++i)
    {
        int product = result[i]*x + carry;

        result[i] = product % 10;
        carry = product / 10;
    }
    while(carry){

        result[result_size] = carry % 10;
        carry /= 10 ;
        result_size++;
    }    
}

int main() {
    int n;
    cin>>n;
    
    result[0]=1;
    result_size=1;
    
    //now multiply digit one by one.
    for (int i = 2; i <= n; ++i)
    {
        multiply(i);
    }
    //Print the result array in backward manner
    for (int i = result_size - 1; i >= 0  ; --i)
    {
        cout<<result[i];
    }
    cout<<endl;

    return 0;
}
