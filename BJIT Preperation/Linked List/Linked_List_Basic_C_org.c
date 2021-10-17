#include <stdio.h>

typedef struct node {
    int val;
    struct node * next;
} node_t;


int main()
{
    node_t * head = NULL;
    head = (node_t *) malloc(sizeof(node_t));
    if (head == NULL) {
    return 1;
    }

    head->val = 1;
    head->next = NULL;


    //To add a variable to the end of the list, we can just continue advancing to the next pointer:
    /*node_t * head = NULL;
    head = (node_t *) malloc(sizeof(node_t));
    head->val = 1;
    head->next = (node_t *) malloc(sizeof(node_t));
    head->next->val = 2;
    head->next->next = NULL;
*/



    return 0;
}
