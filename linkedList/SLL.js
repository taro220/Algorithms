class SLL {
  constructor(){
    this.head = null;
  }
  
  addNode(val){
    var newNode = new Node(val);
      if(!this.head){
        this.head = newNode;
      } else {
        var curr = this.head;
        while(curr){
          curr = curr.next;
        }
        curr.next = newNode;
      }
  }
  addNodeFront(val){
    var newNode = new Node(val);
    if(this.head){
      newNode.next = this.head;
    }
    this.head = newNode;
  }
}

class Node {
  constructor(val){
    this.val = val;
    this.next = null;
  }
}


var myList = new SLL();
myList.addNode(5);
myList.addNodeFront(2)

console.log(myList);
