//
// Created by 김혁진 on 2019/10/28.
//

#include "human.h"

human::human() {
    // TODO: Fill it
	this->name = nullptr;
    // name 의 default 값을 nullptr로 지정
}

human::human(char name[]) {
    // TODO: Fill it
	this->name = name;
    // name 의 값을 지정
}

char *human::get_name() {
    // TODO: Fill it
	return this->name;
    // name 의 값을 반환하게 구현
}

int human::get_id() {
    // TODO: Fill it
	return 0;
    // 0을 리턴하도록 구현
}
