#include "bike.h"

bike::bike():vehicle(){}
bike::bike(int wn, int ms):vehicle(wn, ms){}
bike::bike(int wn, int ms, char* bname):vehicle(wn, ms){
	this->set_bike_name(bname);
}
bike::bike(int wn, int ms, char* bname, int bnumber):vehicle(wn, ms){
	this->set_bike_name(bname);
	this->set_bike_number(bnumber);
}
bike::bike(int wn, int ms, char* bname, int bnumber, bool hn):vehicle(wn, ms, hn){
	this->set_bike_name(bname);
	this->set_bike_number(bnumber);
}

int bike::get_bike_number(){
	return this->bike_number;
}
char* bike::get_bike_name(){
	return this->bike_name;
}
const char* bike::get_class_name(){
	return "bike";
}

void bike::set_bike_name(char* bname){
	this->bike_name = bname;
}
void bike::set_bike_number(int bnumber){
	this->bike_number = bnumber;
}
