#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // k is k, h is h
    float k, h, stormRounded;
    double stormVelocity;
    string stormType;

    // user input
    cin >> k;
    cin >> h;

    // convert hour to seconds
    h = h * 3600;
    k  = k * 1000;

    // calculate velocity
    stormVelocity = k / h;

    
    if (stormVelocity > 32.78)
    {
        stormType = "Hurricane";
        cout << fixed << setprecision(2) << stormVelocity << endl;
    }
    else if (stormVelocity >= 17.50 && stormVelocity <= 32.78)
    {
        stormType = "Tropical Storm";
        cout << fixed << setprecision(2) << stormVelocity << endl;
    }
    else if (stormVelocity < 17.50)
    {
        stormType = "Tropical Depression";
        
        if (stormVelocity < 10) {
            cout << fixed << setprecision(2) << stormVelocity << endl;
        } else {
            cout << fixed << setprecision(2) << stormVelocity << endl;
        }
    }


    cout << stormType;

    return 0;
}