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

void solve(Node*head, int&carry)
{
    if(!head) return;

    solve(head->next,carry);

    int sum = head->data + carry;
    int digit = sum%10;
    carry = sum/10;
    head->data = digit;
}

Node* add1(Node*head, int&carry)
{
    solve(head,carry);

    if(carry)
    {
        Node* newNode = new Node(carry);
        newNode->next = head;
        head = newNode;
    }
    return head;
}



int main()
{
    Node* head = new Node(9);
    head->next = new Node(9);
    head->next->next = new Node(9);

    int carry = 1;

    printLL(head);

    head = add1(head ,carry);
    printLL(head);
    





    return 0;
}