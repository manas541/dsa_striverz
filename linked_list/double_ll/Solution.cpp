class Node{
public:
    Node* prev;
    int data;
    Node* next;

    Node()
    {
        prev = NULL;
        data = 0;
        next = NULL;
    }

    Node(int value)
    {
        prev = NULL;
        data = value;
        next = NULL;
    }
};

class Solution {
  public:
    Node* constructDLL(vector<int>& arr) {
       Node* head= new Node(arr[0]);
       Node* mover = head;
       for(int i=1;i<arr.size();i++){
           Node* temp = new Node(arr[i]);
           mover->next=temp;
           temp->prev=mover;
           mover=temp;
       }
       
       return head;
    }


    // Function to insert a new node at given position in doubly linked list.
    

     Node* addNode(Node* head, int p, int x) {
        Node* temp=head;
        Node* newNode = new Node(x);
        for(int i=0;i<p;i++){
            temp=temp->next;
            }
            
            newNode->next=temp->next;
            newNode->prev=temp;
            if(temp->next!=NULL){
                temp->next->prev=newNode;
           }
            
            temp->next=newNode;
            
            return head;
    }

    //to delete a specific node
    Node* deleteNode(Node* head, int x) {
       
        Node* temp = head;
        //Node p = temp.next;
        
        for(int i = 1; i<x;i++){
            temp=temp->next;
           
        }
        
        if(temp==head){
            head=head->next;
            return head;
        }
       if(temp->next==NULL){
           temp->prev->next=NULL;
           return head;
       }
       
       temp->data=temp->next->data;
       temp->next=temp->next->next;
       
       
        return head;
    
    }


    //reverse a Dll
     DLLNode* reverseDLL(DLLNode* head) {
        DLLNode* current= head;
        DLLNode* LAST = NULL;
        while(current!=NULL){
        
        //int first = current->next;
        LAST = current->prev;
        current->prev=current->next;
        current->next=LAST;
        current=current->prev;
       
        }
         if(LAST!=NULL){
             head=LAST->prev;
         }
        return head;
    }
};
