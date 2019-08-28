/*This is a function problem.You only need to complete the function given below*/
/*
  Reverse a linked list
  The input list will have at least one element  
  Return pointer to head of reverse linked list 
  Node is defined as 
  struct node
  {
     int data;
     struct Node *next;
  }
*/
struct node *reverse (struct node *head, int k)
{ 
  struct node *prev = NULL;
  struct node *nex = NULL;
  struct node *cur = head;
  int c = k;
  while(c-- && cur != NULL){
      nex = cur->next;
      cur->next = prev;
      prev = cur;
      cur = nex;
  }
  if(nex != NULL){
      head->next = reverse(nex,k);
  }
  return prev;
}

