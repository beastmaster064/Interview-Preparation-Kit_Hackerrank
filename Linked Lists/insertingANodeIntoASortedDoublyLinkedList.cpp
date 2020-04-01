

// Complete the sortedInsert function below.

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
DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* head, int data) {
    int flag=0;
    DoublyLinkedListNode* node=head;
    
    DoublyLinkedListNode* temp = (DoublyLinkedListNode*)malloc(sizeof(DoublyLinkedListNode));
    temp->data = data; 
    temp->prev = nullptr;
    temp->next = nullptr;

    if(temp->data <= node->data){
        temp->next=node;
        node->prev=temp;
        head = temp;
    }
    else{
        for(;node->next!=nullptr;node=node->next)
         if(node->data <= data && (node->next)->data >= data)
               { flag=1; break; }

        
    if(flag==1){
        temp->prev = node;
        temp->next = node->next;
        node->next->prev = temp;
        node->next = temp; 
        }
    else{
        temp->prev= node;
        node->next = temp;
    }
     
    }     
    return head;

}


