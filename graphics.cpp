#include <SFML/Graphics.hpp>
#include <iostream>

using namespace sf;
using namespace std;

int main(int argc, char const *argv[])
{
  RenderWindow window(VideoMode(800, 600), "SFML Game");
  int x = 0;
  int y = 0;
  CircleShape circle (10,10);
  circle.setFillColor(Color::Red);
  while (window.isOpen())
  {
    Event event;
    while (window.pollEvent(event))
    {
      if (event.type == Event::Closed)
      {
        window.close();
      }
    }
    cout << "Enter x and y [eg. 100 200]: ";
    cin >> x >> y;
    circle.setPosition(x, y);
    window.clear();
    window.draw(circle);
    window.display();
  }
  return 0;
}
