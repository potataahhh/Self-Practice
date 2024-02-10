#include <iostream>

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode* dummyHead = new ListNode(0);
    ListNode* current = dummyHead;
    int carry = 0;

    while (l1 || l2 || carry) {
        int sum = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + carry;
        carry = sum / 10;

        current->next = new ListNode(sum % 10);
        current = current->next;

        if (l1) l1 = l1->next;
        if (l2) l2 = l2->next;
    }

    return dummyHead->next;
}

// Helper function to print a linked list
void printList(ListNode* head) {
    while (head) {
        std::cout << head->val << " ";
        head = head->next;
    }
    std::cout << std::endl;
}

int main() {
    // Example usage:
    // Create two linked lists representing numbers 243 and 465 (stored in reverse order)
    ListNode* l1 = new ListNode(2);
    l1->next = new ListNode(4);
    l1->next->next = new ListNode(3);

    ListNode* l2 = new ListNode(5);
    l2->next = new ListNode(6);
    l2->next->next = new ListNode(4);

    // Add the two numbers and print the result
    ListNode* result = addTwoNumbers(l1, l2);
    printList(result);

    // Clean up memory
    delete l1;
    delete l2;
    delete result;

    return 0;
}
