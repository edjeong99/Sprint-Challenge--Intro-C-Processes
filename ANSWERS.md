//init
**1. List all of the main states a process may be in at any point in time on a standard Unix system. Briefly explain what each of these states means.**

1. Start
when a process is created

2 Ready
Process is waiting to be executed by OS allocating needed resources (ie CPU time)  


3 Running
Process is being executed 


4 Waiting
Process is not executed.
It waits for being executed when needed resource/input/etc are available

5 Terminated or Exit
Process completes its execution.  It might be terminated or wait to be removed from memory.


**2. What is a zombie process?**
Zombie process is a process the completed execution but still exist in process table.  Zombie process happens when a child process completed execution but parent process still needs child's process' exit status.  

**3. How does a zombie process get created? How does one get destroyed?**

it is created when a child process completed execution but parent has not gotten child's process' exit status.
Once parent read exit status, the child process is removed - finally dead.  if parent doens't read exit status, user can kill it by using inline command, using parent process id.


**4. What are some of the benefits of working in a compiled language versus a non-compiled language? More specifically, what benefits are there to be had from taking the extra time to compile our code?**

once compiled, it will run faster.  so if one need to use the software a lot, having a compiled program will be an advantage.
Also, one can compile the source code into different platform.  so one doesn't have to worry about programming it for different versions.