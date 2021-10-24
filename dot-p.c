#include<stdio.h>
#include <math.h>
#include <stdlib.h>
static void own_info();
float degree_to_radian(float deg);
struct VECTOR{
	float i;
	float j;
	float k;
	float magnitude;	
	};
//=sqrt((i*i)+(j*j)+(k*k));
struct VECTOR __init__(float i,float j,float k);
float dot_product(struct VECTOR a,struct VECTOR b,float angle);
int main(){
	own_info();
	float i1,j1,k1;
	float i2,j2,k2;
		printf("\nEnter Vector i,j,k co-efficient :\n");
		printf("\n\t\tVECTOR 1:\n");
		printf("\n i co-efficient :");
		scanf("%f",&i1);
		printf("\n j co-efficient :");
		scanf("%f",&j1);
		printf("\n k co-efficient :");
		scanf("%f",&k1);

printf("\n\n\t\t\tVECTOR 2:\n");
printf("\n i co-efficient :");
scanf("%f",&i2);
printf("\n j co-efficient :");
scanf("%f",&j2);
printf("\n k co-efficient :");
scanf("%f",&k2);

	struct VECTOR a;
	struct VECTOR b;
	float dot_p;
	/****************************
	 vector set initializer __init__
	 magnitude set up in struct VECTOR
	 data type above
	*****************************/
	a=__init__(i1,j1,k1);
	b=__init__(i2,j2,k2);
		float deg_angle=0;
		float rad_angle;
 rad_angle=degree_to_radian(deg_angle);
 dot_p=dot_product(a,b,rad_angle);
	//product angle range a€[0,π]
	while(deg_angle<=180){
		rad_angle=degree_to_radian(deg_angle);
		//pruduct
		dot_p=dot_product(a,b,rad_angle);	
		//printf("\n%.0fi + %fk + %fk\n mgnde=%f",angle,a.j,a.k,a.magnitude);
		if(deg_angle<90)
		printf("\n\033[32m%.0f° deg = %f rad |  a.b=|a||b|.cos(θ)==%f",deg_angle,rad_angle,dot_p);
		if(deg_angle==90)
		printf("\n\033[31m%.0f° deg = %f rad |  a.b=|a||b|.cos(θ)==%f",deg_angle,rad_angle,dot_p);
		if(deg_angle>90)
		printf("\n\033[93m%.0f° deg = %f rad |  a.b=|a||b|.cos(θ)==%f",deg_angle,rad_angle,dot_p);
	
		//printf("\n%.0f°==  %f",deg_angle,rad_angle);	
	deg_angle++;
    //deg_angle=deg_angle+0.001;
/****************
if linux os
*****************
*/
usleep(59000);
      
      
}	
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
float degree_to_radian(float deg){
		float rad;
		rad=(deg*(M_PI/180));		
		return rad; 
}
float dot_product(struct VECTOR a,struct VECTOR b,float rad_angle_between){
			float dot_p;
			//dot=ab cos();
			dot_p=(a.magnitude)*(b.magnitude)*cos(rad_angle_between);
			return dot_p;	
	
}

static void own_info(){
printf("\n\n\nAuthor : One-Exploits @GNU/Projects"
"\n©Mohammad Arquam(C.E.O)"
"\n+______________________________________________+"
"\n| Programmer,H@cker,Web developer,Web designer,|\n| Data Scientist,Software developer,YouTuber,  |\n| Blogger and more.\t\t\t       |\n|\t\t\t\t\t       |"
"\n| Gmail: oneexploits@gmail.com\t\t       |"
"\n| GitHub: https://github.com/one-exploits      |"
"\n| Insta: https://www.instagram.com/one_exploits\|"
"\n| Website: https://one-exploits.business.site/ |"
"\n|\t\t\t\t\t       |"
"\n| \t\t\tVersion:1.00.00\t       |\n"
"|\t\t\tDate:19/10/2021,Tue    |"
"\n+______________________________________________+");

}
