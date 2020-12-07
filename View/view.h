#include <iostream>
#include <string>

using namespace std;

class View {
  public:
    inline void printWinner(string recordItem) {
      cout << "-----" << endl;
      cout << "And the winner is: " << recordItem << endl;
      cout << "-----" << endl;
    }
};