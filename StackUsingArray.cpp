#include <climits>
#include<bits/stdc++.h>
using namespace std;

template <typename T>

class StackUsingArray {
	T *data;
	int nextIndex;
	int capacity;	

	public :

	StackUsingArray() {
		capacity = 4;
		data = new T[capacity];
		nextIndex = 0;
	}

	// return the number of elements present in my stack
	int size() {
		return nextIndex;
	}

	bool isEmpty() {
		/*
		if(nextIndex == 0) {
			return true;
		}
		else {
			return false;
		}
		*/

		return nextIndex == 0;
	}

	// insert element
	void push(T element) {
		if(nextIndex == capacity) {
			T *newData = new T[capacity*2];
			for(int i=0;i<capacity;i++)
				newData[i] = data[i];
			capacity *= 2;
			delete [] data;
			data = newData;
		}
		data[nextIndex] = element;
		nextIndex++;
	}

	// delete element
	T pop() {
		if(isEmpty()) {
			cout << "Stack is empty " << endl;
			return INT_MIN;	
		}
		nextIndex--;
		return data[nextIndex];
	}

	T top() {
		if(isEmpty()) {
			cout << "Stack is empty " << endl;
			return INT_MIN;	
		}
		return data[nextIndex - 1];
	}
};
int main() {
	StackUsingArray<char> s;
	s.push('a');
	s.push('b');
	s.push('c');
	s.push('d');
	s.push('e');


	cout << s.top() << endl;

	cout << s.pop() << endl;
	cout << s.pop() << endl;
	cout << s.pop() << endl;

	cout << s.size() << endl;

	cout << s.isEmpty() << endl;

}
