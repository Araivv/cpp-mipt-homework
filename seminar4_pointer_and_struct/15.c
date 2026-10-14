#include <stdio.h>

struct node
{
    int value;
    struct node* ptr;
};
typedef struct node Node;

int main()
{
    Node a = {100, NULL};
    Node b = {200, NULL};
    Node c = {300, NULL};
    a.ptr = &b;
    b.ptr = &c;
    c.ptr = &a;

    Node* p = &a;
    while (1)
    {
        printf("%i\n", p->value);
        p = p->ptr;
    }
}
