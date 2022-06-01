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
void MyDinArr::swap(MyDinArr& other,MyDinArr&other2) {
	 MyDinArr tmp;
	 tmp = other;
	 other = other2;
	 other2 = tmp;

 }
void MyDinArr::push_back(int value) {

	int *tmp = new int[size + 1];

	for (int i = 0; i < size; i++) {
		tmp[i] = this->data[i];
	}
	size += 1;
	for (int i = 0; i < this->size - 1; i++) {
		this->data[i] = tmp[i];
	}
	data[size - 1] = value;
	delete[]tmp;
}


const int *MyDinArr::Data()const {
	return data;
}


void MyDinArr::emplace_back(int index) {
	push_back(data[index]);
}

 




