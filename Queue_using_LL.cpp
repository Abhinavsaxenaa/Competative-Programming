/*This is a function problem.You only need to complete the function given below*/
/* Structure of a node in Queue
struct QueueNode
{
    int data;
    QueueNode *next;
    QueueNode(int a)
    {
        data = a;
        next = NULL;
    }
};
And structure of MyQueue
struct MyQueue {
    QueueNode *front;
    QueueNode *rear;
    void push(int);
    int pop();
    MyQueue() {front = rear = NULL;}
}; */
/* The method push to push element into the queue*/
void MyQueue:: push(int x)
{
        QueueNode *qn = new QueueNode(x);
        if(front == NULL){
            rear = qn;
            front = qn;
        }
        else{
            rear->next = qn;
            rear = rear->next;
        }
}
/*The method pop which return the element
  poped out of the queue*/
int MyQueue :: pop()
{
        if(front == NULL){
            return -1;
        }
        int ans = front->data;
        QueueNode *temp = front;
        front = front->next;
        delete temp;
        return ans;
}
