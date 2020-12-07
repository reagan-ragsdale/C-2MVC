#include "../Model/model.h"
#include "../View/view.h"

#define Print(x) view.printWinner(x);

class Controller {
  private:
   Model model;
   View view;

  public:

    string sithModel() {
      return model.sithName();
    }
    string jediModel(){
      return model.jediName();
    }

    

   

    inline void updateView(string jedi) {
      Print(jedi)
      
      
      
    }

};