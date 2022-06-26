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
    cout << "Please enter the height: " << endl;
    cin >> height;
    for (int x = 0; x < height; x++){
       
       // Printing _ 
       for(int y =  x; y <height -1; y++ )
       {
           cout <<" ";
       }
       for(int z = 0; z <= x; z++  ){
           cout <<"*";
       }
       
         cout <<endl;
        
    }
*/

    int height ; 
    cout << "Please enter the height: " << endl;
    cin >> height;
    
    int x = 0;
    while (x < height) {
        
        int y = x ; 
        while ( y < height -1){
            cout << " " ; 
            y++;
        }
            int z = 0;
            while (z <=x) {
                cout << "*" ; 
                z++;
            }
        
        cout << endl;
        
        x++;
    }

    return 0;
}

