#ifndef BIKE_H
#include "vehicle.h"

class bike : public vehicle {
	private:
	       	char* bike_name;
		int bike_number;
	public:
		bike();
		bike(int wn, int ms);
		bike(int wn, int ms, char* bname);
		bike(int wn, int ms, char* bname, int bnumber);
		bike(int wn, int ms, char* bname, int bnumber, bool hn);
		//wheel_number, max_speed, bike_name, bike_number, has_name

		int get_bike_number();
		char* get_bike_name();
		const char* get_class_name();

		void set_bike_name(char* bname);
		void set_bike_number(int bnumber);
};
#endif
