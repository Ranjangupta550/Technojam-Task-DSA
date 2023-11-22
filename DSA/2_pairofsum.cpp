
#include <iostream>
#include <unordered_set>
using namespace std;

int countPairs(int arr[], int size, int K) {
    int countPairs = 0;
    int totalSum = 0;

   
    for (int i = 0; i < size; ++i) {
        totalSum += arr[i];
    }

  
    unordered_set<int> elements;

    for (int i = 0; i < size; ++i) {
        int complement = totalSum - arr[i] - K;

     
        if (elements.find(complement) != elements.end()) {
            countPairs += 1;
        }

        
        elements.insert(arr[i]);
    }

    return countPairs;
}

int main() {

    int arr[] = {1, 5, 7, -1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int K = 6;

    int countPairsResult = countPairs(arr, size, K);
    cout << "Number of pairs: " << countPairsResult << std::endl;

    return 0;
}
