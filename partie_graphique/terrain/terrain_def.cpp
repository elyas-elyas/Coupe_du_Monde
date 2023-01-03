#include<iostream>
#include<SFML/Graphics.hpp>
#include<math.h>
using namespace sf;
using namespace std;

void make_inaplayers(CircleShape& inaplayer, float inaplayerX, float inaplayerY)
{
	inaplayer.setRadius(20);
	inaplayer.setFillColor(Color::Green);
	inaplayer.setPosition(Vector2f(inaplayerX, inaplayerY));
}

void make_oppplayers(CircleShape& oppplayer, float oppplayerX, float oppplayerY)
{
	oppplayer.setRadius(20);
	oppplayer.setFillColor(Color::Red);
	oppplayer.setPosition(Vector2f(oppplayerX, oppplayerY));
}

void goal_points_system(int& points_by_opp_int, Text& points_by_opp, int& goal_by_opp_int, Text& goal_by_opp)
{
	points_by_opp_int++;
	if (points_by_opp_int >= 3)
	{
		points_by_opp_int = 0;
		points_by_opp.setString(to_string(points_by_opp_int));
		goal_by_opp_int++;
		goal_by_opp.setString(to_string(goal_by_opp_int));
	}
	else
	{
		points_by_opp.setString(to_string(points_by_opp_int));
	}
}

int main()
{
	RenderWindow window(VideoMode::getDesktopMode(), "Inazuma Eleven", Style::Fullscreen);
	window.setFramerateLimit(60);

restart_again:	
    float boundupY = 100; float bounddownY = 1000;
	float poleY1 = 350; float poleY2 = 650;
	Vertex middleline[] = { Vertex(Vector2f((window.getSize().x / 2), boundupY)), Vertex(Vector2f((window.getSize().x / 2), bounddownY)) };
	Vertex boundup[] = { Vertex(Vector2f(0.f, boundupY)), Vertex(Vector2f(window.getSize().x, boundupY)) };
	Vertex bounddown[] = { Vertex(Vector2f(0.f, bounddownY)), Vertex(Vector2f(window.getSize().x, bounddownY)) };
	Vertex poleopp[] = { Vertex(Vector2f(10.f, poleY1)), Vertex(Vector2f(10.f, poleY2)) };
	Vertex poleplay[] = { Vertex(Vector2f(window.getSize().x - 10.f, poleY1)), Vertex(Vector2f(window.getSize().x - 10.f, poleY2)) };


	Clock timer;

	Text timer_text;
	timer_text.setCharacterSize(50);
	timer_text.setFillColor(Color::White);
	timer_text.setPosition(Vector2f((window.getSize().x / 2) - 20, 10));

restart:
	CircleShape goalkeeperopp;
	goalkeeperopp.setRadius(20);
	goalkeeperopp.setFillColor(Color::Red);
	goalkeeperopp.setPosition(Vector2f(20.f, poleY1));

	CircleShape goalkeeperplay;
	goalkeeperplay.setRadius(20);
	goalkeeperplay.setFillColor(Color::Green);
	goalkeeperplay.setPosition(Vector2f((window.getSize().x - (2 * goalkeeperopp.getRadius())) - 20.f, poleY2 - (2 * goalkeeperopp.getRadius())));

	CircleShape football;
	football.setRadius(10);
	football.setFillColor(Color::Yellow);

	CircleShape inaplayer[10];
	int make_ina_active = 0;
	make_inaplayers(inaplayer[0], ((window.getSize().x / 2) + 50), ((boundupY + bounddownY) / 2) - 20);
	inaplayer[0].setFillColor(Color::Blue);
	string inaplayer_active[1] = {"Blue"};

	CircleShape oppplayer[10];
 
	bool football_check = false, football_check_goal = false;
	bool oppplayer_tray2 = false, oppplayer_tray3 = false, oppplayer_tray4 = false;
	bool game_start = true;

	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed || event.key.code == Keyboard::Escape)
				window.close();
			if (event.type == Event::KeyPressed && event.key.code == Keyboard::R && timer.getElapsedTime().asSeconds() >= 180)
				goto restart_again;
		}




		static int goalkeeperopp_dir = 2;
		if (goalkeeperopp.getPosition().y <= poleY1)
			goalkeeperopp_dir = 1;
		if ((goalkeeperopp.getPosition().y + (2 * goalkeeperopp.getRadius())) >= poleY2)
			goalkeeperopp_dir = 0;
		if (goalkeeperopp_dir == 1)
			goalkeeperopp.move(0.f, 3.f);
		if (goalkeeperopp_dir == 0)
			goalkeeperopp.move(0.f, -3.f);
		static int goalkeeperplay_dir = 2;
		if (goalkeeperplay.getPosition().y <= poleY1)
			goalkeeperplay_dir = 1;
		if ((goalkeeperplay.getPosition().y + (2 * goalkeeperplay.getRadius())) >= poleY2)
			goalkeeperplay_dir = 0;
		if (goalkeeperplay_dir == 1)
			goalkeeperplay.move(0.f, 3.f);
		if (goalkeeperplay_dir == 0)
			goalkeeperplay.move(0.f, -3.f);




		int  ina_index = 0;
		bool check_for_ina = false;
		for (int i = 0; i < 10; i++)
		{
			if (inaplayer_active[i] == "Blue")
			{
				ina_index = i;
				check_for_ina = true;
			}
			if (check_for_ina)
				break;
		}
		if (inaplayer_active[ina_index] == "Blue" && game_start)
		{
			if (Keyboard::isKeyPressed(Keyboard::Right) && inaplayer[ina_index].getPosition().x + (2 * (inaplayer[ina_index].getRadius())) < window.getSize().x)
				inaplayer[ina_index].move(3, 0);
			if (Keyboard::isKeyPressed(Keyboard::Left) && inaplayer[ina_index].getPosition().x > 0)
				inaplayer[ina_index].move(-3, 0);
			if (Keyboard::isKeyPressed(Keyboard::Up) && inaplayer[ina_index].getPosition().y > boundupY)
				inaplayer[ina_index].move(0, -3);
			if (Keyboard::isKeyPressed(Keyboard::Down) && inaplayer[ina_index].getPosition().y + (2 * (inaplayer[ina_index].getRadius())) < bounddownY)
				inaplayer[ina_index].move(0, 3);

			if (Keyboard::isKeyPressed(Keyboard::S))
			{
				inaplayer[ina_index].setFillColor(Color::Green);
				inaplayer_active[ina_index] = "Green";
				football.setPosition(Vector2f(inaplayer[ina_index].getPosition().x, inaplayer[ina_index].getPosition().y));
				football_check = true;
				football_check_goal = true;
			}
        }

		window.clear();
		window.draw(middleline, 2, Lines);
		window.draw(boundup, 2, Lines);
		window.draw(bounddown, 2, Lines);
		window.draw(poleopp, 2, Lines);
		window.draw(poleplay, 2, Lines);
		window.draw(goalkeeperopp);
		window.draw(goalkeeperplay);

			window.draw(inaplayer[0]);
		if (football_check)
		{
			window.draw(football);

		}
		window.draw(timer_text);
		window.display();
	}
	return 0;
};