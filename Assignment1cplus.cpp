#include<iostream>
using namespace std;
#include<cmath>
#define PI 3.14159265358979323846
void main(){
double U,T,R;
cout.setf(ios::fixed);
	cout<<"*******************************************" <<endl;
	cout<<"* Speed(m/s) * Angle(degrees) *  Range(m) *" <<endl;
	cout<<"*******************************************" <<endl;
	for(U=10; U<=40; U+=10){
			for(T=15; T<=75; T+=15){
				double radian;
				radian= T*2*PI/360;
				R = U * U * sin( 2 * radian ) / 9.8;
    cout.precision(0);
	cout.width(3); 
	cout<<"*     " << U      << "     *       ";
	cout.precision(0);
	cout.width(3);
	cout<< T 
		<<"      *  ";
	cout.precision(2);
	cout.width(7);
	cout<< R<<"  *"<<endl;


			}







	}
		cout<<"*******************************************"<<endl;
}