#include <iostream>
#include "list.h"

int main()
{
   List<int> lst;
   lst.push_back(5);
   lst.push_back(7);
   lst.push_back(11);
   lst.push_back(3);
   lst.push_back(8);

   lst.print_elements();
   lst.pop_back();
   lst.print_elements();
   
    return 0;
}