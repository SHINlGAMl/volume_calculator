#include<process.h>
#include<iostream>
using namespace std;

float VOLUME(float a)
{
	return(a*a*a);
}
 float VOLUME(float r, float h)
 {
 	return (3.14*r*r*h);
 }
float VOLUME( float l, float b, float x)
{
	 return(l*b*x);
}
int main()
{
float x,y,z,e,f,g;
int a;
 start:
cout<<"\n________________________ "<<endl
	<<"|                      | "<<endl
	<<"|        VOLUME        |"<<endl
	<<"|1.VOLUME OF CUBE      |"<<endl
	<<"|2.VOLUME OF CYLINDER  |"<<endl
	<<"|3.VOLUME OF CUBOID    |"<<endl
	<<"|4.EXIT                |"<<endl
	<<"|______________________|"<<endl
	<<"\nENTER YOUR OPTION  : ";
	cin>>a;
	switch(a)
	{
		case 1: cout<<"\nEnter side of cube : ";
		        cin>>x;
		        cout<<"\nVolume of Cube = "<<VOLUME(x)<<" cubic units";
		        break;
	    case 2: cout<<"\nEnter radius of cylinder : ";
		        cin>>y;
		        cout<<"\nEnter height of cylinder : ";
		        cin>>z;
		        cout<<"\nVolume of Cylinder = "<<VOLUME(y,z)<<" cubic units";
		        break;
				
	   case 3:  cout<<"\nEnter length of cuboid : ";
		        cin>>e;
		        cout<<"\nEnter breadth of cuboid : ";
		        cin>>f;
		        cout<<"\nEnter height of cuboid : ";
		        cin>>g;
		        cout<<"\nVolume of Cuboid = "<<VOLUME(e,f,g)<<" cubic units";
		        break;
	   case 4: exit(0);        
	}
	goto start;
		return 0;
}
