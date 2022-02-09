      

template <typename T>
List<T>::List()
{
   size=0;
   head = nullptr;
}

template <typename T>
List<T>::~List()
{
   clear();
}

template <typename T>
void  List<T>::push_back(T data)
{
  if(head == nullptr)
  {
     head= new Node<T>(data);
  }

  else
  {
    Node<T> *current = this->head;
    while(current->next != nullptr)
    {
       current=current->next;
    }

     current->next= new Node<T>(data);

  }
  size++;
}

// template <typename T>
// T& List<T>::operator[](const int index)
// {
//    int counter=0;
//    Node<T> *current=this->head;
//    while(current != nullptr)
//    {
//       if(counter == index)
//       {return current->data;}
//       current=current->next;
//       ++counter;
//    }
// }

template <typename T>
void List<T>::pop_front()
{
   Node<T> *temp = head;
   head = head->next;
   delete temp;
   --size;
}

template <typename T>
void List<T>::clear()
{
   while(size)
   {
      pop_front();
   }
}

template <typename T>
void List<T>::push_front (T data)
{
   head = new Node<T> (data,head);
   ++size;
}

template <typename T>
void List<T>::insert(T data,int index)
{ 
   if(index == 0)
   {
      push_front(data);
   }
   
   else
   {
      Node<T> * previous = head;
      for(int i=0;i<index-1;++i)
      {
         previous=previous->next;
      }
     Node<T> * NewNode = new Node<T> (data,previous->next);
     previous->next=NewNode;

   }
}

template<typename T>
void List<T>::removeAt(int index)
{
   if(index == 0)
   {
      pop_front();
   }

   else
   {
   Node<T> * prev=head;
   Node<T> *Deleting = head;
  
    for(int i=0;i<index-1;++i)
   {
     prev=prev->next;
   }

   Deleting=prev->next;
   prev->next=Deleting->next;
   delete Deleting;
   }
   --size;
}
template <typename T>
void List<T>::pop_back()
{
   removeAt(size-1);
}

template <typename T>
void List<T>::print_elements()
{
   Node<T> * current=head;
   for(int i = 0;i<GetSize();++i)
   {
      std::cout<<current->data<<" ";
      current=current->next;
   }
   std::cout<<std::endl;
}