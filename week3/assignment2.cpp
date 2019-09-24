#include <iostream>

int main(){
	char* a = "ABC";
	char b[] = "ABC";

	a[0] = 'b';
	b[0] = 'a'; //b가 수정 가능함을 확인
	std::cout<<a<<std::endl;
	std::cout<<b<<std::endl;
}
