#include <SFML/Graphics.hpp>

sf::RectangleShape drawRectangle(int x, int y, int width, int height)
{
    // rectangle
    sf::RectangleShape rectangle(sf::Vector2f(width, height));
    rectangle.setFillColor(sf::Color(100, 250, 50));
    rectangle.setPosition(x, y);
    return rectangle;
}

int main()
{
    sf::ContextSettings settings;
    settings.antialiasingLevel = 8;
    sf::RenderWindow window(sf::VideoMode(1280, 720), "Multimedia Engine", sf::Style::Default, settings);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(drawRectangle(200, 200, 500, 100));
        window.draw(drawRectangle(200, 400, 500, 100));

        window.display();
    }

    return 0;
}