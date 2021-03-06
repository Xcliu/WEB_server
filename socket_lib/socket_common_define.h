#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <sys/socket.h>
#include <sys/stat.h>
#include <sys/types.h>

// for mac os
#if __APPLE__
#include <sys/uio.h>
// for Linux system call
#elif __linux__
#include <sys/sendfile.h>
#endif

#include <arpa/inet.h>
#include <fcntl.h>
#include <netinet/in.h>
#include <unistd.h>
