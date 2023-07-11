System Calls
A system call is a controlled entry point into the kernel, allowing a process to request that the kernel
perform some action on the process's behalf. The kernel makes a range of services accessible to programs
via the system call API. These services include;
        1. Creating a new process.
        2. Performing I/O.
        3. Creating a pipe for interprocess communication.

Note this;
        1. A system call changes the processor from user mode to kernel mode, so that
           it can access protected kernel memory.
        2. Each system call is identified by a unique number.
        3. Each system call may have a set of arguments that specify information to be
           transferred from user space to kernel space and vice versa.

The Library functions and system calls
While most C library functions don't make any use of system calls, there are others that are layered on top of system calls.
Examples;
        1. The fopen() makes use of the open() system call to actually open a file.
        2. The printf() also makes use of the write() system call to print to standard output.

I / O
All system calls for performing I/O refer to open files using a file descriptor, a nonnegative integer.
File descriptors are used to refer to all types of open files, including pipes, FIFOs, sockets, terminals, devices and regular files. Each process has its own set of file descriptors.
The following are the 3 standard file descriptors.
--------------------------------------------------
Fil-des   Purpose           POSIX name      stream
--------------------------------------------------
    0     standard input    STDIN_FILENO    stdin
    1     standard output   STDOUT_FILENO   stdout
    2     standard error    STDERR_FILENO   stderr
--------------------------------------------------

The above descriptors are opened on the program's behalf by the shell, before the program is started.
These three file descriptors normally refer to the terminal under which the shell is running. However,
if I/O redirections are specified on a command line, then the shell ensures that the file descriptors are suitably modified before starting the program.

System calls for performing I/O:
