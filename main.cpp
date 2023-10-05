#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates camelCase


//  1)
//  Noun: Hand
//  action 1: the hand grabs
hand.grab();
//  action 2: the hand curls into a fist
hand.curlIntoFist();
//  action 3: the hand claps
hand.clap();

//  2)
//  Noun: Tree
//  action 1: the tree grows
tree.grow();
//  action 2: the tree sways
tree.sway();
//  action 3: the tree blossoms
tree.blossom();

//  3)
//  Noun: Window
//  action 1: the window shows a reflection
window.showReflection();
//  action 2: the window shatters
window.shatter();
//  action 3: the window gets foggy
window.getFoggy();

//  4)
//  Noun: Umbrella
//  action 1: the umbrella shields from the rain
umbrella.shieldFromRain();
//  action 2: the umbrella flutters in the wind
umbrella.flutterInWind();
//  action 3: the umbrella breaks due to heavy wind
umbrella.breakFromWind();

//  5)
//  Noun: Flower
//  action 1: the flower blooms
flower.bloom();
//  action 2: the flower wilts
flower.wilt();
//  action 3: the flower bends towards sunlight
flower.bendTowardSunlight();

//  6)
//  Noun: Bicycle
//  action 1: the bike wobbles
bike.wobble();
//  action 2: the bike bounces over terrain
bike.bounceOverTerrain();
//  action 3: the bike rusts
bike.rust();

//  7)
//  Noun: River
//  action 1: the river floods
river.flood();
//  action 2: the river freezes
river.freeze();
//  action 3: the river flows
river.flow();

//  8)
//  Noun: Robot
//  action 1: the robot stores data
robot.storeData();
//  action 2: the robot communicates with humans
robot.communicateWithHumans();
//  action 3: the robot runs out of battery
robot.runOutOfBattery();

//  9)
//  Noun: Cloud
//  action 1: the cloud dissipates
cloud.dissipate();
//  action 2: the cloud creates a shadow
cloud.createShadow();
//  action 3: the cloud darkens
cloud.darken();

//  10)
//  Noun: Shoe
//  action 1: the shoe absorbs shock
shoe.absorbShock();
//  action 2: the shoe cushions the foot
shoe.cushionFoot();
//  action 3: the shoe collects dirt
shoe.collectDirt();


#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
