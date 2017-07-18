class Node(object):
    def __init__(self,value):
        self.value = value
        self.next = None

class SLL(object):
    def __init__(self):
        self.head = None
        # self.tail = None

    def print_the_tail(self):
        print "tail: {}, head: {}".format(self.tail.value, self.head.value)

    def printAllValues(self):
        curr = self.head
        while curr:
            print curr.value
            curr = curr.next

    def addBack(self,val):
        curr = self.head
        while curr.next != None:
            curr = curr.next

        curr.next = Node(val)
        # self.tail = curr.next

    def addFront(self,val):
        if self.head == False:
            self.head = Node(val)
            # self.tail = self.head
        else:
            newNode = Node(val)
            newNode.next = self.head
            self.head = newNode

    def insertBefore(self,nextVal, val):
        if self.head.value == nextVal:
            addFront(val)
        else:
            curr = self.head
            while curr.next.value != nextVal:
                curr = curr.next
            newNode = Node(val)
            newNode.next = curr.next
            curr.next = newNode

    def insertAfter(self,preVal,val):
        if self.tail.value == preVal:
            addBack(val)
        else:
            curr = self.head
            while curr.value != preVal:
                curr = curr.next
            newNode = Node(val)
            newNode.next = curr.next
            curr.next = newNode

    def removeNode(self,val):
        if self.head.value == val:
            temp = self.head
            self.head = self.head.next
            del temp
        else:
            curr = self.head
            while curr.next.value != val:
                curr = curr.next
            if curr.next == self.tail:
                temp = curr.next
                curr.next = None
                self.tail = curr
                del temp
            else:
                temp = curr.next
                curr.next = curr.next.next
                del temp


    def reverseList(self):
        prev = self.head
        curr = prev.next
        temp = curr.next
        prev.next = None
        while True:
            if temp.next != None:
                curr.next = prev
                prev = curr
                curr = temp
                temp = temp.next
            else:
                temp.next = curr
                curr.next = prev
                temphead = self.head
                self.head = self.tail
                self.tail = temphead
                break



list = SLL()
list.head = Node("Alice")
list.addBack("Chad")
list.addBack("Debra")

list.printAllValues()
