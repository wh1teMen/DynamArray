#include<iostream>
#include"DinArr.h"
//insert
//erase
//resize - 
//swaps the contents
using namespace std;
int main(){
	MyDinArr q(4, new int[] {1, 2, 3, 4});
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
	a.push_back(100);
	cout << "push_back\n";
	cout << "a = "; a.PrintArray(); cout << endl;
	cout << endl;
	cout<<"data = "<<a.Data();
	cout << endl;
	cout << "q = "; q.PrintArray();
	cout << "\nreserve"; q.reserve(3);
	cout << "\nq = "; q.PrintArray();
	cout << "\npop_back = "; q.pop_back(); q.PrintArray();
	//cout << "\ninsert = "; q.insert(4, 7, 99); q.PrintArray();
	system("pause>null");
	return 0;
}