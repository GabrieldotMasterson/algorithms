// pair
// what is a pair?
// a pair is a pair of elements of any type, it means that it can hold two values of different or equals types.

#include <iostream>
#include <utility> // for use the pair
#include <string> 

using namespace std;

int main() {
    pair<int, string> card; // Declare a pair of int and string that will hold a card number and its suit
    card.first = 1; 
    card.second = "Hearts"; 

    // or you can use the make_pair function to create a pair
    // -- > pair<int, string> card = {1, "Hearts"}; 

    cout << "Card Number: " << card.first << ", Card Suit: " << card.second << endl; 

    return 0;
}