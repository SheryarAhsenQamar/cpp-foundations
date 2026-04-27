#include <iostream>
using namespace std;
int main(){
//{/
 //   for(int i = 0; i <= 10; i++) 
 ///   {
// /       // code
  //     cout<<i<<endl;
 //       if(i==2){
  //      break;}
 //      
 //   return 0;
//}


    for(int i = 0; i <= 10; i++) {

        if(i == 2) {
            continue;   // skip when i = 2
        }

        cout << i << endl;
    }

    return 0;
}