#include<iostream>
using namespace std;
string Speed(int speed);
main()
{
    int speed;
    cout << "Enter speed....";
    cin >> speed;
    string result = Speed(speed);
    cout << "" << result;
}
string Speed(int speed)
    {
        string info;
        if (speed > 1000)
        {
            info = "Extremely Fast";
        }
        if (speed >= 150)
        {
            info = "Ultra Fast";
        }
        if (speed >= 50)
        {
            info = "Fast";
        }
        if (speed >= 10)
        {
            info = "Average";
        }
          if (speed < 10)
        {
            info = "Slow";
        }
        return info;
    }