#include <iostream>
#include <cmath>


using namespace std;

//Calculate the # of trailing zeros of n factorial
//Number of times n can be divided by 5^x for 5^x < n
int main() {
    int n = 4617;
    int count = 0;
    for (int i=5; n/i >= 1; i*=5) {
        count += floor(n/i);
    }
    cout << count;
    return 0;
}