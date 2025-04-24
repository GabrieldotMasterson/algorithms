// stack
// what is a stack?
// a stack is a data structure that follows the last in first out principle

#include <iostream>
#include <stack> // for use the stack
#include <string>

using namespace std;

int main() {
    stack<string> dirty_clothes; // Declare a stack of dirty_clothes
    dirty_clothes.push("T-shirt"); 
    dirty_clothes.push("Pants");
    cout << dirty_clothes.top() << endl;
    dirty_clothes.pop(); 
    cout << dirty_clothes.top() << endl;

}