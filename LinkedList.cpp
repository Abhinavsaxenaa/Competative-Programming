#include<bits/stdc++.h>
using namespace std;

class Node {
	public:
	Node *next;
	int data;
	
	Node(int data){
		this -> data = data;
		this -> next = NULL;
	}
};

void print(Node *head){
	
	Node *temp = head;
	int count = 0;
	while(temp != NULL){
		count++;
		cout<<temp -> data<<" ";
		temp = temp -> next;
	}
	cout<<endl;
	cout<<count<<endl;
}

int main() {
				//input from user
	Node *head = NULL;
	Node *tail = NULL;
	int data;
	cin>>data;
	while(data != -1){
		Node *newnode = new Node(data);
		if(head == NULL){
			head = newnode;
			tail = newnode;
		}
		else{
			tail -> next = newnode;
			tail = tail -> next;
		}
		cin>>data;
	}
	
	print(head);
	
	
			//dynamically 
//	Node *n1 = new Node(10);
//	Node *n2 = new Node(20);
//	Node *n3 = new Node(30);
//	Node *n4 = new Node(40);
//	
//	Node *head = n1;
//	
//	n1 -> next = n2;
//	n2 -> next = n3;
//	n3 -> next = n4;
			//statically upto the block
//	Node n1(10);
//	Node n2(20);
//	Node n3(30);
//	Node n4(40);
//	
//	Node *head = &n1;
//	
//	n1.next = &n2;
//	n2.next = &n3;
//	n3.next = &n4;
}
