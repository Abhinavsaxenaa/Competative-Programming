int length(struct Node* head){
    if(head == NULL){
        return 0;
    }
    return 1 + length(head->next);
}
int getNthFromLast(Node *head, int n)
{
    struct Node *temp = head;
    if(head != NULL)
    {
    int l = length(head);
    if(l < n){
        return -1;
    }
    int c = l-n;
    int ans = 0;
    while(c--){
        // cout<<c;
        temp = temp->next;
    }
    return temp->data;
    }
    return -1;
       // Your code here
}

