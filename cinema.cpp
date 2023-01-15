#include<iostream>
using namespace std;
float totalIncome(string type,int rows,int columns);
main()
{
    int rows;
    int columns;
    string type;
    float total;
    cout << "Enter screentype....";
    cin >> type;
    cout << "Enter rows...";
    cin>> rows;
    cout << "Enter columns...";
    cin >> columns;
    total = totalIncome(type,rows,columns);
    cout << "Total income is...." << total;
}
float totalIncome(string type,int rows,int columns)
    {
        float income;
        if (type == "premiere")
            {
                income = rows*columns*12.00;
            }
        if (type == "normal")
            {
                income = rows*columns*7.50;
            }
        if (type == "discount")
            {
                income = rows*columns*5.00;
            }
        return income;
        
    }
