#include "../headers/WorldSpace.h"

//return this vectors magnitude
float fVector::operator-() {
	return sqrt(q * q + r * r + s * s);
}

//return the normalisation of this vector
fVector fVector::operator+() {
	float magnitude = sqrt(q * q + r * r + s * s);

	if (magnitude == 0) {
		return fVector();
	}

	float tq = q == 0 ? 0 : q / magnitude;
	float tr = r == 0 ? 0 : r / magnitude;
	float ts = s == 0 ? 0 : s / magnitude;

	return fVector(tq, tr, ts);
}

//normalise this vector
void fVector::operator++() {
	float magnitude = sqrt(q * q + r * r + s * s);

	if (magnitude != 0) {
		q = q == 0 ? 0 : q / magnitude;
		r = r == 0 ? 0 : r / magnitude;
		s = s == 0 ? 0 : s / magnitude;
	}
}

//make readable string
std::string fVector::toString() {
	std::string result;
	result += "q:";
	result += std::to_string(q);
	result += " r:";
	result += std::to_string(r);
	result += " s:";
	result += std::to_string(s);

	return result;
}