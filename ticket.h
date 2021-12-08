
#ifndef TICKET_H
#define TICKET_H
#include <string>
using namespace std;


struct Node

{
string name;
string phone;
int ticket;
int order;
Node* next;
};


class Ticket{

private:
Node* front;
Node* rear;
int numOfTicket;


public:

Ticket();
~Ticket();
void enqueue(string, string, int);
void dequeue();
bool Empty();
void display();
void sort();
int length();
};

Ticket:: Ticket()
{
front = NULL;      //Constructor
rear = NULL;
numOfTicket=0;
}


Ticket:: ~Ticket()
{
                   //Destructor
}


int Ticket::length()
{
    return numOfTicket;
}


void Ticket::enqueue(string tempName, string tempPhone, int tempTicket)
{

Node* T = new Node;
T->name = tempName;
T->phone = tempPhone;
T->ticket=tempTicket;
T->next = NULL;
T->order = 0;

cout<<"\nInformation Added.Thank you!!!"<<endl;

if (!Empty())
    rear->next = T;

else
    front = T;
rear = T;

numOfTicket++;
}


void Ticket::dequeue()
{
if (Empty())
{

    cout << "Invalid. There is no Booked Ticket.\n";

}
else
{
    cout<<"Booking Has Been Deleted!"<<endl;
    Node* pTemp = front;
    if (numOfTicket == 1)

    rear = front = NULL;
    else
    front = front->next;
    numOfTicket--;
    delete pTemp;
}
}


bool Ticket::Empty()
{
return (numOfTicket == 0);
}


void Ticket::display()
{
if (Empty())
{

    cout << "There is no  Booked Ticket\n";

}
else
{
    int quantity = 1;
    Node* pTemp = front;
    while (pTemp != NULL)
    {
    cout<<endl;
    cout<<"Ticket No: "<<pTemp->ticket<<endl;
    cout << "Name: " << pTemp->name << endl;
    cout << "Phone Number: " << pTemp->phone << endl;

    cout<<endl;
    cout<<endl;
    pTemp = pTemp->next;

    }
}
}



void Ticket::sort()
{

Node* prev = front;
Node* current = front->next;
while (current != NULL){
if (current->ticket < prev->ticket){
prev->next = current->next;
current->next = front;
front = current;
current = prev;
}
else{
prev = current;
current = current->next;
}
}
cout << "SORTED DONE ";
cout << endl<<endl;
}














#endif
