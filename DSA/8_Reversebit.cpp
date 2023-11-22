
#include <iostream>
using namespace std;

unsigned int reverseBits(unsigned int num) {
    unsigned int reversedNum = 0;

    while (num > 0) {
        reversedNum = (reversedNum << 1) | (num & 1);
        num = num >> 1;
    }

    return reversedNum;
}

int main() {
    // Example 1
    unsigned int num1 = 11;
    unsigned int reversedNum1 = reverseBits(num1);
    cout << "Input: " << num1 << " Output: " << reversedNum1 << endl;

    // Example 2
    unsigned int num2 = 10;
    unsigned int reversedNum2 = reverseBits(num2);
    cout << "Input: " << num2 << " Output: " << reversedNum2 << endl;

    return 0;
}
