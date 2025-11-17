#include<iostream>
using namespace std;
class Base {
	public :
		void display(){
			cout<<"display base ";
		}
		virtual void show(){
			cout<<"show base";
		}
};
class derived : public base{
	public:
		void display(){
			cout<<"display derived ";
		}
		void show(){
			cout<<"show derived ";
		}
};
int main(){
	base b;
	derived d;
	base *bptr;
	cout<<"bptr points to base ";
	bptr = &b;
	bptr->display();
	bptr->show();
}
