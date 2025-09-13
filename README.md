***🚀 Queue implementation in C using arrays***

It demonstrates one of the fundamental Data Structures concepts where data is stored in a First In, First Out (FIFO) manner.


**⚡ How it Works**

-> Enqueue (Insert): Adds an element at the rear end of the queue.

-> Dequeue (Remove): Removes an element from the front end of the queue.

-> Display: Shows all the elements currently present in the queue.

-> Exit: Terminates the program.

Internally, the program uses an array and two variables (front and rear) to manage elements. It checks for overflow (when queue is full) and underflow (when queue is empty).


**🎯 Use / Purpose**

-> Helps students understand the working of queues in Data Structures.

-> Useful as a DSA lab program or practice exercise for learning array-based implementations.

-> Can be extended to implement circular queues, deques, or linked list-based queues.


**⚙️ How to Run**

 gcc queue.c 
 ./a.exe


**🖥 Sample Output**  

Enter the size of Queue: 3
1. Enqueue
2. Dequeue
3. Display
4. Exit
Enter choice: 1
Enter element: 10
Enqueued 10
