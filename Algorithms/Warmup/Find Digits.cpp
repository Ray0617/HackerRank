#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int count;
    cin >> count;
    for (int i = 0; i < count; i++) {
        int num;
        cin >> num;
        int tmp = num;
        int digits = 0;
        while (tmp > 0) {
            int digit = tmp % 10;
            tmp /= 10;
            if (digit > 0 && num % digit == 0)
                digits++;
        }
        cout << digits << endl;
    }
    return 0;
}
