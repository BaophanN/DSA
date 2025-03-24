template <class T>
void SLinkedList<T>::bubbleSort()
{
    if(this->head==nullptr)return;
    Node*travel=this->head;
    while(travel!=nullptr){
        bool swap=false;
        Node*after=travel->next;
        while(after!=nullptr){
            if(after->data<travel->data){
                T temp=after->data;
                after->data=travel->data;
                travel->data=temp;
                swap=true;
            }
            after=after->next;
            travel=travel->next;
        }
        
        if(!swap)break;
        printList();
        travel=this->head;
    }
}