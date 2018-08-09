//
//  main.cpp
//  adventureGame
//
//  Created by Zachary Martin on 11/15/17.
//  Copyright © 2017 Zachary Martin. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    cout << "Welcome to my first ever text-based advenuture game!\n\n";
    
    cout << "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX" << endl << endl;
    
    cout << "The Lost Necklace of the Amazon by Zachary Martin" << endl << endl;
    
    cout << "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX" << endl << endl;
    
    cout<< "   Introduction: Welcome to my first installation of hopefully a series of text-based games that what I call ‘Input Adventures’. Who am I? I am your narrator, Fate. I will give you options for you to choose as you go on your adventure. I cannot tell you that playing it safe will work, or making every risky decision will work. Every adventure has a number of outcomes based on the inputs you give me. Choose wisely my young apprentice. Your adventure begins now.\n\n-------------------------\n\n   Adventure Briefing: You are in search of The Lost Obsidian Necklace that belonged to the First Amazonian Leader, Lykopis. This artifact is one of the most desired by a rich group of archaeologists and collectors. It is worth around $10,000,000. If you can make it to the ancient jungle temple and make your way in and out of the temple unscathed with the necklace, consider yourself a winner. If you do meet your demise, do not fear, you can restart. This specific game has a total of 44 possible outcomes. If you play your cards right, you can obatin all 3 outcomes that I consider GOOD. The best outcome is of course securing the necklace and making it back home safely (2% chance). \n\n-------------------------\n\n   How to Play: I will describe your scenario in every step, and your choices will be represented within single quotes. For example: (Your options: 'stay' or 'run') In this scenario, I am giving you the choice to stay or run. All you have to do is respond with one of these choices WITHOUT the quotes, and press enter. If you enter something besides the possible options, fear not, as I will tell you that I didn’t understand what you meant, and you can re-enter your option. Once you enter the option, however, there is no going back unless you restart your adventure, so choose wisely. Good luck.\n\n-------------------------\n\n   Press 'Enter' or 'Return to begin!\n\n-------------------------\n\n";
    cin.get();
    
