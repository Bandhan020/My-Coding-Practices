//Functions that do not modify the head pointer:

 //the following function that adds x to data members of all nodes.

 void addXtoList(struct Node *node, int x)
{
    while(node != NULL)
    {
        node->data = node->data + x;
        node = node->next;
    }
}

//Functions that modify the head pointer
//Make head pointer global:

//// global head pointer
struct Node *head = NULL;

// function to delete first node: uses approach 2.1
// See http://ideone.com/ClfQB for complete program and output
void deleteFirst()
{
    if(head != NULL)
    {
       // store the old value of head pointer
       struct Node *temp = head;

       // Change head pointer to point to next node
       head = head->next;

       // delete memory allocated for the previous head node
       free(temp);
    }
}


