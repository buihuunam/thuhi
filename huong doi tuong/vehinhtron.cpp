#include <iostream>
#include <cmath>
#include <SFML/Graphics.hpp>

class Ellipse {
public:
    Ellipse(double _a, double _b) : a(_a), b(_b) {}

    double calculateArea() const {
        return 3.14159265 * a * b;
    }

protected:
    double a, b;
};

class Circle : public Ellipse {
public:
    Circle(double _r) : Ellipse(_r, _r), r(_r) {}

    double calculateArea() const {
        return 3.14159265 * r * r;
    }

    double getRadius() const {
        return r;
    }

private:
    double r;
};

int main() {
    double radius;
    std::cout << "Nhap ban kinh cua hinh tron: ";
    std::cin >> radius;

    Circle circle(radius);

    // Khởi tạo một cửa sổ đồ họa sử dụng SFML
    sf::RenderWindow window(sf::VideoMode(400, 400), "Hinh Tron");

    // Tạo một hình tròn đồ họa
    sf::CircleShape shape(circle.getRadius());
    shape.setFillColor(sf::Color::Blue);
    shape.setPosition(200 - circle.getRadius(), 200 - circle.getRadius());

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }

        window.clear();
        window.draw(shape);
        window.display();
    }

    return 0;
}
