/*This is a function problem.You only need to complete the function given below*/

/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/
/*You are required to complete this method */

bool isPalindrome(Node *head)
{
    stack<int> s;
    Node *temp = head;
    while(temp != NULL){
        s.push(temp->data);
        temp=temp->next;
    }
    temp = head;
    int a = 0;
    while(!s.empty()){
        a = s.top();
        s.pop();
        if(temp->data != a){
            return false;
        }
        temp = temp->next;
    }
    return true;
}

