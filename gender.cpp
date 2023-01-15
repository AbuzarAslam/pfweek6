#include<iostream>
using namespace std;
string Gender(int age,char gender);
main()
{
    int age;
    char gender;
    cout << "Enter age..." ;
    cin >> age;
    cout << "Enter Gender...";
    cin >> gender;
   string result = Gender(age,gender);
   cout << "" << result;
}
string Gender(int age,char gender)
    {
        string title;
        if(gender == 'm' && age >= 16)
        {
            title = "Mr";
        }
           if(gender == 'm' && age < 16)
        {
            title = "Master";
        }
           if(gender == 'f' && age >= 16)
        {
            title = "Ms";
        }
           if(gender == 'f' && age < 16)
        {
            title = "Miss";
        }
        return title;
    }