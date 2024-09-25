#include <vector>
struct Node
{
    public:
    int data;
    Node* next;

    Node(){
        data=0;
        next=NULL;
    }

    Node(int data){
        this->data=data;
        this->next=NULL;
    }

};

// CREATION OF LINKEDLIST
class Solution {
  public:
    Node* constructLL(vector<int>& arr) {
       Node* head = new Node(arr[0]);
       Node* mover = head;
       for(int i=1;i<arr.size();i++){
           Node* temp = new Node(arr[i]);
           mover->next = temp;
           mover=temp;
       }
       return head;
    }


    //Insertio at end
    Node *insertAtEnd(Node *head, int x) {
        
        Node* newNode = new Node(x);
        
        if(head == NULL){
            head = newNode;
            
        }
        Node* temp = head;
        while(temp->next!= NULL){
            temp=temp->next;
        }
        temp->next=newNode;
        
        
        return head;
        
    }

    //Delete a node
    void deleteNode(ListNode* node) {
     
     

     node->val = node->next->val;
     node->next = node->next->next;

    }
    //Search an element in array

    // Function to count nodes of a linked list.
    bool searchKey(int n, struct Node* head, int key) {
        Node*temp = head;
        while(temp->next!=NULL){
            if(temp->data==key){
                return true;
            }
            temp=temp->next;
        }
        
        return false;
    }
};



