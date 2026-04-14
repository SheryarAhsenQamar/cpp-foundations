//Switch_Practice-program No.01
// Take a number 1 to 7. Print the day name 
// (1 = Monday, 2 = Tuesday ... 7 = Sunday).
//  If the number is anything else, print "Invalid day".
#include <iostream>
using namespace std;

int main(){
int day;
cout<<"Enter the number:"<<endl;
cin>>day;

switch(day)
{
case 1:
cout<<"MonDay"<<endl;
break;
case 2:
cout<<"TuesDay"<<endl;
break;
case 3:
cout<<"WednesDay"<<endl;
break;
case 4:
cout<<"ThursDay"<<endl;
break;
case 5:
cout<<"FriDay"<<endl;
break;
case 6:
cout<<"SaturDay"<<endl;
break;
case 7:
cout<<"SunDay"<<endl;
break;


default:
cout<<"Invalid Day"<<endl;

}


    return 0;
}