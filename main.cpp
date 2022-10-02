#include <iostream>
#include "./classes/Admin.cpp"
#include "./classes/Menu.cpp"
#include "./classes/Sushi.cpp"
#include "./classes/Bar.cpp"
#include "./classes/Employee.cpp"
#include "./classes/Reservation.cpp"
#include "./classes/Manager.cpp"
#include "./classes/Vip.cpp"
#include "./classes/Kitchen.cpp"

using namespace std;

int main()
{
   Menu menu;
   Sushi smenu;
   Bar bmenu;
   Admin admin;
   Reservation rev;
   Manager man("Dan");
   Vip vip;
   Kitchen kit;
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
         smenu.showSushi();
         break;
      case 4:
         bmenu.showBar();
         break;
      case 5:

         break;
      case 6:
         kit.showKitchen();
         break;
      case 7:
         vip.showvip();
         break;
      case 8:
         rev.reservList();
         break;
      case 9:
         break;
      case 10:
         man.callManager();
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