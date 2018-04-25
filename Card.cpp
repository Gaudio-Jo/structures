
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

void Card::setSuit(int in){
    if(in==0)
        suit="of Clovers";
    else if(in==1)
        suit="of Diamonds";//diamond
    else if(in==2)
        suit="of Hearts";//heart
    else
        suit="of Spades";//spade
}

void Card::setValue(int in){
    if(in>0||in<14)
        value=in;
}

/*this code returns the game value of a card*/
int Card::getGameValue(){
    int out;
    switch(value){
        case 11: //These values are of Jack
        case 12: //Queen
        case 13: //King
            out = 10;//in BJ these values are 10
            break;
        default:
            out = value;
    }
    return out;
}

string Card::getSuit(){
    return suit;
}

string Card::getValue(){
    string out;
    switch(value){
        case 1:
            out = "Ace";
            break;
        case 11:
            out = "Jack";
            break;
        case 12:
            out = "Queen";
            break;
        case 13:
            out = "King";
            break;
        default:
            out = to_string(value);
    }       
    return out+" "+suit;
}

int main(){
    Card c(1);
    return EXIT_SUCCESS;
}
