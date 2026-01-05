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
//  Noun:        dog
//  action 1:    the dog barks
dog.bark();
//  action 2:    the dog runs
dog.run();
//  action 3:    the dog sits
dog.sit();

//  2)
//  Noun:        alarmClock
//  action 1:    the alarmClock chimes
alarmClock.chime();
//  action 2:    the alarmClock advances minute hand
alarmClock.minuteHandIncrement();
//  action 3:    the alarmClock advances hour hand
alarmClock.hourHandIncrement();

//  3)
//  Noun:        housePlant
//  action 1:    the housePlant grows
housePlant.grow();
//  action 2:    the housePlant wilts
housePlant.wilt();
//  action 3:    the housePlant flowers
housePlant.flower();

//  4)
//  Noun:        phone
//  action 1:    the phone rings
phone.ring();
//  action 2:    the phone connects
phone.connect();
//  action 3:    the phone disconnects
phone.disconnect();

//  5)
//  Noun:        fish
//  action 1:    the fish swims
fish.swim();
//  action 2:    the fish splashes
fish.splash();
//  action 3:    the fish eats
fish.eat();

//  6)
//  Noun:        LFO
//  action 1:    the LFO starts
lfo.start();
//  action 2:    the LFO stops
lfo.stop();
//  action 3:    the LFO updates
lfo.update();

//  7)
//  Noun:        cat
//  action 1:    the cat meows
cat.meow();
//  action 2:    the cat stalks
cat.stalk();
//  action 3:    the cat pounces
cat.pounce();

//  8)
//  Noun:        playHead
//  action 1:    the playHead advances
playHead.advance();
//  action 2:    the playHead resets
playHead.reset();
//  action 3:    the playHead triggers a step
playHead.triggerStep();

//  9)
//  Noun:        coffeeMachine
//  action 1:    the coffeeMachine grinds beans
coffeeMachine.grindBeans();
//  action 2:    the coffeeMachine heats water
coffeeMachine.heatWater();
//  action 3:    the coffeeMachine dispenses coffee
coffeeMachine.dispenseCoffee();

//  10)
//  Noun:        snow
//  action 1:    the snow falls
snow.fall();
//  action 2:    the snow drifts
snow.drift();
//  action 3:    the snow flurries
snow.flurry();


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
