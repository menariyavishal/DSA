#include<iostream>
using namespace std;


class Node
{
    public:
        int data;
        Node* next;

        //ctor
        Node(int value) : data(value){
            this->next = NULL;
        }
};

// return head of updated linked list
void insertAtHead(int value, Node* &head, Node* &tail)
{
    // empty LL : agr mera Head and Tail NULL ko point kr rhe ho
    // we are creating first node of LL
    if(head == NULL && tail == NULL)
    {
        // step1: create a new node
        Node* newNode = new Node(value);

        // step2: head ko newNode pr lagado
        head = newNode;

        // step3 : tail ko bhi newNode pr lagado
        tail = newNode;

        // Humne head or tail ko ek hi node pr esiliye lagaya h, kyuni ye mera first node h
    }
    else
    {
        // LL is not empty
        // phle se hi node present h
        //  step1 : create a new node
        Node* newNode = new Node(value);
        // step2 : newNode ke next ko head pe point krwa do
        newNode->next = head;
        // step3 : head ko update krdo newNode se
        head = newNode;
    }
    // return head;
}

// return head of updated linked list
void insertAtTail(int value, Node* &head, Node* &tail)
{
    // empty LL
    if(head == NULL && tail == NULL)
    {
        // ye mera first node hoga
        Node* newNode = new Node(value); // create node
        head = newNode; 
        tail = newNode;
    }
    else
    {
        // LL empty nhi h, mtlb phle si node present h
        Node* newNode = new Node(value); // create node
        tail->next = newNode;
        tail = newNode;
    }
    // return head;
}

// find the length of LL
int  getLen(Node*head)
{
    int len = 0;
    Node* temp = head;
    while(temp != NULL)
    {
        temp = temp->next;
        len++;
    }
    return len;
}

void insertAtPos(int pos , int value, Node* &head, Node* &tail)
{
    int len = getLen(head);
    // cout<<len<<endl;
    if(pos == 1)
    {
        // me insert at head krna chahta hu
        insertAtHead(value,head,tail);
    }
    else if(pos == len + 1)
    {
        // me insert at tail krna chahta hu
        insertAtTail(value,head,tail);
    }
    else
    {
        // insert krna a kisi position pr
        Node* temp = head;
        for(int i = 0; i<pos-2; i++)
        {
            temp = temp->next;
        }

        Node* newNode = new Node(value);
        newNode->next = temp->next;
        temp->next = newNode;
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

// searching in the linked list
bool searchLL(int target, Node* &head, Node* &tail)
{
    Node* temp = head;
    while(temp!=NULL)
    {
        if(temp->data == target)
        {
            return true;
        }
        temp = temp->next;
    }

    // if(temp == NULL)
    // {
    //     return false;
    // }
    return false;
}

// Deletion of nodes
void deleteLL(int pos, Node* &head, Node* &tail)
{
    // agr LL empty h
    if(head == NULL && tail == NULL)
    {
        cout<<"List is empty"<<endl;
        return;
    }

    // agr single node h
    if(head == tail)
    {
        Node* temp = head;
        head = NULL;
        tail = NULL;
        delete temp;
        // return;
    }
    else
    {
        // multiple nodes in LL
        // 2 cases
        // first case: pos = 1: delete krna h
        if(pos == 1)
        {
            Node* temp = head;
            head = temp->next;
            temp->next = NULL;
            delete temp;
        }
        else{
            // any other position except first
            Node* prev = head;
            for(int i = 0; i<pos-2; i++)
            {
                prev = prev->next;
            }
            
            Node* curr = prev->next;
            Node* forward = curr->next;
            prev->next = forward;
            curr->next = NULL;
            delete curr;
        }
    }
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    insertAtTail(10,head,tail);
    insertAtTail(20,head,tail);
    insertAtTail(30,head,tail);
    insertAtTail(25,head,tail);
    insertAtTail(50,head,tail);
    printLL(head);

    deleteLL(3,head,tail);
    printLL(head);

    // searching in LL
    // int target = 45;
    // bool res = searchLL(target,head,tail);
    // if(res == true)
    // {
    //     cout<<"Target found"<<endl;
    // }
    // else
    // {
    //     cout<<"Target not found"<<endl;
    // }

    // head = insertAtTail(100,head,tail);
    // head = insertAtTail(101,head,tail);
    // head = insertAtTail(102,head,tail);
    // // printLL(head);
    // insertAtPos(1,30,head,tail);
    // // printLL(head);
    // insertAtPos(5,80,head,tail);
    // // printLL(head);
    // insertAtPos(3,40,head,tail);
    // printLL(head);










    // Node* head = NULL;
    // Node* tail = NULL;

    // // LL is empty
    // head = insertAtHead(10,head,tail);
    // // 10->NULL
    // printLL(head);
    // head = insertAtHead(20,head,tail);
    // // 20->1-->Null
    // printLL(head);
    // head = insertAtHead(30,head,tail);
    // // 30->20->10->null
    // printLL(head);




    // static object
    // // Node first;
    // // Dynamic object
    // Node* first = new Node(10);


    return 0;
}