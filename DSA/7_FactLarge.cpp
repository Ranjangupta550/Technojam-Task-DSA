
#include <iostream>
#include <vector>
using namespace std;


void multiply(vector<int>& result, int multiplier) {
    int carry = 0;
    for (int& digit : result) {
        int product = digit * multiplier + carry;
        digit = product % 10;
        carry = product / 10;
    }

    while (carry) {
        result.push_back(carry % 10);
        carry /= 10;
    }
}

void factorial(int n) {
    vector<int> result;
    result.push_back(1);

    for (int i = 2; i <= n; ++i) {
        multiply(result, i);
    }

    // Print the result in reverse order
    for (auto it = result.rbegin(); it != result.rend(); ++it) {
        cout << *it;
    }

    std::cout << std::endl;
}

int main() {
    // Example 1
    factorial(100);

    // Example 2
    factorial(50);

    return 0;
}
