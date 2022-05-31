#include<iostream>
#include"DinArr.h"
//reserve
//shrink_to_fit
//insert
//erase
//push_back
//emplace_back
//pop_back
//resize
//swap
//swaps the contents
using namespace std;
int main(){
	MyDinArr a(5, new int[]{1,55,7,9,3});
	a.PrintArray();
	MyDinArr b(a);
	MyDinArr c;
	cout << endl;
	b.PrintArray();
	cout<<"\nb[1] = " << b[1];
	cout << endl;
	c=a = b;
	c.PrintArray();
	cout << endl;
	cout << "at = " << a.at(2) << endl;;
	cout << "front = " << a.front()<< endl;
	cout << "back = " << a.back() << endl;
	cout<<"Capacity = "<< a.Capacity()<<endl;
	cout << "empty = " << a.empty() << endl;
	cout << "size = " << a.Size() << endl;


	system("pause>null");
	return 0;
}