#include <iostream>
#include <string>
#include <conio.h>
// This is Quite fucking GOOD 🔥🔥🔥
using namespace std;

class dragonite
{
public:
    int x, y;
    string z;
    string m;

    // This is the default constructor :
    dragonite()
    {
        cout << "The constructor is called : " << endl;
    }
    dragonite(int x, int y, string z)
    {

        this->x = x;
        this->y = y;
        this->z = z;
    }

    dragonite(int x, int y, string z, string m)
    {
        this->x = x;
        this->y = y;
        this->z = z;
        this->m = m;
    }

    // inline dragonite(int a,int y, string z, string m) : x(x),y(y),z(z),m(m){};

    // dragonite()
    // {

    // }

    void display()
    {
        cout << "The Value of x is : " << x << endl;
        cout << "The Value of y is : " << y << endl;
        cout << "The Name of z is : " << z << endl;
        if (!m.empty())
            cout << "The Name of m is : " << m << endl;
        cout << "---------------------" << endl;
    }
};

int main()
{
    dragonite charizard(384, 980, "Porshe"), pikachu(443, 400, "Lamborghini"), Blastoise(1404, 99, "Bugatti"), james(1001, 000, "Visual", "Marketer"),jessie(james);
    charizard.display();
    pikachu.display();
    Blastoise.display();
    james.display();
    jessie.display();

    return 0;
};
