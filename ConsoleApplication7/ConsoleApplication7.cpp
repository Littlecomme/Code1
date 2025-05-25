// ConsoleApplication7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
int main()
{
    struct items {
        std::string name;
    };
    struct locations {
        std::string name;
        std::vector<int> door;
        std::vector<items> things;
    };
   
    locations world[4];
    world[0].name = "room";
    world[0].door.push_back(1);
    world[0].door.push_back(2);
    world[0].door.push_back(3);
    world[0].things.push_back({ "Key" });
    world[0].things.push_back({ "Sword" });

    world[1].name = "kicthen";
    world[1].door.push_back(0);
    world[1].things.push_back({ "Fork" });

    world[2].name = "bathroom";
    world[2].door.push_back(0);
    world[2].things.push_back({"something" });

    world[3].name = "bedroom";
    world[3].door.push_back(0);
    world[3].things.push_back({ "T-shirt" });





    struct {
        int location;
    } player;
    player.location = 0;

    while (true)
    {

        std::cout << world[player.location].name << "\n" << "\n";

        std::string input;
        std::cin >> input;

        if (input == "go")
        {

            for (int i = 0;i < world[player.location].door.size();i++)
            {
                int dst = world[player.location].door[i];
                std::cout << i << ". " << world[dst].name << "\n";
            }

            int a;
            std::cin >> a;
            if (a >= 0 && a < world[player.location].door.size())
            {
                player.location = world[player.location].door[a];
            }
        }


        if (input == "list")
        {
            for (int i = 0;i < world[player.location].things.size();i++)
            {
            
                std::cout << i << ". " << world[player.location].things[i].name << "\n";
            }

        }
    }
    
}


