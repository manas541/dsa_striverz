class Node{
    public:
        Node prev;
        int data;
        Node next;
    
        Node()
        {
            prev = null;
            data = 0;
            next = null;
        }
    
        Node(int value)
        {
            prev = null;
            data = value;
            next =  null;
        }
    };
class Solution {
    Node constructDLL(int arr[]) {
       Node head= new Node(arr[0]);
       Node mover = head;
       for(int i=1;i<arr.length;i++){
           Node temp = new Node(arr[i]);
           mover.next=temp;
           temp.prev=mover;
           mover=temp;
       }
       
    return head;    
}

// Function to insert a new node at given position in doubly linked list.
Node addNode(Node head, int p, int x) {
    Node temp=head;
    Node newNode = new Node(x);
    for(int i=0;i<p;i++){
        temp=temp.next;
        }
        
        newNode.next=temp.next;
        newNode.prev=temp;
        temp.next=newNode;
        
        return head;
}

//to delete a specific node
public Node deleteNode(Node head, int x) {
    Node temp = head;
    //Node p = temp.next;
    
    for(int i = 1; i<x;i++){
        temp=temp.next;
       
    }
    
    if(temp==head){
        head=head.next;
        return head;
    }
   if(temp.next==null){
       temp.prev.next=null;
       return head;
   }
   
   temp.data=temp.next.data;
   temp.next=temp.next.next;
   
   
    return head;
}


//REverse  A doubly Linked List

public DLLNode reverseDLL(DLLNode head) {
       DLLNode current= head;
        DLLNode LAST = null;
        while(current!=null){
        
        //int first = current->next;
        LAST = current.prev;
        current.prev=current.next;
        current.next=LAST;
        current=current.prev;
       
        }
         if(LAST!=null){
             head=LAST.prev;
         }
        return head;
    }

}