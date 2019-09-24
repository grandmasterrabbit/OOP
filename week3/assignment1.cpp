#include <iostream>

int* code(){ //함수
	puts("Hello, world!");
	return 0;
}

const int rodata = 3; //변경되지 않는 상수

int data = 0; //전역변수

int bss; //초기화되지 않은 전역변수가 할당

int* heap = (int*)malloc(sizeof(int)*5); //동적 할당

int main(){
	int stack;//지역변수
	
	std::cout<<"code\t"<<(void*)code<<std::endl;
	std::cout<<"Rodata\t"<<(void*)rodata<<std::endl;
	std::cout<<"data\t"<<&data<<std::endl;
	std::cout<<"BSS\t"<<&bss<<std::endl;
	std::cout<<"HEAP\t"<<&heap<<std::endl;
	std::cout<<"Stack\t"<<&stack<<std::endl;
}
