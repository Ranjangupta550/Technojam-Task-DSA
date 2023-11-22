
#include <iostream>
#include <vector>

using namespace std;

void findComb(vector<int>& arr, int t, vector<int>& current, int index) {
    
    if (t == 0) {
        cout << "[";
        for (int i = 0; i < current.size(); ++i) {
            cout << current[i];
            if (i < current.size() - 1) {
                cout << ", ";
            }
        }
        cout << "]" << endl;
        return;
    }

   
    for (int i = index; i < arr.size(); ++i) {
      
        if (arr[i] > t) {
            continue;
        }

        
        current.push_back(arr[i]);


        findComb(arr, t - arr[i], current, i);

        
        current.pop_back();
    }
}

void printCombinations(vector<int>& arr, int target) {
    vector<int> current;
    findComb(arr, target, current, 0);

    if (current.empty()) {
        cout << "Empty" << endl;
    }
}

int main() {
    
    vector<int> arr = {2, 4, 6, 8};
    int target = 8;
    
    cout << "Output: " << endl;
    printCombinations(arr, target);

    return 0;
}
