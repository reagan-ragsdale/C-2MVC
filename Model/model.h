#include <string>
#include "../FOrceBeing/Jedi.h"
#include "../FOrceBeing/Sith.h"

using namespace std;

class Model {
  private:
    Sith darthVader = Sith("Darth Vader", 100);
    Jedi lukeSkywalker = Jedi("Luke Skywalker", 99);
  public:
    string sithName() {
      return darthVader.getName();
    }
    string jediName() {
      return lukeSkywalker.getName();
    }

    string getWinner(ForceBeing player1, ForceBeing player2) {
        return player1.getPowerLevel() > player2.getPowerLevel() ? player1.getName() : player2.getName();
    }

};