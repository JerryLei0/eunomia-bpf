#ifndef _BPF_WASM_EVENT_H_
#define _BPF_WASM_EVENT_H_
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include <assert.h>

struct event {
    int pid;
    int ppid;
    unsigned int exit_code;
    char __pad0[4];
    unsigned long long duration_ns;
    char comm[16];
    char filename[127];
    char exit_event;
} __attribute__((packed));
static_assert(sizeof(struct event) == 168, "Size of event is not 168");


#endif /* __VMLINUX_H__ */
