#include "hw2_test.h"

int set_status(int status) {
    long r = syscall(334, status);
    return r;
}

int get_status() {
    long r = syscall(335);
    return r;
}

int register_process() {
	long r = syscall(336);
    return r;
}

long get_all_cs() {
	long r = syscall(337);
    return r;
}