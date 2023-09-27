#include <SFML/Graphics.hpp>
#include <iostream>

using namespace sf;
using namespace std;

const int gameWidth = 800;
const int gameHeight = 600;

sf::Texture spritesheet;
sf::Sprite invader;

void Load() {
  if (!spritesheet.loadFromFile("res/img/invaders_sheet.png")) {
    cerr << "Failed to load spritesheet!" << std::endl;
  }
  invader.setTexture(spritesheet);
  invader.setTextureRect(IntRect(Vector2(0, 0), Vector2(32, 32)));

}

void Render(RenderWindow& window) {
  window.draw(invader);
}

int main() {
    RenderWindow window(VideoMode({ gameWidth, gameHeight }), "PONG");
    Load();
    while (window.isOpen()) {
        window.clear();
        Render(window);
        window.display();
    }
    return 0;
}