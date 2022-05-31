#include<iostream>
#include"DinArr.h"
using namespace std;
MyDinArr::MyDinArr() {};
MyDinArr::MyDinArr(int size, int* data) {
	this->size = size;
	this->capacity = size;
	this->data = new int[size];
	for (int i = 0; i < size; i++)
		this->data[i] = data[i];
};
MyDinArr::~MyDinArr() {
	if (data != nullptr)
		delete[]data;
}
//Конструктор копирования
MyDinArr::MyDinArr(const MyDinArr& other) {
	
	this->size = other.size;
	this->capacity = size;
	this->data = new int[other.size]{};
	for (int i = 0; i < this->size; i++)
		this->data[i] = other.data[i];
}
void MyDinArr::PrintArray()const {
	for (int i = 0; i < size; i++)
		cout << data[i]<<" ";
}
int& MyDinArr::operator[](int index) {
	return data[index];
}
 MyDinArr& MyDinArr::operator= (const MyDinArr& other) {
	this->size = other.size;
	if (this->data != nullptr) {
		delete[]this->data;
	}
	this->data = new int[other.size]{};
	for (int i = 0; i < this->size; i++)
		this->data[i] = other.data[i];
	return *this;
}
 bool MyDinArr::operator==(const MyDinArr&& other) {
	 if (this->size != other.size)return false;
	 if (this->size == other.size) {
		 for (int i = 0; i < this->size; i++) {
			 if (this->data[i] != other.data[i])
				 return false;
		 }
		 return true;
	 }
 }
 int &MyDinArr::at(int index) {
	 return data[index];
}
 int& MyDinArr::front()const {
	 return data[0];
 }
 int& MyDinArr::back()const {
	 return data[size - 1];
 }
 int MyDinArr::Capacity()const {
	 return capacity;
 }
 bool MyDinArr::empty() {
	 if(capacity > 0) return false;  return true;
 }
 int  MyDinArr::Size() const{
	 return this->size;
 }
 void MyDinArr::clear() {
	 delete[]data;
	 size = 0;
 }
 void MyDinArr::swap(MyDinArr& other) {
	 int tmpsize;
	 tmpsize = this->size;
	 this->size = other.size;
	 other.size = tmpsize;
	 int* tmpdata =data;
	 







	 


 }
 //int* MyDinArr::data()const {
	// return this->data;

 //}


