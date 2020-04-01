

// Complete the findMergeNode function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */

int findMergeNode(SinglyLinkedListNode* headA, SinglyLinkedListNode* headB) {
   
   SinglyLinkedListNode *tempB; 
   while(headA!=NULL){ 
     tempB = headB; 
     while(tempB!=NULL){ 
       if(tempB == headA){ 
         return tempB->data; 
       } 
       tempB = tempB->next; 
     } 
     headA = headA->next; 
   } 

   return headA->data;
}


