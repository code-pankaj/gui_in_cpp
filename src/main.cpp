#include <SFML/Graphics.hpp>

int main() {
    // Create a window with dimensions 800x600 and title "SFML Window"
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML Window");

    // Main loop to keep the window open
    while (window.isOpen()) {
        sf::Event event;
        // Check for events (e.g., closing the window)
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();  // Close the window when "close" event is triggered
        }

        // Clear the window with black color
        window.clear(sf::Color::Black);

        // Display the rendered frame on the window
        window.display();
    }

    return 0;
}
