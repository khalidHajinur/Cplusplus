#include<stdio.h>
using namespace std;
#include<cmath>
#define PI 3.14159265358979323846
void main(){
double U,T,R;
	printf("*******************************************\n");
	printf("* Speed(m/s) * Angle(degrees) *  Range(m) *\n");
	printf("*******************************************\n");
	for(U=10; U<=40; U+=10){
			for(T=15; T<=75; T+=15){
				double radian;
				radian= T*2*PI/360;
				R = U * U * sin( 2 * radian ) / 9.8;    printf("*    %3.0f     *      %3.0f       *  %7.2f  *\n", U, T, R);

			}




	}
		printf("*******************************************\n");
}