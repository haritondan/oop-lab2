#include <iostream>
#include "./classes/Admin.cpp"
#include "./classes/Menu.cpp"
#include "./classes/Employee.cpp"
#include "./classes/Reservation.cpp"

using namespace std;

int main()
{
   Menu menu;
   Admin admin;
   Reservation rev;
   int ch;
   do
   {
      cout << "\nEnter 1 to see the Waiters list";
      cout << "\nEnter 2 to see the Kitchen's Menu";
      cout << "\nEnter 3 to see the Sushi' Menu";
      cout << "\nEnter 4 to see the Bar Menu";
      cout << "\nEnter 5 to see the Delivery Menu";
      cout << "\nEnter 6 to see the Kitchen Staff List";
      cout << "\nEnter 7 to see the Director/VIP List";
      cout << "\nEnter 8 to see the Reservation List";
      cout << "\nEnter 9 to see the Stock Levels";
      cout << "\nEnter 10 to call up for a Manager";
      cout << "\nEnter your choice " << endl;
      cin >> ch;

      switch (ch)
      {
      case 1:
         admin.listWaiters();
         break;

      case 2:
         menu.showMenu();
         break;
      case 3:
         
         break;
      case 4:

         break;
      case 5:

         break;
      case 6:

         break;
      case 7:

         break;
      case 8:
         rev.reservList();
         break;
      case 0:
         return 0;
      default:
         cout << "\nWrong Input\n"
              << endl;
         break;
      }
   } while (ch != 0);
   return 1;
}