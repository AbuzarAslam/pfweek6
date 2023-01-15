#include<iostream>
using namespace std;
string Symbol(int day,string month,string sign);
main()
{
    int day;
    string month;
    string result;
    string sign;
    cout << "Enter day.....";
    cin >> day;
    cout << "Enter month...";
    cin >> month;
    cout << "Enter sign....."
    result = Symbol(day,month);
    cout << "" << result;
}
string Symbol(int day,string month)
{
    if((sign == "Aries")&&(day>=21 && month =="march") || (day<=19 && month== "april"))
    {
        symbol = "The Ram";
    }
    return symbol;
}