#include <iostream>
using namespace std;

int sum ( int a , int b ){
cout <<" using function with two arguments. "<<endl;
    return a+b;

}

int sum( int a , int b, int c ){
cout <<" using function with three arguments. "<<endl;
    return a+b+c;
}

/*calculate the volume of the cylinder .*/

int volume( double r , int h ){


    return( 3.14 * r * r * h);
}

/*calculate the volume of the cube.*/
int volume( int a ){

    return(a * a * a);
}
/* volume of the rectangulart Box*/

int volume ( int l , int b , int  h){

    return( l * b * h );


}

int main() {
    

cout<< " The sum of 4 and 5 is :"<<sum(4 , 5)<<endl;
cout<< " The sum of 4 , 5 and 6 is :"<<sum(4 , 5 , 6)<<endl;

cout<<"....................................................................................."<<endl;

cout << " The volume of cuboid  3 , 6 and 7 is: "<< volume ( 3, 6, 7)<<endl;
cout << " The volume of cylinder radius 3 and height 6 is: "<< volume ( 3,6)<<endl;
cout << " The volume of cube of side  3  is: "<< volume ( 3)<<endl;




    return 0;
}