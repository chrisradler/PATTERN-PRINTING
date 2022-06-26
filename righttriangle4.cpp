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
    
    
    /*
   int height ; 
    cout << "Please enter the height: " << endl;
    cin >> height;
    for (int x = height; x >= 1; x--){
       
       // Printing _ 
       for(int y = height- x; y > 0; y--)
       {
           cout <<" ";
       }
       for(int z = x; z > 0; z--){
           cout <<"*";
       }
       
         cout <<endl;
        
    }
    */
    int n;
    cin >> n;
    cout << endl;

    int x = 1;
    while (x <= n)
    {
        int y = x - 1;  
        while ( y >= 1)  
        {
            cout << " ";
            y--;      
        }
        int z = x ;        
        while ( z <= n )
        {
            cout << "*";
            z++;
        }
        cout << endl;
        
        x++;
    }
    

    return 0;
}

