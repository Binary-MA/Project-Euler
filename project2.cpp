//Even Fibonacci Numbers
#include <iostream>
using namespace std;

int main() {
    int a = 1, b = 2, sum = 0, c;

    while (b <= 4000000) {  
        if (b % 2 == 0) {  
            sum += b;  
        }
        c = a + b;  
        a = b;  
        b = c;  
    }

    cout << "Sum of even-valued Fibonacci terms: " << sum << endl;
    return 0;
}


