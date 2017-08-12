#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::cerr;
using std::endl;
using std::vector;

int main() {
  vector<unsigned> scores(11, 0);
  unsigned grade;
  while (cin >> grade) {
    if (grade <= 100)
      ++*(scores.begin() + grade / 10);
  }
  for (auto it = scores.cbegin(); it != scores.cend(); ++it)
    cout << *it << " ";
  cout << endl;
  return 0;
}
