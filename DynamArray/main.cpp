#include<iostream>
#include"DinArr.h"
using namespace std;
int main(){
	MyDinArr q(4, new int[] {1, 2, 3, 4});
	MyDinArr a(5, new int[]{1,55,7,9,3});
	a.print_array();
	MyDinArr b(a);
	MyDinArr c(3, new int[] {4, 2, 7});
	cout << endl;
	b.print_array();
	cout<<"\nb[1] = " << b[1];
	cout << endl;
	//c=a = b;
	c.print_array();
	cout << endl;
	cout << "at = " << a.at(2) << endl;;
	cout << "front = " << a.front()<< endl;
	cout << "back = " << a.back() << endl;
	cout<<"Capacity = "<< a.capacity()<<endl;
	cout << "empty = " << a.empty() << endl;
	cout << "size = " << a.size() << endl;
	cout << "c = "; c.print_array(); cout << endl;
	cout << "a = "; a.print_array(); cout << endl;
	cout << "swap\n";
	swap(a, c);
	cout << "c = "; c.print_array(); cout << endl;
	cout << "a = "; a.print_array(); cout << endl;
	cout << endl;
	a.push_back(100);
	cout << "push_back\n";
	cout << "a = "; a.print_array(); cout << endl;
	cout << endl;
	cout<<"data = "<<a.data();
	cout << endl;
	cout << "q = "; q.print_array();
	cout << "\nreserve"; q.reserve(3);
	cout << "\nq = "; q.print_array();
	cout << "\npop_back = "; q.pop_back(); q.print_array();
	cout << "\nq = "; q.print_array();
	cout << "\nresize\n"; q.resize(15); q.print_array();
	cout << "\nerase\n"; q.erase(6,15); q.print_array();
	//cout << "\ninsert = "; q.insert(4, 7, 2); q.PrintArray();
	system("pause>null");
	return 0;
}