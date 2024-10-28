#include <iostream>
#include <queue>

int main() {
    // Declare a priority_queue of integers
    std::priority_queue<int> pq;

    // Insert elements into the priority queue
    pq.push(30);
    pq.push(10);
    pq.push(20);
    pq.push(40);
    pq.push(50);

    // Display elements in priority order (default is descending order)
    std::cout << "Elements in priority queue (highest priority first):" << std::endl;
    while (!pq.empty()) {
        std::cout << pq.top() << " "; // Show the element with the highest priority
        pq.pop();                     // Remove the top element
    }
    std::cout << std::endl;

    return 0;
}
