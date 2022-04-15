#include <stdio.h>

int main(void)
{

        int x,y,z = 0;

        cout <<"Input 5 numbers, so that we can take the average!\n");
        do
        {
                y += 1;
                cout <<"Input: ";
                cin >> x ;

                z = x + z ;
        }while(y != 5);

        z = z/y ;
        cout <<"The average is: " << z;
return 0 ;
}
