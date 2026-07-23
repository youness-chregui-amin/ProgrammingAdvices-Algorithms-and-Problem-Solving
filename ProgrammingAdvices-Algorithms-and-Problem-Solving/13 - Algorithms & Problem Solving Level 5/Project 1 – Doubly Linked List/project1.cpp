

#include <iostream>
#include "clsDblLinkedList.h"

using namespace std;


int main()
{

    clsDblLinkedList <int> MydblLinkedList;

    MydblLinkedList.InsertAtBeginning(7);
    MydblLinkedList.InsertAtBeginning(4);
    MydblLinkedList.InsertAtBeginning(5);
    MydblLinkedList.InsertAtBeginning(2);
    MydblLinkedList.InsertAtBeginning(1);

    cout << "\nLinked List Contenet:\n";
    MydblLinkedList.PrintList();

    //clsDblLinkedList <int> ::Node* N;

  /*  N = MydblLinkedList.GetNod(2);*/

    if (MydblLinkedList.InsertAfter(2, 100))
    {

        cout << "Updated: ";
        MydblLinkedList.PrintList();


    }
    else
    {
        cout << "Invalid Index";
    }

 //   clsDblLinkedList<int>::Node* N1 = MydblLinkedList.Find(2);

 //   if (N1 != NULL)
 //       cout << "\nNode with value 2 is Found :-)\n";
 //   else
 //       cout << "\nNode Is not found :-(\n";

 //   MydblLinkedList.InsertAfter(N1, 500);
 //   cout << "\nAfter Inserting 500 after 2:\n";
 //   MydblLinkedList.PrintList();

 //   MydblLinkedList.InsertAtEnd(700);
 //   cout << "\nAfter Inserting 700 at end:\n";
 //   MydblLinkedList.PrintList();

 //   clsDblLinkedList<int>::Node* N2 = MydblLinkedList.Find(4);
 //   MydblLinkedList.DeleteNode(N2);
 //   cout << "\nAfter Deleting 4:\n";
 //   MydblLinkedList.PrintList();

 //   MydblLinkedList.DeleteFirstNode();
 //   cout << "\nAfter Deleting First Node:\n";
 //   MydblLinkedList.PrintList();

 //   cout << "\nAfter Deleting Last Node:\n";
 //   MydblLinkedList.DeleteLastNode();
 //   MydblLinkedList.PrintList();


 //   cout << "\nsize stack : ";
 //cout << MydblLinkedList.Size();

 //cout << "\nsize stack : ";
 //cout << MydblLinkedList.Size();


 /*if (MydblLinkedList.IsEmpty())
 {

     cout << "List is empty.\n";

 }
 else
 {
     cout << "List has elements.\n";


 }*/
    

    system("pause>0");


   

}