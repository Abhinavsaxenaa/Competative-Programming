/*This is a function problem.You only need to complete the function given below*/
/*
The structure of the node of the stack is
struct StackNode
{
    int data;
    StackNode *next;
    StackNode(int a)
    {
        data = a;
        next = NULL;
    }
};
// And this is structure of MyStack
class MyStack {
private:
StackNode *top;
public :
    void push(int);
    int pop();
    MyStack()
    {
        top = NULL;
    }
};
/* The method push to push element
   into the stack */
void MyStack ::push(int x) {
    // Your Code
    StackNode *newnode = new StackNode(x);
    if(top == NULL){
        top = newnode;
    }
    else{
        newnode->next = top;
        top = newnode;
    }
}
/* The method pop which return the element
  poped out of the stack*/
int MyStack ::pop() {
    // Your Code
    if(top == NULL){
        return -1;
    }
    StackNode *temp = top;
    top = top->next;
    int ans = temp->data;
    delete temp;
    return ans;
}

