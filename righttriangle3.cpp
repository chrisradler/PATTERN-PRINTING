#include <iostream>

using namespace std;

int main()
{
    
 /*
    * * * * 
    * * * 
    * * 
    *
    
    */
    
    int num;
    cout << "Please enter the number: " << endl;
    cin >> num ; 
    int x = 0;
    while ( x <= num){
        x++;
        int y = x;
        while ( y <= num){
            cout << "* " ;
            y++;
        }
        cout << endl;
            }

/*

    int num;
    cout << "Please enter the number: " << endl;
    cin >> num ; 
    
    for (int x = num; x >= 1; x--){
        for (int y = x; y > 0 ; y--){
            cout << "* " ;
        }
        cout << endl;
    }
    
    */
    return 0;
}
