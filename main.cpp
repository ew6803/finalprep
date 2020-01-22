#include "list.h"
using namespace std;

int main()
{
    node * head = NULL;
    build(head);
    node * current = NULL;
    current = head -> next; 
    display_all(head);
    //PLEASE PUT YOUR CODE HERE to call the function assigned
    deleteHead(head);
    display_all(head);
    
    return 0;
}
