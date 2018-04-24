
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
                    Card c=new Card(i,j);
                    deck.push(c);
                }
            }
        }
        void shuffle();
        void deal();
};


void Deck::shuffle(){
    int dummy=deck.size()/2;
    int repeat=1;
    for(int i = 0;i<repeat;i++){
        for(int i = 0;i<dummy;i++){
            q1.push(deck.top());
            deck.pop();
        }
        for(int i = 0;i<dummy;i++){
            q2.push(deck.top());
            deck.pop();
        }
        for(int i = 0;i<dummy;i++){
            deck.push(q2.front());
            q2.pop();
            deck.push(q1.front());
            q1.pop();
        }
    }    
}

int main(){
    
    
    return EXIT_SUCCESS;
}
