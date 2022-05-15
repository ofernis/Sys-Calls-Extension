#ifndef test_hw2_H_
#define test_hw2_H_

#include <sys/types.h>
#include <unistd.h>
#include <sys/syscall.h>

// System call wrappers
int set_status(int status);
int get_status();
int register_process();
long get_all_cs();

#endif // test_hw2_H_