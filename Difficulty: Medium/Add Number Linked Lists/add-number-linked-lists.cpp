/*
class Node {
  public:
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/

class Solution {
  public:
    Node* addTwoLists(Node* head1, Node* head2) {
        // code here
        vector<int>arr1;
        vector<int>arr2;
        vector<int>ans;
        int upper = 0;
        
        Node* temp = head1;
        while(temp != nullptr){
            arr1.push_back(temp->data);
            temp = temp->next;
        }
        
        temp = head2;
        
        while(temp != nullptr){
            arr2.push_back(temp->data);
            temp = temp->next;
        }
        
        auto it1 = arr1.begin();
        while(it1 != arr1.end() - 1 && *it1 == 0) {
            it1 = arr1.erase(it1);
        }
        
        auto it2 = arr2.begin();
        while(it2 != arr2.end() - 1 && *it2 == 0) {
            it2 = arr2.erase(it2);
        }
        
        while(arr1.size() > arr2.size()){
            arr2.insert(arr2.begin(),0);
        }
        
        while(arr2.size() > arr1.size()){
            arr1.insert(arr1.begin(),0);
        }
        //now both numbers are stored in both the arrays and they are of equal sizes now
        int n = arr1.size();
        
        for(int i = n-1; i >= 0; i--){
            int sum = arr1[i] + arr2[i] + upper;
            upper = sum/10;
            int lower = sum % 10;
            ans.push_back(lower);
        }
            
        if(upper > 0){
            ans.push_back(upper);
        }
        
        //convert arr to linkedlist
        
        Node* dummyHead = new Node(0);
        Node* current = dummyHead;
        
        for(int k = ans.size() - 1; k >= 0; k--){
            current->next = new Node(ans[k]);
            current = current->next;
        }
        
        Node* result = dummyHead->next;
        delete dummyHead; // Cleanup dummy node
        
        return result;
    }
};