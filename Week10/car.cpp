#include "car.h"

car::car():vehicle(){}
car::car(int wn, int ms):vehicle(wn, ms){}
car::car(int wn, int ms, char* cn):vehicle(wn, ms){
	this->set_car_name(cn);
}
car::car(int wn, int ms, char* cn, bool hn):vehicle(wn, ms, hn){
	this->set_car_name(cn);
}

char* car::get_car_name(){
	return this->car_name;
}
const char* car::get_class_name(){
	return "car";
}

void car::set_car_name(char* cn){
	this->car_name = cn;
}
