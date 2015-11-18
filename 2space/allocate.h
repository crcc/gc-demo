
#define MANUAL_DEALLOCATE 0
#define PUSH_STACK_POINTER(var) root_addrs[num_roots++] = &var
#define POP_STACK_POINTER()     --num_roots

extern struct node **root_addrs[];
extern int num_roots;

struct node *allocate();
