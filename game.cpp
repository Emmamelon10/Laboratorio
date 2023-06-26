#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include<cstdlib>
#include "Tablero.cpp"

using namespace sf;
using namespace std;

int tiles[10][10];


int main()
{
	int Random= aleatorio();
	Vertex Tablero;
	int Candys[10][10];
	Texture caquis;
	if(!caquis.loadFromFile("resources/graphics/Candys.png"))
	{
		system("echo No se pudo encontrar (Candys.png) &pause");
		return EXIT_FAILURE;
	}
    // Create the main window
    RenderWindow window(VideoMode(1200, 800), "3 Flipendo:Also try Terraria");
    // Load a sprite to display
    Texture texture;
    if (!texture.loadFromFile("resources/graphics/Background.jpg"))
    {
    	system("echo No se pudo cargar o encontrar la imagen &pause");
    	return EXIT_FAILURE;
	}
	Sprite sprite;
    sprite.setTexture(texture);
	
	
	
	Texture tTable;
	if(!tTable.loadFromFile("resources/graphics/Table.png"))
	{
			system("echo No se pudo cargar o encontrar la imagen(Table.png) &pause");
    	return EXIT_FAILURE;
	}
	Sprite Table;
    Table.setTexture(tTable);
    Table.setPosition(100,0);
    Table.setScale(2,2);
    
    
	Texture tBlue;
	if(!tBlue.loadFromFile("resources/graphics/Blue.png"))
	{
		system("echo No se pudo cargar o encontrar la imagen(Blue.png) &pause");
		return EXIT_FAILURE;
	}
    Sprite Blue;
    Blue.setTexture(tBlue);
    Blue.setPosition(140,140);
	
	
	
	
	Texture tGreen;
	if(!tGreen.loadFromFile("resources/graphics/Green.png"))
	{
		system("echo No se pudo cargar o encontrar la imagen(Green.png) &pause");
		return EXIT_FAILURE;
	}
	Sprite Green;
	Green.setTexture(tGreen);
	Green.setPosition(190,140);
	
	
	

	Texture tRed;
	if(!tRed.loadFromFile("resources/graphics/Red.png"))
	{
		system("echo No se pudo cargar o encontrar la imagen(Red.png) &pause");
		return EXIT_FAILURE;
	}
	Sprite Red;
	Red.setTexture(tRed);
	Red.setPosition(240,140);
	
	

	
    
    // Create a graphical text to display
    Font font;
    if (!font.loadFromFile("resources/04B_30__.ttf")){
    system("echo No se pudo cargar o encontrar la fuente &pause");
    return EXIT_FAILURE;
	}
    Text text("3 FLIPENDO", font, 50);
    // Load a music to play
    Music music;
    if (!music.openFromFile("resources/audio/Music.ogg")){
    system("echo No se pudo cargar o encontrar el audio &pause");
	    return EXIT_FAILURE;
	}
    // Play the music
    music.play();
    music.setLoop(true);
    // Start the game loop
    while (window.isOpen())
    {
        // Process events
        Event event;
        while (window.pollEvent(event))
        {
            // Close window: exit
            if (event.type == Event::Closed)
                window.close();
        }
        // Clear screen
        window.clear();
        // Draw the sprite
        window.draw(sprite);
        window.draw(Table);
        // Draw the string
        //window.draw(text);
        // Update the window
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<10;j++)
		{
			Candys[i][j]=Random;
			Tablero.position=Vector2f(i*50.f,j*50.f);
			Tablero.texCoords=Vector2f(Candys[i][j]*50.f,0.f);
			window.draw(Tablero);
		}
	} 
        window.display();
    }
    return EXIT_SUCCESS;
}
