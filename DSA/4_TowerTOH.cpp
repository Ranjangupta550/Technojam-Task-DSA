#include <iostream>

using namespace std;

void towerOfHanoi(int n, int source, int dest, int aux) {
  if (n == 1) {
    cout << "Move disk 1 from source " << source << " to dest " << dest << endl;
    return;
  }

  towerOfHanoi(n - 1, source, aux, dest);
  cout << "Move disk " << n << " from source " << source << " to dest " << dest << endl;
  towerOfHanoi(n - 1, aux, dest, source);
}

int main() {
  int n;
  cout << "Enter the number of disks: ";
  cin >> n;

  towerOfHanoi(n, 1, 3, 2);

  return 0;
}

