#include <iostream>
using namespace std; 

class Circle {
public:
int radius;
Circle();
Circle(int r);
};
Circle::Circle() {
radius = 1;
}
Circle::Circle(int r) {
radius = r;
}