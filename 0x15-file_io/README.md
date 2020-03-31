File descriptors are an index into a file descriptor table stored by the kernel.
Read from stdin => read from fd 0 : Whenever we write any character from keyboard, it read from stdin through fd 0 and save to file named /dev/tty.
Write to stdout => write to fd 1 : Whenever we see any output to the video screen, it’s from the file named /dev/tty and written to stdout in screen through fd 1.
Write to stderr => write to fd 2 : We see any error to the video screen, it is also from that file write to stderr in screen through fd 2.

I/O System calls

