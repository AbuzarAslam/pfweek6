#include<iostream>
using namespace std;
float Travel(int kilometer,string time);
main()
{
    int kilometer;
    string time;
    float result;
    cout << "Enter kilometers....";
    cin >> kilometer;
    cout << "Enter time (day/night)....";
    cin >> time;
    result = Travel(kilometer,time);
    cout << "" << result;
}
float Travel(int kilometer,string time)
    
    {
        float price;
        if(kilometer > 100 && (time == "day" || time == "night") )
        {
            price = kilometer*0.06;
        }
        else if (kilometer>20)
        {
            price = kilometer*0.09;
        }
        else if (kilometer<20 && time =="day")
        {
            price = (kilometer*0.79)+0.7;
        }
        else if (kilometer<20 && time =="night")
        {
            price = (kilometer*0.90)+0.7;
        }

        return price;
    }