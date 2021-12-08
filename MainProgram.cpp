#include<iostream>
#include "ticket.h"
#include <string>
using namespace std;

int main()
{
Ticket ticketn;

int choice;
int qty;
string tempName,tempPhone;
int tempTicket;


do{
    cout << "___________________________________________________________\n";
    cout<<endl;
    cout << "| WELCOME TO SITI NURHALIZA 2021 CONCERT TICKET BOOKING |\n";
    cout << "____________________________________________________________\n";

    cout << "\n1.Book your ticket. \n2.Process the Booking. \n3.View All Booking. \n4.Exit\n";

    cout<<"Enter your choice :";
    cin>>choice;

    switch(choice){

case 1:
    {



        cout<<"\n----Customer Information----"<<endl;


         cout << "ticket No : ";
         cin >> tempTicket;

         cout << "Name: ";
         cin>>tempName;

         cout << "Phone Number: ";
         cin >> tempPhone;



         ticketn.enqueue(tempName,tempPhone,tempTicket);




    break;
}


  case 2:
    {
       int num = ticketn.length();
       if(num == 0)
    {
        cout << "There are no booked made!";
    }
    else
    {

        for(int i = 0; i<num; i++)
        {
            cout << "Booking " << i+1 << " being processed into the Database...." << endl;
    }
    }
    }

 break;

 case 3:
     {
       cout<<"----Booking Details----"<<endl;
        ticketn.sort();
        ticketn.display();


     }
     break;







}

}while(choice!=4);

return 0;
}
