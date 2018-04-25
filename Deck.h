
#include <iostream>
#include <string>
#include <stack>
#include <queue>
#include "Card.h"
using namespace std;

class Deck{
    private:
        stack<Card> deck;
        queue<Card> q1;
        queue<Card> q2;
    public:
        Deck(){
            for(int i=0;i<4;i++){
                for(int j=1;i<14;j++){
                    Card c(j);
                    c.setSuit(i);
                    deck.push(c);
                }
            }
        }
        void shuffle();
        void doNothing();
};
