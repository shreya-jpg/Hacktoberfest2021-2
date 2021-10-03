#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> list1; // declaring list of 0 length
    list<int> list2(7); // declaring list of size 7
    list1.push_back(5); // adding elements in list
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(12);
    // printing list
    list<int> :: iterator iter;
    for(iter= list1.begin(); iter != list1.end(); iter++){
        cout<<*iter<<" ";
    }
    // sorting the list
    list1.sort();
    cout<<"\nsorted list: ";
    list<int> :: iterator iter2;
    for(iter2= list1.begin(); iter2 != list1.end(); iter2++){
        cout<<*iter2<<" ";
    }

    //adding elements in list2
    list<int> :: iterator itr;
    itr = list2.begin();
    *itr = 45;
    itr++;
    *itr = 6;
    itr++;
    *itr = 9;
    itr++;

    cout<<"\nlist 2: ";
    list<int> :: iterator itr2;
    for(itr2= list2.begin(); itr2 != list2.end(); itr2++){
        cout<<*itr2<<" ";
    }
   // reversing the list
   list1.reverse();
   // delete item from back
   list1.pop_back();
   // delete from first
   list1.pop_front();

    return 0;
}
