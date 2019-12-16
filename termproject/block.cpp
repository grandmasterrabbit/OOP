#include "block.h"
#include <ctime>

Block::block(){
	this->x = 2;
	this->y = 0;
	this->color = Rand((unsigned int)time(0));
	this->r = 0
}
Block::block(int x, int y, int color){
	this->x = x;
	this->y = y;
	this->color = color;
	this->r = 0;
}

void Block::a(){
	this->x = this->x -1;
}
void Block::d(){
	this->x = this->x +1;
}
void Block::s(){
	this->y = this->y +1;
}

void Block::e(){
	int newR = (this->r==3)?0:(this->r+1);
	this->r = newR;
}

void Block::q(){
	int newR = (this->r==0)?3:(this->r-1);
	this->r = newR;
}

	
};
