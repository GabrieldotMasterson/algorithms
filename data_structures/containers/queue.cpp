// queue 
// what is a queue?
// A queue is a linear data structure that follows the First In First Out principle.

#include <iostream> 
#include <queue> // for use the queue

using namespace std;

int main(){
	queue <int> peoples; // Declare a queue of integers that will hold the peoples in the queue
    peoples.push(1); // Add the first person to the queue --> the first one to leave too
	return 0;
}
