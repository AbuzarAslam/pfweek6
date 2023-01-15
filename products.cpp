#include<iostream>
using namespace std;
float checkCost(string city, string product, int quantity);
main()
{
    string city;
    string product;
    int quantity;
    cout << "Enter city (sofia/plovdiv/varna)....";
    cin >> city;
    cout << "Enter product(coffee/water/beer/sweets/peanuts)...";
    cin >> product;
    cout << "Enter quantity....";
    cin >> quantity;
    float result = checkCost(city,product,quantity);
    cout << "" << result << endl;
}
float checkCost(string city, string product, int quantity)
    {
        float price;
        if(city == "sofia")
        {
            if (product == "coffee")
            {
                price = quantity*0.50;
            }
            if (product == "water")
            {
                price = quantity*0.80;
            }
            if (product == "beer")
            {
                price = quantity*1.20;
            }
            if (product == "sweets")
            {
                price = quantity*1.45;
            }
            if (product == "peanuts")
            {
                price = quantity*1.60;
            }
        }
        if(city == "plovdiv")
        {
            if (product == "coffee")
            {
                price = quantity*0.40;
            }
            if (product == "water")
            {
                price = quantity*0.70;
            }
            if (product == "beer")
            {
                price = quantity*1.15;
            }
            if (product == "sweets")
            {
                price = quantity*1.30;
            }
            if (product == "peanuts")
            {
                price = quantity*1.50;
            }
        }
        if(city == "varna")
        {
            if (product == "coffee")
            {
                price = quantity*0.45;
            }
            if (product == "water")
            {
                price = quantity*0.70;
            }
            if (product == "beer")
            {
                price = quantity*1.10;
            }
            if (product == "sweets")
            {
                price = quantity*1.35;
            }
            if (product == "peanuts")
            {
                price = quantity*1.55;
            }
        }
        return price;
    }
