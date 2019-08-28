/*This is a function problem.You only need to complete the function given below*/
 
/* Link list Node
struct Node {
  int data;
  struct Node *next;
  
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/
// Function to merge the two sorted linked lists
// head1, head2: head of the two sorted linked lists
Node* sortedMerge(Node* head1,   Node* head2)
{
    Node *ft = NULL;
    Node *fh = NULL;
    if(head1 != NULL && head2 != NULL){
        if(head1->data > head2->data){
            fh = head2;
            head2 = head2->next;
        }
        else{
            fh = head1;
            head1 = head1->next;
        }
    }
    ft = fh;
    while(head1 != NULL && head2 != NULL){
        if(head1->data > head2->data){
            ft->next = head2;
            head2 = head2->next;
            ft = ft->next;
        }
        else{
            ft->next = head1;
            head1 = head1->next;
            ft = ft->next;
        }
    }
    while(head1 != NULL){
        ft->next = head1;
        head1 = head1->next;
        ft = ft->next;
    }
    while(head2 != NULL){
        ft->next = head2;
        head2 = head2->next;
        ft = ft->next;
    }
    return fh;
}

