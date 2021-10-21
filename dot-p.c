#include<stdio.h>
#include <math.h>
struct VECTOR{
	float i;
	float j;
	float k;
	float magnitude;	
	};
//=sqrt((i*i)+(j*j)+(k*k));
struct VECTOR __init__(float i,float j,float k);
int main(){
	struct VECTOR a;
	struct VECTOR b;
	a=__init__(1,2,3);
	printf("\n%fi + %fk + %fk\n mgnde=%f",a.i,a.j,a.k,a.magnitude);
	
	
}
struct VECTOR __init__(float i,float j,float k){
		struct VECTOR a;
		a.i=i;
		a.j=j;
		a.k=k;
			float x_sq=((a.i)*(a.i));
			float y_sq=((a.j)*(a.j));
			float z_sq=((a.k)*(a.k));		    		    
		    float magnitude=sqrt(x_sq+y_sq+z_sq);
		a.magnitude=magnitude;
		
		return (a); 	
}