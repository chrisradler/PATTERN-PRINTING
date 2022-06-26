#include <iostream>

using namespace std;

int main()
{
    /*
    *
    * *
    * * *
    * * * *
    */
    
    /*
    int height ;
    cout << "Please enter the height: " ;
    cin >> height ; 
    
    for (int x = 1; x <= height; x++){
        for (int y = 1; y <= x; y++){
            cout << "* ";
        }
        cout << endl;
    }
        
        */
    int height ;
    cout << "Please enter the height: " ;
    cin >> height ; 
    
    int x = 1 ; 
    while ( x <= height){
        int y = 1;
        while ( y <= x){
            cout << "* ";
            y++;
        }
        cout << endl;
        x++;
    }
    
    

    return 0;
}


