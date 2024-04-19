#include <iostream>
#include <ostream>

struct Vector2D {
    double x, y;
};

Vector2D operator+(const Vector2D& a, const Vector2D& b) {
    return Vector2D {
        a.x + b.x,
        a.y + b.y
    };
}

std::ostream& operator<<(std::ostream& stream, const Vector2D& b) {
    return stream << '{' << b.x << ", " << b.y << "}\n";
}

int main() {
    Vector2D a {0.5, 1.0};
    Vector2D b {1.5, 2.1};

    Vector2D c = a + b;

    std::cout << c << '\n';


}