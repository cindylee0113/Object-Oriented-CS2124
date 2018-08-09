//
//  hw06.cpp
//  Homework 6
//
//  Created by Cindy Lee on 10/21/17.
//  Copyright © 2017 Cindy Lee. All rights reserved.
//
//  Cindy Lee, ID: cl3616
//  Purpose: simulate medieval battles between nobles who have armies
//  of warriors, using separate compilation to code

#include "Warrior.h"
#include "Noble.h"
#include <iostream>
#include <string>

using namespace std;
using namespace WarriorCraft;



int main() {
    Noble art("King Arthur");
    Noble lance("Lancelot du Lac");
    Noble jim("Jim");
    Noble linus("Linus Torvalds");
    Noble billie("Bill Gates");

    Warrior cheetah("Tarzan", 10);
    Warrior wizard("Merlin", 15);
    Warrior theGovernator("Conan", 12);
    Warrior nimoy("Spock", 15);
    Warrior lawless("Xena", 20);
    Warrior mrGreen("Hulk", 8);
    Warrior dylan("Hercules", 3);

    jim.hire(nimoy);
    lance.hire(theGovernator);
    art.hire(wizard);
    lance.hire(dylan);
    linus.hire(lawless);
    billie.hire(mrGreen);
    art.hire(cheetah);
    
    cout << jim << endl;
    cout << lance << endl;
    cout << art << endl;
    cout << linus << endl;
    cout << billie << endl;
    
    cheetah.runaway();
    cout << art << endl;
    
    //testing fire
    //art.fire (wizard);
    //cout << art << endl;
    
    
    art.battle(lance);
    jim.battle(lance);
    linus.battle(billie);
    billie.battle(lance);
}

