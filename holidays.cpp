#include<iostream>
using namespace std;
float volleyBall(string year,int holiday,int weekend);
main()
{
    string year;
    int holiday;
    int weekend;
    cout << "Enter kind of year(normal/leap)";
    cin >>year;
    cout << "Enter number of holidays...";
    cin >> holiday;
    cout << "Enter number oof weekends....";
    cin >> weekend;
    float result = volleyBall(year,holiday,weekend);
    cout << "" << result;
}
float volleyBall(string year,int holiday,int weekend)
    {
        float holiday1;
        float weekend1;
        float weekend2;
        float total;
        holiday1 = holiday*0.67;
        weekend1 = 48 - weekend;
        weekend2 = weekend1*0.75;
        total = holiday1+weekend+weekend2;
        if (year == "normal");
        {
            return total;
        }
        if (year == "leap")
        {
            return total+(total*0.15);
        }
    }