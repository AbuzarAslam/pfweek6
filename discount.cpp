#include<iostream>
using namespace std;
float Discount(int amount,string month,string day);
main()
{
    int amount;
    string month;
    string day;
    float total;
    cout << "Enter amount....";
    cin >> amount;
    cout << "Enter day....";
    cin >> day;
    cout << "Enter month....";
    cin >> month;
    total = Discount(amount,month,day);
    cout << "Your bill after discount is...." << total; 
}
float Discount(int amount,string month,string day)
    {
       
       if (day == "sunday" && (month == "octuber" || month == "march" || month == "august")) 
       {
        float discount;
        discount = amount - (amount*10/100);
        return discount; 
       }
      else if (day == "monday" && (month == "november" || month == "december")) 
       {
        float discount;
        discount = amount - (amount*5/100);
        return discount; 
       }
       
      return amount; 
    }
