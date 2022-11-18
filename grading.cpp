#include <iostream>

using namespace std;

int main()
{
    double coursework;
    double written;
    double total;
    
    cout<<"Enter the coursework grade: ";
    cin >> coursework;
    
      cout<<"Enter the written exam grade: ";
    cin >> written;
    
    total = coursework + written;
    
    // moderations
    if ((coursework >= 15) && (written >= 15) && (total == 39))
    {
        total == 40;
      
    }
    if ((total > 39) && (coursework < 15) || (written < 15))
    {
        total == 39;

    }
    
    // grading
    
   
   if((total > 69) && (total < 100)){
       cout << total;
       cout <<"Grade A";
       
   }
    if((total > 59) && (total < 70)){
       cout << total;
       cout <<"Grade B";
       
   }
   if((total > 49) && (total < 60)){
       cout << total;
       cout <<"Grade C";
       
   }
    if((total > 39) && (total < 50)){
       cout << total;
       cout <<"Grade D";
       
   }
   if((total >= 0) && (total < 40)){
       cout << total;
       cout <<"Grade E";
       
   }


    return 0;
}
