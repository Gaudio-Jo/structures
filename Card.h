
#include <iostream>
#include <string>
using namespace std;

class Card{
    public:
        
        Card(int inVal){
            value=inVal;
        }
        
        string suit;
        int value;
        void setSuit(int in);
        void setValue(int in);
        int getGameValue();
        string getSuit();
        string getValue();
        /*This is because it will print
        a "Jack, Queen, King, or Ace(Maybe?)"*/

};
