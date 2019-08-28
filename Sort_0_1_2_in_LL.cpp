/*This is a function problem.You only need to complete the function given below*/
/*
  Sort the list of 0's,1's and 2's
  The input list will have at least one element
  Node is defined as
  struct Node
  {
     int data;
     Node *next;
  }
*/
// This function is to segregate the elememtns in the linked list
// This will do the required arrangement by changing the links
Node* segregate(Node *head) {
    int z = 0,o = 0,t = 0;
    if(head == NULL){
        return NULL;
    }
    Node *temp = head;
    while(temp != NULL){
        if(temp->data == 1){
            o++;
        }
        else if(temp->data == 2){
            t++;
        }
        else if(temp->data == 0){
            z++;
        }
        temp = temp->next;
    }
    temp = head;
    while(temp != NULL && z--){
        temp->data = 0;
        temp = temp->next;
    }
    while(temp != NULL && o--){
        temp->data = 1;
        temp = temp->next;
    }
    while(temp != NULL && t--){
        temp->data = 2;
        temp = temp->next;
    }
    return head;
}
