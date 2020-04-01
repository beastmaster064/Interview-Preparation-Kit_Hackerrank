

// Complete the reverse function below.

/*
 * For your reference:
 *
 * DoublyLinkedListNode {
 *     int data;
 *     DoublyLinkedListNode* next;
 *     DoublyLinkedListNode* prev;
 * };
 *
 */
DoublyLinkedListNode* reverse(DoublyLinkedListNode* head) {

    DoublyLinkedListNode* temp = (DoublyLinkedListNode*)malloc(sizeof(DoublyLinkedListNode));
    temp = nullptr;
    DoublyLinkedListNode* node = head;

    while(node!=nullptr){
        temp =  node->prev;
        node->prev = node->next;
        node->next = temp;
        node = node->prev;
    }    

    if(temp!=nullptr)
        head = temp ->prev;

    return head;
}


