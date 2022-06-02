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
const int* MyDinArr::Data()const {
	return data;
}
void MyDinArr::reserve(int value) {
	size = this->size;
	int* tmp = new int[size];
	for (int i = 0; i < size; i++) {
		tmp[i] = data[i];
	}
	delete[]data;
	this->capacity =size+value;
	this->size = this->capacity;
	data = new int[capacity] {};
	for (int i = 0; i < capacity-value; i++) {
		data[i] = tmp[i];
	}
	delete[]tmp;
}
void MyDinArr::shrink_to_fit() {
	int* tmp = new int[size];
	for (int i = 0; i < size; i++) {
		tmp[i] = data[i];
	}
	capacity = size;
	delete[]data;
	data = new int[capacity];
	for (int i = 0; i < capacity; i++) {
		data[i] = tmp[i];
	}
	delete[]tmp;
}
void MyDinArr::emplace_back(int value) {
	int* tmp = new int[size + 1];

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
void MyDinArr::pop_back() {

	int* tmp = new int[size];
	for (int i = 0; i < size; i++) {
		tmp[i] = data[i];
	}
	delete[]data;
	size -= 1;
	data = new int[size] {};
	for (int i = 0; i < size; i++) {
		data[i] = tmp[i];
	}
	delete[]tmp;
}
//void MyDinArr::insert(int index, int value, int count) {
//	if (capacity < size + count)
//		this->reserve(count);
//	this->size += count;
//	int* tmp = new int[size];
//	for (int i = 0; i < index; i++) {
//		tmp[i] = data[i];
//	}
//	for (int i = index; i < index + count; i++) {
//		tmp[i] = value;
//	}
//	for (int i = index + count; i < size; i++) {
//		tmp[i]=data[i - count];
//	}
//	delete[]data;
//	data = new int[capacity];
//	for (int i = 0; i < size; i++) {
//		data[i]=tmp[i];
//	}
//	delete[]tmp;
//
//}
 




