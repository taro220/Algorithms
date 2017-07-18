class Node {

	private:
		int val;
		Node* next;

	public:
		Node(int val){
			this->val = val;
			this->next = NULL;
		}

};

class Queue {

	public:
	
		Queue(){
			this->head = NULL;
			this->tail = NULL;
		}


	private:
		Node* head;
		Node* tail;

};