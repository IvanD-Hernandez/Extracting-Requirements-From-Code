#include <iostream>
void multiples(int base, int lower_limit, int uppper_limit);
using namespace std;
int main(void)
{

        int x,y,z;
        char c = 'y';
        while( c != 'n')
        {
        cout << "enter a base value: ";
        cin >> x;

        cout << "enter a value for the lower end of the range: ";
        cin >> y;

        cout << "enter a value for the upper end of the range: ";
        cin >> z;

        multiples(x,y,z);

        cout << "Do you want to quit (y/n): ";
        cin >> c;
        }

        return 0;

}

void multiples(int base, int lower_limit, int uppper_limit)
{

        for(int i = lower_limit; i<=uppper_limit;i = i + base)
        {
                cout << i << endl;
        }

}
