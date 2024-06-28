#include "Number.h"

Number::Number(int value)
	:value(new int(value))
{}

Number::Number(const Number& other)
	:value(new int(other.GetValue()))
{}

Number::~Number() {
	delete[] value;
	value = nullptr;
}

int Number::GetValue() const {
	return value != nullptr ? *value : 0;
}