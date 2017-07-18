class QUEUE {
  constructor(){
    this.head = null;
    this.tail = null;
  }

  push(val){
    var newNode = new Node(val);
    if(!this.head){
      this.head = newNode;
      this.tail = newNode;
    }

  }


}
