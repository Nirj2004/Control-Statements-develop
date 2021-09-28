#include <iostream>
#include <conio.h>


using namespace std;


int main()
{
    int counter;


    cout << "Counting to 20...START!!\n";
    for(counter=1;counter<=20;counter++)
    {
        if (counter ==7) cout << "Lucky 7!\n";
        if (counter == 13) cout << "Yeah Boi 16!\n";
        if (counter == 16) cout << "Man you really need to get yourself fucked by a gorilla13!\n";
        cout << counter << "\n";
    }

    getch ();
    return 0;
    
}