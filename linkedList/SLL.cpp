#include <iostream>


struct Node {

	int val;
	Node *next;

	Node(int val) {
		this->val = val;
		this->next = nullptr;
	}

};


struct SLL {
	
	Node *head;
	SLL() {
		this->head = nullptr;
	}

	SLL* addNode(int val) {
		Node *newNode = new Node(val);
		if (this->head == NULL){
			this->head = newNode;
		} else {
			Node *curr = this->head;
			while (curr->next != NULL) {
				curr = curr->next;
			}
			curr->next = newNode;
		}
		return this;
	}

	SLL* addToFront(int val) {
		Node *newNode = new Node(val);
		if(this->head == NULL) {
			this->head = newNode;
		} else {
			newNode->next = this->head;
			this->head = newNode;
		}
		return this;
	}

	SLL* printList() {
		Node *curr  = this->head;
		while(curr) {
			std::cout << curr->val << std::endl;
			curr = curr->next;
		}
		return this;
	}

	SLL* insertAfter(int val,int prev) {
		Node *newNode = new Node(val);
		Node *curr = this->head;
		while(curr){
			if(curr->val == prev) {
				Node *temp = curr->next;
				curr->next = newNode;
				newNode->next = temp;
				break;
			} else {
				curr = curr->next;
			}
		}
		return this;
	}

	SLL* insertInOrder(int val) {
		Node *newNode = new Node(val);
	
		if(!this->head) {
			this->head = newNode;
		} else if (this->head->val > val) {
			newNode->next = this->head;
			this->head = newNode;
		} else {

			Node *curr = this->head;

			while(curr->next && curr->next->val < val){
				curr = curr->next;
			}

			newNode->next = curr->next;
			curr->next = newNode;
			}

			return this;
		}



	SLL* IO(int val){

		Node *newNode = new Node(val);

		Node **pNode = &head;

		while (*pNode && (*pNode)->val <= val)
			pNode = &((*pNode)->next);

		newNode->next = *pNode;
		*pNode = newNode;

		return this;
	}

	





};
	
int main(){

SLL *myList = new SLL();

// myList->addNode(2)->addNode(4)->addNode(6)->addToFront(0)->insertInOrder(5);
// myList->insertInOrder(5)->insertInOrder(3)->insertInOrder(4)->insertInOrder(2)->insertInOrder(1)->printList();
myList->IO(5)->IO(3)->IO(4)->IO(2)->IO(1)->printList();

}