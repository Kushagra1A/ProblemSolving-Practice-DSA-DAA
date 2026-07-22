/*
class Node {
   public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
} */

class Solution {
  public:
    bool detectLoop(Node* head) {
        //brute force approach would be to use a map data structure and keep track of all encountered nodes and keep looking them up for repetition in the hashmap
        
        unordered_map<Node*, int>mpp;
        Node* temp = head;
        
        while(temp != nullptr){
            
            if(mpp.find(temp) != mpp.end()){
                return true;
            }
            else{
                //when no such node is present in hashmap
                mpp.insert({temp,1});
            }
            
            temp = temp->next;
        }
        
        return false;
    }
};