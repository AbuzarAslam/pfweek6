#include<iostream>
using namespace std;
void Budget(int range,string category,int people);
main()
{
    float range;
    string category;
    float people;
    cout << "Enter range.....";
    cin >> range;
    cout << "Enter category(vip/normal)...";
    cin >> category;
    cout <<"Enter number of people(1 to 200)....";
    cin >> people;
    Budget(range,category,people);
    
}
void Budget(int range,string category,int people)
    {
        float transport;
        float budget;
            if(people<=4)
            {
                transport = range - (range*75/100);
            }
            
            if(people<=9)
            {
                transport = range - (range*60/100);
            }
            
            if(people<=24)
            {
                transport = range - (range*50/100);
            }
            
            if(people<=29)
            {
                transport = range - (range*40/100);
            }
            
            if(people<=49)
            {
                transport = range - (range*40/100);
            }
            
            if(people>=50)
            {
                transport = range - (range*25/100);
            }
    if (category =="vip")
        {
            budget = people*499.99;
        }
    if (category == "normal")
        {
            budget = people*249.99;
        }
        float total = budget - transport;
        if (total < range)
        {
            cout << "yes! you have " << total <<"leva left"; 
        }
        if (total > range)
        {
            cout << "Not enough money! you need " << budget <<"leva left"; 
        }
    }