class Solution {
  public:
    Node* sortedMerge(Node* head1, Node* head2) {
        // code here
        vector<int> arr;

    
        while (head1 != nullptr) {
            arr.push_back(head1->data);
            head1 = head1->next;
        }

    
        while (head2 != nullptr) {
            arr.push_back(head2->data);
            head2 = head2->next;
        }

    
        sort(arr.begin(), arr.end());

        Node *dummy = new Node(-1);
        Node *curr = dummy;

        for (int i = 0; i < arr.size(); i++) {
            curr->next = new Node(arr[i]);
            curr = curr->next;
        }

        return dummy->next;
    }
};
