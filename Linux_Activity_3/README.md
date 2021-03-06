1. Implement producer consumer problem using Stack operations using semaphores

2. Implement producer consumer problem using circular buffer operations using semaphores
 
3. Repeat above two problem by replacing semaphores with mutex wherever possible

4. Implement a simple client-server scenario using message queues
   * Client process send a string over message queue
   * Server process toggles the string and send back to client.

5. Implement a simple client-server scenario using message queues
   * Client process send requested command over message queue
   * Server process receives requested command over message queue and executes in a child process using execl/execlp

6. Write a program to retrieve file attributes using message queue as follows
   * Client process sends requested file name to server over message queue
   * Server process retrieves file attributes using lstat and send back to client
   * Client will display the file attributes

7. Write a program to implement simple chat application between two processes using
   named pipes (FIFOs)

8. Implement producer consumer problem between two processes using shared memory and named semaphores (POSIX APIs)
