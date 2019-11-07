#ifndef CAR_H
#include "vehicle.h"

class car : public vehicle {
	private:
		char* car_name;
	public:
		car();
		car(int wn, int ms);
		car(int wn, int ms, char* cn);
		car(int wn, int ms, char* cn, bool hn);
		//wheel_number, max_speed, car_name, has_name

		char* get_car_name();
		const char* get_class_name();

		void set_car_name(char* cn);
};
#endif
