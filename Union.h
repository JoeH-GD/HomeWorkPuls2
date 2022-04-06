#pragma once
union MyData {
	int age;
	float height;
	char alias;
};

struct MyVariant {
	MyData Me;

	unsigned int IsNumber : 1;
	unsigned int IsSymbol : 1;
	unsigned int IsFloat : 1;

};

