#include<iostream>
#include<math.h>

using namespace std;

int main(){
	int a , b, c , disk , kok1, kok2;
	
	cout<<"Lutfen ax^2 + bx + c = 0 biciminde olacak denkleminizi girin(a,b,c deger verin)"<<endl;
	cout<<"a:";
	cin>>a;
	cout<<"b:";
	cin>>b;
	cout<<"c:";
	cin>>c;
	cout<<"girmis oldugunuz denklem:"<<a<<"x^2 + "<<b<<"x + "<<c<<" = 0'dir"<<endl;
	disk=b*b-4*a*c;
	
	if(disk>=0){
		cout<<"Girmis oldugunuz "<<a<<"x^2 + "<<b<<"x + "<<c<<" = 0 denkleminin kokleri:"<<endl;
		
		kok1= (-b + sqrt(disk))/ 2*a;
		kok2= (-b - sqrt(disk))/ 2*a;
		
		cout<<"1.kok:"<<kok1<<endl;
		cout<<"2.kok:"<<kok2<<endl;
	}
	else{
		cout<<"Girmis oldugunuz "<<a<<"x^2 + "<<b<<"x + "<<c<<" = 0 denkleminin reel koku yoktur!"<<endl;
	}
	cout<<endl;
	cout<<endl;
	cout<<endl;
	
	cout<<"Bekir Burak SAKA"<<endl;
	cout<<"221030910008";
	return 0;
}
