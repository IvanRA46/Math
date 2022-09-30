#include "Trig.h"
#include <math.h>
#define PI 3.1415926536
#include <iostream>

using namespace std;
Trig::Trig(float x) {
	this->x = x;
}

void Trig::Ang(float x) {
    float rad, seno, coseno, tang;
    rad = x * PI / 180;
    seno = sin(rad);
    coseno = cos(rad);
    tang = tan(rad);
    cout << "El seno es: " << seno << "\n";
    cout << "El coseno es: " << coseno << "\n";
    cout << "La tangente es: " << tang << "\n";

}