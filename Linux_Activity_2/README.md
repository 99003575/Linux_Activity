## System Calls and Signals
1. Write a program to copy one file contents to other using open,read,write,close system calls (like cp command, which takes source, destination files as cmd line args). 

2. Write a program to count no.of lines, words, characters in given file (like wc command)

3. Write a program to send specific signal to a target process (with given id, like kill command)

## Processes
1. Design a mini shell(5 - 10 commands) of your own as follows
   * take command name as input from user (string format)
   * launch the command in the child process using execl/execlp
   * parent will wait for completion of child and print exit status

2. Write a program to compile & link any c/c++ program within child process by launching gcc using execl/execlp.

3. Write a program to build multifile program using fork & exec as follows
   * There are multiple source files holding some functions
   * Create multiple child processes to compile each source file (execl/execlp)
   * On successful completion, launch another child process for linking
   * On successful linking, launch another child process for executing

## Threads
1. Write a program to compute parallel sum of large array using threads. 
   * For e.g. if there are 1000 elements in array, you may create 10 threads where each thread will compute some of 100 elements each, on completion of threads main thread will consolidate final total

2. Write a program to find min/max element from large array(1000 data points) using parallel computations (multthreading)

3. Write a program to print current time periodically (Hint:- alarm, time, ctime)
