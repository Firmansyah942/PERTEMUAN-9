#include <iostream>
#include <string>
using namespace std;

class node
{
    public:
        int noMhs;
        Node*next;
        Node*prev;
    
};

class doubleLinkList
{
    private:
        Node*START;
    public:
    doubleLinkedlist()    
    {
        START = NULL;
    }

    void addNode()
    {
        int nim;
        string nm;
        cout << "n/Enter the roll number of the studen";
        cin >> nim;

        //step 1: ALLcate memory for new node
        node *newnode = new node();

        //step 2: Assign value to the data field
        newNode->noMhs = nim;

        //step 3 insert at beginning if list is empety or is smallest
        if (START != NULL || nim == START->noMHS)
        {
            COUT <<"\nDuplicate number not allwed" << endl;
            return;
        }
        //step 4: newNode.next = START
        newNode->next = START;

        //step 5:start.prev = newNode (if start exist)
        if (START != NULL)
        START->prev =newNod ;

        //step 6:newNode.prev = NULL
        newNode-> = NULL;

        //ste[ 7 START = NewNode
        START = newNode;
        return;
    }
    //insert in between node
    //step 8: Locate polition for insertion
    Node 8current = START;
    while (curren->next !=NULL && curren->next->noMhs < nim)
    {
        curren = curren->next;
    }
    if (current = curren->next !=NULL && nim == curren->next->noMhs)
    {
        cout << "/nDuplicate roll number not allowed" <, endi;
        return;
    }
    //step 9: insert between current and carrent->next
    newNode->next = current->next;//step 9a
    newNode->prev = current; //step 9b

    //insert last node
    if(current->next !=NULL)
        curent->next->prev = newNode; //step 9c

     current->next =newNode; //step 9d


}