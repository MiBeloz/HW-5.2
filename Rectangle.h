#pragma once


#include "Parallelogram.h"


class Rectangle : public Parallelogram {
public:
	Rectangle(const int lengthAC, const int lengthBD) : Parallelogram(lengthAC, lengthBD, 90, 90) {}

	std::string getName() override { return "Прямоугольник"; }
};

