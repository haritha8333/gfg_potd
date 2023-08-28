//28.08.2023
//Remove duplicate element from sorted Linked List


Node *removeDuplicates(Node *head)
{
 // your code goes here
 Node * temp=head;
 while(head&&head->next!=NULL){
     if(head->data==head->next->data){
         head->next=head->next->next;
     }
     else{
         head=head->next;
     }
 }
 return temp;
}
