#include<iostream>
using namespace std;

class Book{
	private :
		int price;
		
	public :
		void setprice(int p){
			price = p;
		}
	
	public :
		int getprice(){
			return price;
		}
};

int main(){
	Book obj;
	
	obj.setprice(300);
	cout << obj.getprice();
	
	return 0;
}
