#include<iostream>
#include"DinArr.h"
//reserve 
//shrink_to_fit - size 10 capasity 90 ^ 80 возвращ
//insert
//erase
//emplace_back//
//pop_back
//resize - 
//swaps the contents
using namespace std;
int main(){
	MyDinArr a(5, new int[]{1,55,7,9,3});
	a.PrintArray();
	MyDinArr b(a);
	MyDinArr c(3, new int[] {4, 2, 7});
	cout << endl;
	b.PrintArray();
	cout<<"\nb[1] = " << b[1];
	cout << endl;
	//c=a = b;
	c.PrintArray();
	cout << endl;
	cout << "at = " << a.at(2) << endl;;
	cout << "front = " << a.front()<< endl;
	cout << "back = " << a.back() << endl;
	cout<<"Capacity = "<< a.Capacity()<<endl;
	cout << "empty = " << a.empty() << endl;
	cout << "size = " << a.Size() << endl;
	cout << "c = "; c.PrintArray(); cout << endl;
	cout << "a = "; a.PrintArray(); cout << endl;
	cout << "swap\n";
	swap(a, c);
	cout << "c = "; c.PrintArray(); cout << endl;
	cout << "a = "; a.PrintArray(); cout << endl;
	cout << endl;
	a.push_back(99);
	cout << "push_back\n";
	cout << "a = "; a.PrintArray(); cout << endl;
	cout << endl;
	cout<<a.Data();


	system("pause>null");
	return 0;
}