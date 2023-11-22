
#include <iostream>
#include <vector>

using namespace std;

int findMissingNumber(const vector<int>& arr, int N) {
   
    int totalSum = (N * (N + 1)) / 2;

  
    int arraySum = 0;
    for (int num : arr) {
        arraySum += num;
    }

   
    int missingNumber = totalSum - arraySum;

    return missingNumber;
}

int main() {
    // Example
    vector<int> arr = {1, 2, 4, 6, 3, 7, 8};
    int N = arr.size() + 1;
    cout << "Missing number: " << findMissingNumber(arr, N) << endl;

    return 0;
}
