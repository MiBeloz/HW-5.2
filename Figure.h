#pragma once


#include <string>


class Figure {
public:
	Figure() : sides{} {}

	virtual std::string getName() { return "Фигура"; }

	int getSides() { return sides; }

	virtual std::string getAllLengths() { return "Стороны=0"; };

	virtual std::string getAllAngles() { return "Углы=0"; };

protected:
	Figure(const int _sides) { sides = _sides; }

private:
	int sides;
};

