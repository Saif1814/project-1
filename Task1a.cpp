#include <iostream>

using namespace std;

int main()
{
    int x; 
    bool condition = false;
    
    do {
        cout << " enter a number " << endl;
        cin >> x;
        if ( x < 100 && x > 0) {
            condition = true;
        }
    } while ( !condition );
    
    cout << "number squared is " << x*x << endl;
    return x*x;
}