retry1:
    cout << "   Adventure Begins:\n\n-------------------------\n\n   Fate, the narrator: Hello explorer, Here you are on the outskirts of the Amazon jungle. You understand how the game is played. Lets begin. To begin your quest, you are allowed to choose your weapon. Will you choose a 'sword' or a 'bow' equipped with arrows?\n\n   Type 'sword' or 'bow' in the console and then press Enter here: ";
    string input;
    cin >> input;
    if(input == "sword") {
    retry2:
        cout << "\n\n-------------------------\n\n   You have wielded your mighty sword, for you prepare for potential CQC. Now you may choose your mode of transportation. Will you be traveling on foot, or on horse?\n\n Type 'foot' or 'horse' in the console and then press Enter here: ";
        string input;
        cin >> input;
        if(input == "foot") {
        retry4:
            cout << "\n\n-------------------------\n\n   You decide that a horse is too much of a burden, and decide on foot would be a more efficient method of trekking through the jungle. Now you must decide, will you travel straight through jungle fearlessly, or cautiously go around the perimeter of the jungle.\n\nOptions: 'through' or 'around': ";
            string input;
            cin >> input;
            if(input == "through") {
            retry5:
                cout << "\n\n-------------------------\n\n   A brute you are! You fearlessly enter the belly of the beast and begin searching for the hidden temple. Unfortunately, you get your foot caught in a trap, and are suspended within a net. Will you free yourself with your sword or scream and cry for help?\n\nOptions: 'free' 'scream': ";
                string input;
                cin >> input;
                if (input == "free") {
                retry6:
                    cout << "\n\n-------------------------\n\n   Very lucky you had your sword on you! You free yourself from the netting, but are concerned that the guards heard the trap set off. Will you run or will you hide nearby for a little until you feel as though the coast is clear?\n\nOptions: 'run' or 'hide': ";
                    string input;
                    cin >> input;
                    if (input == "run") {
                        cout << "\n\n-------------------------\n\n   You run away from the trap you escaped from. You trip over a tree trunk and fall flat into quicksand. You try to reach a vine conveniently placed over your head but this isn’t a movie and your perish.\n\nGame over (Outcome #7 of 44). " << endl;
                    }
                    else if (input == "hide") {
                    retry7:
                        cout << "\n\n-------------------------\n\n   You wait it out and hide in the bushes by the trap you escaped from, the guards rushed to the trap as you suspected, and you hypothesize that the temple has been left unguarded. You saw the direction that the guards came from and contemplate making a move. Do you sneak around and run to the temple or decide to wait a little longer until the guards leave?\n\nOptions: 'run' or 'wait': ";
                        string input;
                        cin >> input;
                        if(input == "run") {
                        retry8:
                            cout << "\n\n-------------------------\n\n   You run to where you saw the guards coming from after getting around them as they inspected the trap. You better hurry because they will probably head back toward the temple under suspicion. Luckily, there are three open chests, and the necklace is inside one of them! No decoys! The guards must have forgot to close and lock the chests after they heard the noise. You snatch the necklace and head toward the exit. As you run back into the jungle, one of the ten guards calls out to you. Now you have to run for your life. You come upon a wide river with a strong current. Do you attempt to cross the river of follow the river downstream.\n\nOptions: 'cross' or 'follow': ";
                            string input;
                            cin >> input;
                            if(input == "cross") {
                                cout << "\n\n-------------------------\n\n   You cross the river and get swept by the current, as you flow downstream you swim as hard as you can to avoid your impending doom. Unfortunately, you fall down a 500 foot waterfall to your demise. If you played this adventure a lot this may be deja vu.\n\nGame over (Outcome #31 of 44)." << endl;
                            }
                            else if (input == "follow") {
                                cout << "\n\n-------------------------\n\n   You follow the river downstream and approach a 500 foot waterfall. The guards are close behind your tail, so you pray for the best and leap off the ledge. Lets just say you did not stick the landing. If you played this adventure a lot this may be deja vu.\n\nGame over (Outcome #32 of 44)" << endl;
                            }
                            else {
                                cout << "Please try again..." << endl;
                                goto retry8;
                            }
                        }
                        else if (input == "wait") {
                            cout << "\n\n-------------------------\n\n   You wait for the guards to come and inspect the trap. You crouch down by a tree nearby. All of a sudden, a very venomous snake bites you on the neck. Within minutes you are dead.\n\nGame over (Outcome #18 of 44).";
                        }
                        else {
                            cout << "Please try again";
                            goto retry7;
                        }
                    }
                    else {
                        cout << "Please try again..." << endl;
                        goto retry6;
                    }
                }
                else if (input == "scream") {
                    cout << "\n\n-------------------------\n\n   Your screaming has alerted the guards of the hidden temple, and they swiftly come to capture you.\n\nGame over (Outcome #2 of 44)." << endl;
                }
                else {
                    cout << "Please try again..." << endl;
                    goto retry5;
                }
            }
            else if (input == "around") {
            retry13:
                cout << "\n\n-------------------------\n\n   Playing it safe I see. You trek around the perimeter of the jungle and come upon a tree with a strange marking on it. It appears to be pointing in a certain direction. Will you follow this direction or continue in your own desired path? \n\nOptions: 'follow' or 'ignore': ";
                string input;
                cin >> input;
                if(input == "follow") {
                retry14:
                    cout << "\n\n-------------------------\n\n   You follow the direction the marking pointed in and see the temple in the distance! You begin to strategize your way to enter the temple while staying hidden. You choose between covering yourself in leaves and inching your way to the temple entrance while prone or wait until nightfall so reduce your visibility. \n\nOptions: 'camouflage' or 'wait': ";
                    string input;
                    cin >> input;
                    if(input == "camouflage") {
                        cout << "\n\n-------------------------\n\n   You attach leaves to your clothes using some random bottle of super glue you brought with you. You lie down and slowly move towards the temple entrance. Each time the two guards look away, you inch your leafy body towards the entrance. You almost make it to the entrance before a guard steps on you and says “Hey, these leaves aren’t brittle!” You sprint into the temple and fall right into a pit of spikes.\n\nGame over (Outcome #8 of 44)." << endl;
                    }
                    else if (input == "wait") {
                    retry15:
                        cout << "\n\n-------------------------\n\n   You wait until nightfall, and the guards are taking turns guarding the temple. One is standing in front at this point in time. You must decide whether you’re going to sneak behind the guard and go into the temple, or kill them first before entering.\n\nOptions: 'sneak' or 'kill': ";
                        string input;
                        cin >> input;
                        if(input == "sneak") {
                            cout << "\n\n-------------------------\n\n   You sneak past the guard and enter the temple. You approach a room with three chests and see a guard in it who is taking a necklace out of the chest to wear for a ceremony. This is your chance. You sneak behind the guard and stab them with your sword. A silent kill. You snatch the necklace and run out of the jungle. When you get home, you realize that the necklace was a decoy. The amazonian warriors never wear the real Obsidian necklace. You’ve been robbed!\n\nGame over (Outcome #19 of 44)." << endl;
                        }
                        else if (input == "kill") {
                            cout << "\n\n-------------------------\n\n   You kill the guard to have one less person to worry about. You soon after realize that another guard could stumble across the corpse. In an attempt to hide the dead body behind a nearby bush, a second guard comes back from his meal and catches you in the act. You run from the guard and safely flee on your boat. You’re no richer than when you get here.\n\nGame over (Outcome #20 of 44).";
                        }
                        else {
                            cout << "Please try again..." << endl;
                            goto retry15;
                        }
                    }
                    else {
                        cout << "Please try again..." << endl;
                        goto retry14;
                    }
                }
                else if (input == "ignore") {
                retry16:
                    cout << "\n\n-------------------------\n\n   You ignore the marking and assume it could lead to a trap. You slip on a wet rock and hit your head on the ground and fall unconscious. You wake up during nightfall and shake the critters off you. You see dimly lit flames in the distance and slowly approach it. You peek from behind a fern and see a tribal ritual taking part in front of the temple. The guards seem drunk and unaware, so you plan to enter the temple. There is the main entrance right behind the ceremony and an entrance on the side of the temple. Which will you enter? \n\nOptions: 'main' or 'side': ";
                    string input;
                    cin >> input;
                    if(input == "main") {
                    retry17:
                        cout << "\n\n-------------------------\n\n   Wow, you literally walked right by the guards just oozing with confidence! Well now you’ve entered the main entrance of the temple. The Lost Obsidian Necklace is near! You approach a door with two different levers. Lever number one has a smiley face on it and lever number two has an upside down smiley face on it. Make the wrong choice, and your life is over.\n\nOptions: 'one' or 'two': ";
                        string input;
                        cin >> input;
                        if (input == "one") {
                        retry808:
                            cout << "\n\n-------------------------\n\n   You flip the lever with the smiley face on it, and a key drops from the ceiling of the temple and falls into the palm of your hands. You approach a room with three chests. You try the key with all there chests and can open only one. You see a necklace in the chest but are not sure if it is the real one or the fake one. The two other chest also contain the same necklace. Do you take your chances and search for other keys or take the necklace in the chest you opened and leave?\n\nOptions: 'search' or 'leave': ";
                            string input;
                            cin >> input;
                            if (input == "search") {
                            retry666:
                                cout << "\n\n-------------------------\n\n   You decide that necklace could be fake and its time to try and find another key. You look around the room with the chests, and locate a pin fixated into the wall. You pull the pin with caution, and the wall in front of you dismantles and reveals a secret room with a key hanging from the ceiling by a thin string. Will you pull the key off the string or use your sword to cut the string suspending it? \n\nOptions: 'pull' or 'cut': ";
                                string input;
                                cin >> input;
                                if (input == "pull") {
                                    cout << "\n\n-------------------------\n\n   You swiftly jerk the key from the string, but the ceiling about you was designed to come down with the end of the string attached to it. You get suffocated in cobblestone.\n\nGame over (Outcome #35 of 44)." << endl;
                                }
                                else if(input == "cut") {
                                retry999:
                                    cout << "\n\n-------------------------\n\n   You cut the string, retrieve the second key, and try it on the two remaining chests. Again, it opens one other chest which reveals a key identical to the one you found from the first chest. You decide to find the final key to ensure a successful journey. In the room you were just in with the second key, a painting of Lykopis hangs in the back. You notice a small knob to the left of the painting, and attempt to open it. Turns out the painting a secret cabinet door. The door swings open and with close examination you notice a necklace just like the other two. You take it and rush back over to the chests. You collected three necklaces so far, two from the chests, and one from the secret door. You stare curiously at the final chest which has still yet to be open. Will you leave now with the necklaces you have acquired or try to find the last key for the third chest. \n\nOptions: 'leave' or 'search'";
                                    string input;
                                    cin >> input;
                                    if (input == "leave") {
                                    retry123:
                                        cout << "\n\n-------------------------\n\n   You decide to leave the third chest alone and that perhaps the necklace you found in either the painting or the other two chests is the real one. You head back to your escape boat and stumble upon another human being. This time it is not a guard or an amazonian warrior, but rather an archaeologist like yourself. He sees you have three identical necklaces and understands that they could either all be fake or one of them could be real. Instead of posing a threat, he makes you an offer. He offers you $500,000 for necklaces you found and understands that you could have left the real necklace behind in the third chest. He fears to embark on the journey after hearing what you saw. Do you accept his offer or decline?\n\nOptions: 'accept' or 'decline'";
                                        
                                        string input;
                                        cin >> input;
                                        
                                        if (input == "accept") {
                                            cout << "\n\n-------------------------\n\n   You accept the man’s offer. He writes you a check for $500,000 and you hand him over the three necklaces you found. You both leave and you go home $500,000 richer than before. Note: This is second best possible reward in the game. Out of 43 possible outcomes, you got the second best one! Congrats!\n\n-------------------------\n\n   Game over(Outcome #40 of 44)" << endl;
                                        }
                                        else if (input == "decline") {
                                            cout << "\n\n-------------------------\n\n   You decide that you have come too far to settle for $500,000 and you tell the man that you decline his offer. He was not going to take no for an answer though. As you head back to your boat the man pulls out a gun and demands the necklaces. Feeling outmatched, you say you will give him the necklaces. He requests that you throw them to him, and your secret plan of pretending to hand them to him and then beheading him is foiled. This man has been around the block. You decide that you worked to hard to get to where you are and you make a run for the boat. Just before you board the boat, you feel three bullets rip through your back. You fall down on the shore of the river. The man approaches you, bends over, and says, “I’m sorry it had to end this way, but that money is mine.” You respond, “I’m sorry too,” as you quickly turn around and thrust your sword through the neck of the archaeologist. As you bleed out, Amazonian warriors arrive at your location and assess the situation. In your favor, they believe that you stopped the man from stealing the necklaces and praise you. They invite you to their palace where you are treated as a king and are given a comfortable living. Although you are technically a prisoner, for they never will let you leave now that you know of the Amazonian’s existence, you live a very comfortable life. Note: This is the third best possible outcome! Although you cannot go home, you end up living a rich life!\n\nGame over (Outcome #41 of 44)" << endl;
                                        }
                                        else {
                                            cout << "Please try again..." << endl;
                                            goto retry123;
                                        }
                                    }
                                    else if (input == "search") {
                                        cout << "\n\n-------------------------\n\n   You decide that you already came all this way and that your curiosity is too great to not open the third chest. You search more and more for the key, but after a few hours of looking, you do not find a third key. Just before you give up, the guards come in from their ritual and see you with three necklaces in your possession. The leader approaches you and reveals the third key wrapped around her neck. She walks over to the third chest and twists the key inside it. You erupt in dismay as you see absolutely nothing inside the box. The amazonian leader puts her mouth up to your ear and whispers, “this is where your head will lie.” The other warriors all take ahold of you and use their inebriated creativity to torture you to death. They end their torturing by decapitating you and placing your head in the third chest.\n\nGame over (Outcome #38 of 44)." << endl;
                                    }
                                    else {
                                        cout << "Please try again..." << endl;
                                        goto retry999;
                                    }
                                }
                                else {
                                    cout << "Please try again..." << endl;
                                    goto retry666;
                                }
                            }
                            else if (input == "leave") {
                                cout << "\n\n-------------------------\n\n   You leave with the necklace in hand an safely escape from the jungle. You notice when you get home that the necklace’s color is starting to fade. You run it under some water and discover that the necklace was just painted black and was fake. Better luck next time!\n\nGame over (Outcome #33 of 44)" << endl;
                            }
                            else {
                                cout << "Please try again..." << endl;
                                goto retry808;
                            }
                            
                        }
                        else if(input == "two") {
                            cout << "\n\n-------------------------\n\n   You flip the lever with the upside down smiley face on it because you think you are smart and assume everyone uses reverse psychology. Not! A giant stake falls from the ceiling and impales you from the top to bottom. Bon Appetit!\n\nGame over (Outcome #44 of 44)";
                        }
                        else {
                            cout << "Please try again..." << endl;
                            goto retry17;
                        }
                    }
                    else if (input == "side") {
                        cout << "\n\n-------------------------\n\n   You didn’t want to risk going by the inebriated guards, so you go through a side door in the temple and immediately fall through a trapdoor. The fall broke your legs and no one can hear your screams as you rot away. Oops!\n\nGame over (Outcome #9 of 44)." << endl;
                    }
                    else {
                        cout << "Please try again..." << endl;
                        goto retry16;
                    }
                }
                else {
                    cout << "Please try again..." << endl;
                    goto retry13;
                }
            }
            else {
                cout << "Please try again..." << endl;
                goto retry4;
            }
        }
        else if (input == "horse") {
        retry9:
            cout << "\n\n-------------------------\n\n   You equip yourself with a trusty steed and the responsibility that comes with having one with you. Now you must decide if you and your horse will travel straight through the jungle, or carefully around its perimeter. \n\nOptions: 'through' or 'around': ";
            string input;
            cin >> input;
            if(input == "through") {
            retry10:
                cout << "\n\n-------------------------\n\n   You and your trusty steed trek straight through the jungle. You seem to be making fast progress in search of the hidden temple. Your horse stops right before two paths. One is a clear pasture of grass and the other is a dark path of many trees and plants. Which way will you go? Options: 'clear' or 'dark': ";
                string input;
                cin >> input;
                if (input == "clear") {
                retry11:
                    cout << "\n\n-------------------------\n\n   Traveling in an open area seemed safe, but you and your horse are attacked by a vicious panther! You make it out, but your horse has met his demise. Angry at the panther, you ready your sword. Will you attack the panther as it eats the horse or continue through the jungle. Options: 'attack' or 'retreat': ";
                    string input;
                    cin >> input;
                    if(input == "attack") {
                        cout << "\n\n-------------------------\n\n   You swing your sword at the panther and cut off his tail. The angered Panther turns from his new meal and pounces on you. You stick your sword out to catch his leap, and although you pierced the panther through his torso, he had a lot more firepower left, and ripped out your jugular. Not a fun death!\n\nGame over (Outcome #10 of 44)." << endl;
                    }
                    else if(input == "retreat") {
                    retry12:
                        cout << "\n\n-------------------------\n\n   You play it smart and run away from the panther. Without your horse, you make good progress and end up making it to the temple. The guards luckily went after the cries of your horse and didn’t find you, so you head right into the temple. The door to the chamber is wide open. They must have fled quickly. Now is your chance. Three chests labeled ‘Death’, ‘Demise’, and ‘Desires’ sit in front of you. One of these chests contain the necklace, but the other two sit atop pressure plates that, if you choose wrong, will collapse the whole temple and potentially crush you if you cannot escape in time. Choose wisely. \n\nOptions: 'death', 'demise', 'desires': ";
                        string input;
                        cin >> input;
                        if (input == "death") {
                            cout << "\n\n-------------------------\n\n   You choose the chest labeled ‘Death’ and hightail it out of the temple. You escape on your boat and return home with the chest. You attempt to open the chest without needing the key but the chest is impenetrable.  You take a sledge hammer to the chest to no avail. You drop the chest from a fifty story building and break off a pebble from the chest. You took the correct chest, but your treasure is unobtainable. Better luck next time!\n\nGame over (Outcome #21 of 44)";
                        }
                        else if (input == "demise") {
                            cout << "\n\n-------------------------\n\n   You choose the chest labeled ‘Demise’, but the pressure plate was under it. As the temple collapses, you almost reach the exit before being crushed by cobblestone.\n\nGame over (Outcome #22 of 44)";
                        }
                        else if (input == "desires") {
                            cout << "\n\n-------------------------\n\n   You choose the chest labeled ‘Desire’, but a pressure plate lay underneath it. This one does not send the temple to a crash, but rather closes every door that leaves to the room you were in. You try to find a way out of the room, but no exit exists. A day later, one door opens and ten amazonian warriors enter. They show no mercy. Your head is placed on their shrine of failed explorers in search to get rich quick.\n\nGame over (Outcome #23 of 44).";
                        }
                        else {
                            cout << "Please try again..." << endl;
                            goto retry12;
                        }
                    }
                    else {
                        cout << "Please try again..." << endl;
                        goto retry11;
                    }
                }
                else if (input == "dark") {
                retry2345:
                    cout << "\n\n-------------------------\n\n   You and your horse go through the dark path and are able to stay hidden. You approach a river. Do you attempt to cross the river or follow it upstream?\n\nOptions: 'cross' or 'follow': ";
                    string input;
                    cin >> input;
                    if (input == "cross") {
                        cout << "\n\n-------------------------\n\n   As you and your horse cross the stream, the current sweeps your horse under its hooves, and you both get carried down stream to a 500 foot waterfall. You weren’t even close to the temple. Sorry!\n\nGame over (Outcome #11 of 44)." << endl;
                    }
                    else if (input == "follow") {
                    retry5555:
                        cout << "\n\n-------------------------\n\n   You follow the river upstream, and look at that, it leads you right to the temple! You dismount your horse to figure out a proper entrance point. You notice that there is a guard on each side of the temple as each side has an entrance. The North entrance has a guard with a staff in hand, the South entrance has a guard holding a blow dart thingy, the East entrance has a guard with a bow but only one arrow, and the West entrance has a scarecrow in front of it. Which entrance will you choose?\n\nOptions: 'north', 'south', 'east', 'west': ";
                        string input;
                        cin >> input;
                        if (input == "north") {
                            cout << "\n\n-------------------------\n\n   You approach the north entrance and charge the guard with full force! You attempt to thrust your word into the guard but he quickly dodges and slams his staff onto the back of your neck, breaking it to pieces. Next time, don’t try to be a warrior.\n\nGame over (Outcome #24 of 44)" << endl;
                        }
                        else if (input == "south") {
                            cout << "\n\n-------------------------\n\n   You charge toward the south entrance. The guard blows a dart towards your neck, but you deflect it with your sword. You jump up in the air like a samurai and begin to swing your sword downward. The guard quickly dodges your strike, goes behind you, and stabs you multiple times with poison darts. The sky fades away, as you look into the entrance and see nothing but a fake entrance.\n\nGame over (Outcome #25 of 44 - Ya played yaself)." << endl;
                        }
                        else if (input == "east") {
                        retry7890:
                            cout << "\n\n-------------------------\n\n   You see the archer with one arrow by the entrance, and you creep around the trees. You wait for the right moment and then strike! The archer is caught off guard and cannot defend with with a single arrow. You defeat the guard with a couple of scratches and head into the temple. You see two stairways on adjacent sides of the entrance. One goes upstairs, and the other goes downstairs. Which way will you go?\n\nOptions: 'upstairs' or 'downstairs': ";
                            string input;
                            cin >> input;
                            if(input == "upstairs") {
                                cout << "\n\n-------------------------\n\n   As you head upstairs, you trigger a tripwire, and the entire stairwell collapses underneath you, and you fall into the room where the necklace was hidden. Too bad the guards are aware of you and your legs are too broken for you to escape. Better luck next time.\n\nGame over (Outcome #34 of 44 - Crippling pain)" << endl;
                            }
                            else if (input == "downstairs") {
                            retry4333:
                                cout << "\n\n-------------------------\n\n   You head downstairs into one of the few entrances into the room where the necklace is. This door contains 3 different different levers. Only one of them can open the door. Each lever is labeled as followers: Lever 1 - horse, Lever 2 - archer, and Lever 3 - wolf. You see a sign in front of the door that reads: For the necklace you wish to claim, choose the lever of which our great leader was named.\n\nOptions: '1', '2', or '3': ";
                                string input;
                                cin >> input;
                                if (input == "1") {
                                    cout << "\n\n-------------------------\n\n   You choose the first lever titled ‘Horse’ and immediately the walls of the temple begin to shake. The floor beneath you seems to sink downward as you are lowered down. Soon enough you are so far down that there is no way you can climb up. The guards soon arrive to scan the area and find you in their trap. They keep you as prisoner forever.\n\nGame over(Outcome  #36 of 44)." << endl;
                                }
                                else if (input == "2") {
                                    cout << "\n\n-------------------------\n\n   You choose the lever titled ‘Archer’ and nothing happens. You turn around only to see a wall with holes within it. The wall bombards you with poison-tipped arrows that send you to your doom.\n\nGame over (Outcome #37 of 44)." << endl;
                                }
                                else if (input == "3") {
                                retry1000:
                                    cout << "\n\n-------------------------\n\n   With your knowledge of the Amazonian warriors, you know that Lykopis stands for “She-Wolf” and pull lever three. The door opens and reveals a cabinet with a necklace in it. The backside of the cabinet shows a painting of Lykopis, herself. You retrieve the necklace and leave the temple the way you came out. The body of the archer who you defeated remains in the same spot you left it, so the guards have no idea you are here. Now all that is left is to get back to your escape boat in one piece. As you journey back through the jungle, you place the necklace around your neck for safe-keeping. You find your horse, and you ride off through the jungle. Just when you see your boat in sight, you notice two amazonian warriors investigating your vessel. One of them run to the temple to alert the others, and you are faced with one final task for your adventure. Will you combat this last amazonian warrior in order to escape safely or will you find a good hiding spot until the guards complete their search?\n\nOptions: 'fight' or 'hide': ";
                                    string input;
                                    cin >> input;
                                    if(input == "fight") {
                                    retry0000:
                                        cout << "\n\n-------------------------\n\n   You decide that enough is enough. You have come all this way and you need to flee the jungle as soon as possible. You approach the warrior with courage and valor. The warrior sees you and yells a loud cry in order to alert the others back at the temple. It is now a matter of time before reinforcements show up. You notice the warrior is equipped with a dagger and a shield. What is your strategy : a) Charge the warrior and swing your sword with might, attempting to intimidate her and make her run back to the temple for help, where then you can make your escape or b) Hand the necklace you obtained over to the warrior in an attempt to lower her guard and defeat her once for all. \n\nOptions: 'a' or 'b': ";
                                        string input;
                                        cin >> input;
                                        if(input == "a") {
                                            cout << "\n\n-------------------------\n\n   You charge the warrior, who dodges your charge and stabs you in the  back with her dagger, you turn quickly with the dagger still piercing your back. You go berserk and start swinging constantly to defeat the warrior. With one final blow, you manage to break the warrior’s shield, and she retreats back to her temple. You start your boat and head home right in time before seeing other warriors approaching in your rearview mirror. With much fortune, you turn out to have to correct necklace, which was hidden in the cabinet with the painting in the back. You sell the necklace at an auction for $10 million. You buy a house and live the rest of your life without having to work a single job. You did it! You got the best possible outcome out of 44 in the game!\n\n(Outcome #42 of 44)." << endl <<endl <<"WINNER WINNER WINNER WINNER WINNER WINNER WINNER\nWINNER WINNER WINNER WINNER WINNER WINNER WINNER\nWINNER WINNER WINNER WINNER WINNER WINNER WINNER";
                                        }
                                        else if (input == "b") {
                                            cout << "\n\n-------------------------\n\n   You slowly reach your hand out with the necklace in hand. The warrior is quick and just before you retract your hand and attempt to stab her, she grabs the necklace and sprints back to the temple. Outraged, you run right after her hoping to retrieve the very thing you worked so hard to get. In the distance, you see a multitude of warriors heading straight for you with incredible speed. You turn back and reach your boat in time to make a quick getaway. Unfortunately, you came all this way and ended up empty-handed. Note: This may be the most disappointed outcome in the game. Don’t hate me, hate the writer. - Fate, the Narrator.\n\nGame over (Outcome #43 of 44)." << endl;
                                        }
                                        else {
                                            cout << "Please try again..." << endl;
                                            goto retry0000;
                                        }
                                    }
                                    else if (input == "hide") {
                                        cout << "\n\n-------------------------\n\n   You decide to play it safe and find a cave to hide in. After a couple of hours you hear a multitude of warriors running around the jungle. They know every square footage of their home, so they of course check the cave you hide in. You surrender the necklace to them and they are in shock to find that you indeed found the real necklace they hid. They only had to deal with intruders who only left with their fake necklaces. They take you back to the temple and respect you for showing them their structural flaw. They keep you as a prisoner but allow you to set up the traps for future explorers because of your ability to find the real necklace.\n\nGame over(Outcome #39 of 44)" << endl;
                                    }
                                    else {
                                        cout << "Please try again..." << endl;
                                        goto retry1000;
                                    }
                                    
                                }
                                else {
                                    cout << "Please try again..." << endl;
                                    goto retry4333;
                                }
                            }
                            else {
                                cout << "Please try again..." << endl;
                                goto retry7890;
                            }
                        }
                        else if (input == "west") {
                            cout << "\n\n-------------------------\n\n   Ah, you clever little monkey. You head to the scarecrow and inspect it first before heading into the temple. When you do, a hand comes out of its mouth and pierces you between the eyes. Don’t trust these crows.\n\nGame over (Outcome #26 of 44 - Don’t trust these crows)" << endl;
                        }
                        else {
                            cout << "Please try again..." << endl;
                            goto retry5555;
                        }
                    }
                    else {
                        cout << "Please try again..." << endl;
                        goto retry2345;
                    }
                }
                else {
                    cout << "Please try again..." << endl;
                    goto retry10;
                }
            }
            else if(input == "around") {
            retry6909:
                cout << "\n\n-------------------------\n\n   You and your trusty steed begin to circle around the perimeter of the jungle, cautiously looking for a safe entrance point. You come upon some footprints in your path. Will you follow the footprints or ignore them and continue to circle around the perimeter of the jungle?\n\nOptions: 'follow' or 'ignore': ";
                string input;
                cin >> input;
                if (input == "follow") {
                    cout << "\n\n-------------------------\n\n   You follow the footprints and reach the temple, but your horse makes you clearly visible to the guards in front of the temple. You turn and ride the other way but the clever guards know the land and intercept you. You are captured and are imprisoned in the temple forever.\n\nGame over (Outcome #3 of 44)." << endl;
                }
                else if (input == "ignore") {
                retry5467:
                    cout << "\n\n-------------------------\n\n   You ignore the footprints because you realize they could lead to the guards and your horse could blow your cover. As you travel on, you see a tunnel that has been manufactured by the local tribes. This could lead to the temple without alerting the guards. Do you take the risk and head in?\n\nOptions: 'yes' or 'no': ";
                    string input;
                    cin >> input;
                    if(input == "yes") {
                        cout << "\n\n-------------------------\n\n   You decide to enter the tunnel. You slowly get to the end of the tunnel and find that there isn’t anything. As you turn to head back out of the tunnel, its entrance closes and you remain trapped in the tunnel. You hear the growl of a vicious panther, and all else fades.\n\nGame over (Outcome #12 of 44)." << endl;
                    }
                    else if (input == "no") {
                    retry2190:
                        cout << "\n\n-------------------------\n\n   You have seen the horror movies, you know not to go investigating creepy things. You head around the tunnel and see the temple. No guards seem to be around, so you leave your horse behind and head into one of the entrances. This entrance has two doors, one with an arrow pointing up, and another with an arrow pointing down. You must choose which door to open, but be careful.\n\nOptions: 'up' or 'down': ";
                        string input;
                        cin >> input;
                        if(input == "up") {
                            cout << "\n\n-------------------------\n\n   You open the door pointing up, and as you step through the doorway to enter the room of chests, another door comes up out of the ground from under you and crushes you against the ceiling. You are still alive at least until the guards take you.\n\nGame over (Outcome #27 of 44 - Going up)." << endl;
                        }
                        else if(input == "down") {
                            cout << "\n\n-------------------------\n\n   You open the door pointing down and are led down to a chamber. You see the silhouette of a man sitting in the corner of the room. You turn to leave the dark room but the door you entered closes shut and locks. You hear footsteps approaching you as the figure chants something you are unable to understand. You crouch down in the nearest corner and cover your head. Suddenly, every torch in the room rages with fire at the same time, and a 7 foot tall man with no eyes, no teeth, and a giant gash on his scalp is revealed. He screams the loudest cry and brutally murders you.\n\nGame over (Outcome #28 of 44 - Slenderman)" << endl;
                        }
                        else {
                            cout << "Please try again..." << endl;
                            goto retry2190;
                        }
                    }
                    else {
                        cout << "Please try again..." << endl;
                        goto retry5467;
                    }
                }
                else {
                    cout << "Please try again..." << endl;
                    goto retry6909;
                }
            }
            else {
                cout << "Please try again..." << endl;
                goto retry9;
            }
        }
        else {
            cout << "Please try again" << endl;
            goto retry2;
        }
    }
    else if (input == "bow") {
    retry3:
        cout << "\n\n-------------------------\n\n   Ah, a sharpshooter I see! I hope you have good aim. Now you may choose your mode of transportation. Will you be traveling on foot, or on horse?\n\n Type 'foot' or 'horse' into the console and then press Enter here: ";
        string input;
        cin >> input;
        if(input == "foot") {
        retry99:
            cout << "\n\n-------------------------\n\n   You decide that a horse is too much of a burden, and decide on foot would be a more efficient method of trekking through the jungle. Now you must decide, will you travel straight through jungle fearlessly, or cautiously go around the perimeter of the jungle.  Options: 'through' or 'around': ";
            string input;
            cin >> input;
            if (input == "through") {
                cout << "\n\n-------------------------\n\n   A brute you are! You fearlessly enter the belly of the beast and begin searching for the hidden temple. Unfortunately, you get your foot caught in a trap, and are suspended within a net. Without a sword, you have no way of getting out of the net, and are taken as prisoner by the local warriors who guard the temple.\n\nGame over (Outcome #1 of 44). You received the earliest possible demise in the game. Better luck next time!" << endl;
            }
            else if (input == "around"){
            retry8765:
                cout << "\n\n-------------------------\n\n   A careful bowman! You trek around the perimeter of the jungle in search of a safe path. You find a map on the ground that seems to mark a specific part of the jungle with a red circle. The map is covered in blood. Will you head towards the circle of continue on your own path?\n\nOptions: 'follow' or 'ignore': ";
                string input;
                cin >> input;
                if(input == "follow") {
                retry6887:
                    cout << "\n\n-------------------------\n\n   You assume another explorer met his fate trying to find the temple and left its location, and head toward it. Fortunately, you safely arrive to the temple on foot! The guards are out front and haven’t noticed you. There are only two in front and no others in sight. Do you take them out with your bow or try to enter the temple sneakily?\n\nOptions: 'kill' or 'sneak': ";
                    string input;
                    cin >> input;
                    if (input == "kill") {
                        cout << "\n\n-------------------------\n\n   You aim your arrow at the guard on the left, and release. The arrow completely misses the guard and they fire their bows back at you with much better precision. The poison in the tips of the arrows takes effect in less than a minute. Your heart stops.\n\nGame over (Outcome #13 of 44)." << endl;
                    }
                    else if (input == "sneak") {
                        cout << "\n\n-------------------------\n\n   You decide to sneak past the guards, so you stay within the tree line until you are next to the entrance. As you swiftly turn the corner into the door, a third guard stands right in front of the door and stabs you with the tooth of a panther. Ouch.\n\nGame over (Outcome #14 of 44)." << endl;
                    }
                    else {
                        cout << "Please try again" << endl;
                        goto retry6887;
                    }
                }
                else if (input == "ignore") {
                    cout << "\n\n-------------------------\n\n   You ignore the map and get lost in the jungle. Turns out your navigation skills are quite sub-par. You drink stagnant water out of desperation and perish.\n\nGame over (Outcome #4 of 44)" << endl;
                }
                else {
                    cout << "Please try again" << endl;
                    goto retry8765;
                }
            }
            else {
                cout << "Please try again" << endl;
                goto retry99;
            }
            
        }
        else if (input == "horse") {
        retry0123:
            cout << "\n\n-------------------------\n\n   You equip yourself with a trusty steed and the responsibility that comes with having one with you. Now you must decide if you and your horse will travel straight through the jungle, or carefully around its perimeter.\n\nOptions: 'through' or 'around': ";
            string input;
            cin >> input;
            if (input == "through") {
            retry4890:
                cout << "\n\n-------------------------\n\n   A true warrior! You and your trusty steed trek through the jungle. In the distance, you see a black panther giving you the death stare. Will you ready your bow and shoot that cat right between its beady little eyes, or attempt to distance yourself from the beast?\n\nOptions: 'attack' or 'avoid': ";
                string input;
                cin >> input;
                if (input == "attack") {
                retry3456:
                    cout << "\n\n-------------------------\n\n   You shoot your bow at the panther and it dodges it! Your horse lifts its legs and scares the panther away. You got confidence! You continue down the path and after some time searching you locate the temple. You leave your horse attached to a tree and plan your entrance route. You choose either to make a run for the nearest entrance while the guards aren’t looking or shoot an arrow elsewhere to fool the guards into thinking theres an intruder in that area.\n\nOptions: 'run' or 'distract': ";
                    string input;
                    cin >> input;
                    if(input == "run") {
                        cout << "\n\n-------------------------\n\n   You run towards the nearest entrance at the North side of the temple. You see a door that leads you to the tomb of Lykopis. Thinking the necklace would still be worn by the long deceased leader, you open the tomb only to be bombarded by a barrage of poison darts to the face. You did not think it would be that easy, did ya?\n\nGame over (Outcome #15 of 44)." << endl;
                    }
                    else if (input == "distract") {
                        cout << "\n\n-------------------------\n\n   You shoot an arrow up at an angle but it lands on the head of one of the guards who falls over. The other guard panics and calls the others. You flee from the manhunt and escape the jungle, board your boat, and go home. You are not dying today. You made it out alive as broke as you came. Good job?\n\nGame over (Outcome #16 of 44)." << endl;
                    }
                    else {
                        cout << "Please try again" << endl;
                        goto retry3456;
                    }
                }
                else if (input == "avoid") {
                    cout << "\n\n-------------------------\n\n   The panther senses your fear and strikes! You are unable to defend yourself for your bow wasn’t meant for close combat. Unfortunate.\n\nGame over (Outcome #5 of 44)." << endl;
                }
                else {
                    cout << "Please try again" << endl;
                    goto retry4890;
                }
            }
            else if (input == "around") {
            retry0984:
                cout << "\n\n-------------------------\n\n   You and your horse trek around the perimeter of the jungle, and you notice a clear pasture that heads toward the inner part of the jungle. You also hear the sound of drums coming from the eastern side of the jungle. Will you head through the open pasture or follow the sound of the drums?\n\nOptions: 'pasture' or 'drums': ";
                string input;
                cin >> input;
                if (input == "pasture") {
                    cout << "\n\n-------------------------\n\n   As you and your steed walk through the pasture, a guard spotted you! The guard gathers the others and they ambush you. Your horse kicks you off and runs away.. You run to create distance in order shoot your bow, but the guards are much superior sharpshooters. They injure you and take you as prisoner.\n\nGame over(Outcome #6 of 44)." << endl;
                }
                else if (input == "drums") {
                retry0989:
                    cout << "\n\n-------------------------\n\n   You slowly approach the sound of the drums and nightfall approaches. It’s pitch black, and you see the torches shed light on the hidden temple. The guards are still playing drums and seem distracted. You figure its the perfect time to make a move. You and your horse move about with little sound. You have a clear entrance to the temple. Time to make a big boy decision.  Your horse could prove either useful or unaccommodating. Do you bring him in?\n\nOptions: 'keep' or 'leave': ";
                    string input;
                    cin >> input;
                    if(input == "keep") {
                        cout << "\n\n-------------------------\n\n   You decide the horse could make as a good way of leverage over any potential opponents. You and your trusty steed slip past the guards and enter the temple. However, your horse gets really nervous and throws you off him. He turns back and runs out the entrance while whinnying. Next thing you know, a stampede of guards rush at you with their sharpened staffs. Your last vision is being impaled against the wall of the temple with multiple staffs.\n\nGame over (Outcome #17 of 44)." << endl;
                    }
                    else if (input == "leave") {
                    retry7234:
                        cout << "\n\n-------------------------\n\n   You leave the horse behind and figured the temple is probably not horse friendly. Good choice, you slip past the guards and enter the temple. You pass by three open chests with no necklace in them. The guards must have taken the necklace for their drum ceremony. The current leader must be wearing it. You walk back outside and see the leader wearing the necklace. Ten guards surround the leader. They appear to be meditating with their heads down and eyes closed. You decide to either mount your horse and quickly swipe the necklace off the leader’s neck and ride off, or to engage in the greatest battle you have ever been in and take on 10 amazonian warriors for the necklace.\n\nOptions: 'swipe' or 'battle': ";
                        string input;
                        cin >> input;
                        if(input == "swipe") {
                            cout << "\n\n-------------------------\n\n   You mentally prepare yourself. You mount your horse who you know is one of the fastest. You line yourself up with the leader wearing the necklace, and charge at full speed. As you reach your hand down to snatch the necklace, a guard alerts the others to stop meditating. You successfully snatch the necklace and dodge the plethora of arrows shot towards you. Your horse suffers a few hits, but keeps on running. You and your horse get on your getaway boat and head back home. Unfortunately, the necklace was a decoy, as amazonian warriors never wear the real one. The effort was wasted, but at least your alive!\n\nGame over (Outcome #29 of 44)" << endl;
                        }
                        else if (input == "battle") {
                            cout << "\n\n-------------------------\n\n   C’mon bruhhhh watchuuu expect.\n\nGame over (Outcome #30 - Most ridiculous decision)" << endl;
                        }
                        else {
                            cout << "Please try again" << endl;
                            goto retry7234;
                        }
                    }
                    else {
                        cout << "Please try again" << endl;
                        goto retry0989;
                    }
                }
                else {
                    cout << "Please try again" << endl;
                    goto retry0984;
                }
            }
            else {
                cout << "Please try again" << endl;
                goto retry0123;
            }
        }
        else {
            cout << "Please try again" << endl;
            goto retry3;
        }
    }
    else {
        cout << "\n\nPlease try again\n\n" << endl;
        goto retry1;
        
    }
    cout << "\n";
    cout << "------------------------------------------------------" << endl << endl;
    cout << "THANK YOU FOR PLAYING 'THE LOST NECKLACE OF THE AMAZON'" << endl << endl;
    cout << "CREDITS:" << endl << endl;
    cout << "WRITTEN BY ZACHARY MARTIN" << endl << endl;
    cout << "PROGRAMMED IN C++ BY ZACHARY MARTIN" << endl << endl;
    cout << "MADE WITH THE XCODE APPLICATION" << endl << endl;
    cout << "------------------------------------------------------" << endl << endl;
    cout << "This is the first of many text based games I plan to create. More to come!" << endl << endl;
    
retryLast:
    
    cout << "TO RESTART, PRESS THE 'r' KEY ON YOUR KEYBOARD FOLLOWED BY ENTER!" << endl;
    
    cout << "TO QUIT, PRESS THE 'q' KEY ON YOUR KEYBOARD FOLLOWED BY ENTER!" << endl;
    
    string input1;
    cin >> input1;
    if(input1 == "r") {
        goto retry1;
    }
    else if(input1 == "q") {
        cout << "\nGame is terminated. Thank you for playing!\n\n";
    }
    else {
        goto retryLast;
    }
    
}
