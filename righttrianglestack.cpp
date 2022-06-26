#include <iostream>

using namespace std;

int main()
{
    
    
    /*
       *
     * *
   * * *
 * * * *
 * * * * 
   * * *
     * *
       *
       
       */
    int num ; 
    cout << "Please enter the height: " << endl;
    cin >> num;
    for (int x = 0; x < num; x++){
       
       // Printing _ 
       for(int y =  x; y <num -1; y++ )
       {
           cout <<" ";
       }
       for(int z = 0; z <= x; z++  ){
           cout <<"*";
       }
       
         cout <<endl;
        
    }

    for (int x = num; x >= 1; x--){
       
       // Printing _ 
       for(int y = num- x; y > 0; y--)
       {
           cout <<" ";
       }
       for(int z = x; z > 0; z--){
           cout <<"*";
       }
       
         cout <<endl;
        
    }
    return 0;
}

