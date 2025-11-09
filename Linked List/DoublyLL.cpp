#include<iostream>
using namespace std;

// creation of Doubly Linked List
class Node
{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int value)
    {
        data = value;
        prev = NULL;
        next = NULL;
    }
};

// return the length of LL
int getLen(Node* head)
{
    Node* temp = head;
    int count = 0;
    while(temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

void insertAtHead(int value, Node* &head, Node* &tail)
{
    // LL is empty
    if(head == NULL && tail == NULL)
    {
        Node* newNode = new Node(value); // create a node
        head = newNode;
        tail = newNode;
    }
    else
    {
        // LL is not empty
        Node* newNode = new Node(value);  // A: create a node
        newNode->next = head; // step: B
        head->prev = newNode; // step: C
        head = newNode; // step : D

    }
}

void insertAtTail(int value, Node* &head, Node* &tail)
{
    // LL is empyt
    if(head == NULL && tail == NULL)
    {
        Node* newNode = new Node(value);
        head = newNode;
        tail = newNode;
    }
    else
    {
        // LL is not empty
        Node* newNode  = new Node(value); // A: create a new node
        tail->next = newNode; // B: connect tail to newNode
        newNode->prev = tail; // C: connect newNode to tail
        tail = newNode; // D: update tail
    }
}

void insertAtPos(int pos, int value, Node* &head, Node* &tail)
{
    int len = getLen(head);
    // 3 cases: lesftMost insert, rightMost insert and insert at any middle position
    if( pos == 1)
    {
        // leftMost insert
        insertAtHead(value,head,tail);
    }
    else if(pos == len + 1)
    {
        // rigtMost insert
        insertAtTail(value,head,tail);
    }
    else
    {
        // middle me khi bhi
        Node* temp = head;
        for(int i = 0; i<pos-2; i++)
        {
            temp = temp->next;
        }

        Node* newNode = new Node(value);
        Node* forward = temp->next;

        // set all pointers
        temp->next = newNode;
        newNode->prev = temp;
        forward->prev = newNode;
        newNode->next = forward;
    }
}

// Printing of LL
void printLL(Node*head)
{
    // create a temp pointer and initialise it with head
    Node* temp = head;
    // jb tk mera temp NULL tk na pahuche tb tk data print kro or aage bado
    while(temp != NULL)
    {
        cout<< temp->data<<" -> ";
        temp = temp->next;
    }cout<<"NULL"<<endl; 
}


// Printing LL Reverse
void printLLReverse(Node*tail)
{
    // create a temp pointer and initialise it with head
    Node* temp = tail;
    // jb tk mera temp NULL tk na pahuche tb tk data print kro or aage bado
    while(temp != NULL)
    {
        cout<< temp->data<<" -> ";
        temp = temp->prev;
    }cout<<"NULL"<<endl; 
}

// searching in LL
bool searchLL(int target, Node* head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        if(temp->data == target)
        {
            return true;
        }
        temp = temp->next;
    }

    return false;
}

void deleteLL(int pos, Node* &head, Node* &tail)
{
    int len = getLen(head);
    // LL is empty
    if(head == NULL && tail == NULL)
    {
        cout<<"LL is empty"<<endl;
        return;
    }
    else if(head == tail)
    {
        // single node
        Node* temp = head;
        head = NULL;
        tail = NULL;
        delete temp;
    }
    else if(pos == 1)
    {
        // delete head node
        Node* temp = head;
        head = head->next;
        head->prev = NULL;
        temp->next = NULL;
        delete temp;
    }
    else if(pos == len)
    {
        // delete tail node 
        Node* temp = tail;
        tail = tail->prev;
        tail->next = NULL;
        temp->prev = NULL;
        delete temp;
    }
    else
    {
        // delete any other node
         Node* backward = head;
         for(int i = 0; i<pos-2; i++)
         {
            backward = backward->next;
         }
         Node* curr = backward->next;
         Node* forward = curr->next;

         //pointer change
         backward->next = forward;
         forward->prev = backward;

         // curr ko isolate kro
         curr->prev = NULL;
         curr->next = NULL;

         // delete curr
         delete curr;
    }
}

int main()
{

    Node* head = NULL;
    Node* tail = NULL;

    insertAtTail(100,head,tail);
    // 10 -> NULL
    insertAtTail(200,head,tail);
    // 10 -> 20 -> NULL
    insertAtTail(300,head,tail);
    // 10 -> 20 -> 30 -> NULL
    insertAtTail(400,head,tail);
    // 10 -> 20 -> 30 -> 40 -> NULL
    printLL(head);

    deleteLL(1,head,tail);
    printLL(head);

    // // searching in LL
    // int target = 2000;
    // cout<<searchLL(target,head)<<endl;

    // insertAtPos(4,20,head,tail);
    // printLL(head);





    // insertAtHead(10,head,tail);
    // // 10 -> NULL
    // insertAtHead(20,head,tail);
    // // 20 -> 10 -> NULL
    // insertAtHead(30,head,tail);
    // // 30 -> 20 -> 10 -> NULL
    // printLL(head);
    // printLLReverse(tail);




    return 0;
}