class Node:  
    def __init__(self, data):  
        self.data = data  
        self.next = None 
  
class LinkedList: 
    def __init__(self): 
        self.head = None
  
    def push(self, data): 
        new_node = Node(data) 
        new_node.next = self.head 
        self.head = new_node 
  
    # Function to get to the middle  
    def printMiddle(self): 
        slow = self.head 
        fast = self.head 
  
        if self.head is not None: 
            while (fast is not None and fast.next is not None): 
                fast = fast.next.next
                slow = slow.next
            print("The middle element is: ", slow.data) 
  
# Driver code 
list1 = LinkedList() 
list1.push(7) 
list1.push(2) 
list1.push(5) 
list1.push(1) 
list1.push(8) 
list1.printMiddle() 
