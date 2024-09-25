import java.lang.classfile.components.ClassPrinter.ListNode;

class Node{
    int data;
    Node next;

    Node(){
        data=0;
        next=null;
    }

    Node(int data)
    {
        this.data=data;
        this.next=null;
    }
}

//CREATION OF LINKED LIST
class Solution {
    static Node constructLL(int arr[]) {
        
       Node head = new Node(arr[0]);
       Node mover = head;
       for(int i=1;i<arr.length;i++){
           Node temp = new Node(arr[i]);
           mover.next = temp;
           mover=temp;
       }
       return head;
    
    }

    // Function to insert a node at the end of the linked list.
    Node insertAtEnd(Node head, int x) {
        Node newNode = new Node(x);
        
        if(head == null){
            head = newNode;
            
        }
        Node temp = head;
        while(temp.next!= null){
            temp=temp.next;
        }
        temp.next=newNode;
        
        
        return head; 
    }


    //Function to delete a node 
     public void deleteNode(ListNode node) {
        node.val=node.next.val;
        node.next=node.next.next;
    }

    ///count values
    
}