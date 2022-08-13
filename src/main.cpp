#include <SFML/Graphics.hpp>

int main()
{
    sf::ContextSettings settings;
    settings.antialiasingLevel = 8;
    sf::RenderWindow window(sf::VideoMode(1280, 720), "Multimedia Engine", sf::Style::Default, settings);

    // rectangle
    sf::RectangleShape rectangle(sf::Vector2f(500.f, 500.f));
    rectangle.setFillColor(sf::Color(100, 250, 50));
    rectangle.setPosition(200.f, 200.f);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(rectangle);
        window.display();
    }

    return 0;
}