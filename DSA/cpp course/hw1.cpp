#include <iostream>
using namespace std;

int main() {
  int N;

  cout << "Enter the number: ";
  cin >> N;

  if (  N % 2 == 0)
    cout << N << "even";
  else
    cout << N << "odd";

  return 0;
}

