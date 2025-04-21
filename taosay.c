/*
 * Copyright (c) 2023, Valentin D.O. (vdozer)
 * All rights reserved.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL)); // Seed random number generator

    const char* passages[] = {
        "The Way that can be walked is not the eternal Way.\n[Tao Te Ching chapter 1]",
        "The Way is empty, yet inexhaustible, like an abyss!\n[Tao Te Ching chapter 4]",
        "Obscure, like muddy waters.\n[Tao Te Ching chapter 15]",
        "The Way is eternal. Until your last day, you are free from peril.\n[Tao Te Ching chapter 16]",
        "I do not know its name. I call it the Way. For the lack of better words I call it great.\n[Tao Te Ching chapter 25]",
        "The Way is ever nameless.\n[Tao Te Ching chapter 32]",
        "The great Way is all-pervading. It reaches to the left and to the right. All things depend on it with their existence. Still it demands no obedience.\n[Tao Te Ching chapter 34]",
        "It (Tao) is eternally without desire. So, it can be called small. All things return to it, although it does not make itself their ruler. So, it can be called great.\n[Tao Te Ching chapter 34]",
        "Words spoken about the Way have no taste. When looked at, there's not enough to see. When listened to, there's not enough to hear. When used, it is never exhausted.\n[Tao Te Ching chapter 35]",
        "Returning is the movement of the Way.\n[Tao Te Ching chapter 40]",
        "The light of the Way seems dim.\n[Tao Te Ching chapter 41]",
        "The progress of the Way seems retreating.\n[Tao Te Ching chapter 41]",
        "The straightness of the Way seems curved.\n[Tao Te Ching chapter 41]",
        "The Way is hidden and nameless. Still only the Way nourishes and completes.\n[Tao Te Ching chapter 41]",
        "The whole world says that my Way is great like nothing else. It is great because it is like nothing else. If it were like everything else, it would long ago have become insignificant.\n[Tao Te Ching chapter 67]",
        "Heaven's Way does not contend, yet it certainly triumphs. It does not speak, yet it certainly answers. It does not summon, yet things come by themselves. It seems to be at rest, yet it certainly has a plan.\n[Tao Te Ching chapter 73]",
        "Heaven's net is very vast. It is sparsely meshed, yet nothing slips through.\n[Tao Te Ching chapter 73]",
        "The nameless is the beginning of Heaven and Earth. The named is the mother of all things.\n[Tao Te Ching chapter 1]",
        "From now back to antiquity, its (Tao's) name has not been lost. Thereby, see the origin of all.\n[Tao Te Ching chapter 21]",
        "There was something that finished chaos, born before Heaven and Earth.\n[Tao Te Ching chapter 25]",
        "All things in the world are born out of being. Being is born out of non-being.\n[Tao Te Ching chapter 40]",
        "The world's beginning is its mother. To have found the mother is also to know the children. Although you know the children, cling to the mother. Until your last day you will not be harmed.\n[Tao Te Ching chapter 52]",
        "Can you make your soul embrace the One and not lose it?\n[Tao Te Ching chapter 10]",
        "Hold on to the ancient Way to master the present, and to learn the distant beginning.\n[Tao Te Ching chapter 14]",
        "Knowledge of the eternal is all-embracing. To be all-embracing leads to righteousness, which is majestic.\n[Tao Te Ching chapter 16]",
        "I alone am different from the others, because I am nourished by the great mother.\n[Tao Te Ching chapter 20]",
        "The greatest virtue is to follow the Way utterly.\n[Tao Te Ching chapter 21]",
        "The sage embraces the one, and is an example to the world.\n[Tao Te Ching chapter 22]",
        "Hold on to the great image, and the whole world follows, follows unharmed, content and completely at peace.\n[Tao Te Ching chapter 35]",
        "If I have just an ounce of sense, I follow the great Way, and fear only to stray from it.\n[Tao Te Ching chapter 53]",
        "Profound virtue is indeed deep and wide. It leads all things back to the great order.\n[Tao Te Ching chapter 65]",
        "When the great Way is abandoned, benevolence and righteousness arise.\n[Tao Te Ching chapter 18]",
        "Things exalted then decay. This is going against the Way. What goes against the Way meets an early end.\n[Tao Te Ching chapter 30]",
        "The great Way is very straight, but people prefer to deviate.\n[Tao Te Ching chapter 53]",
        "Heaven and Earth are not kind. They regard all things as offerings.\n[Tao Te Ching chapter 5]",
        "Is not the space between Heaven and Earth like a bellows? It is empty, but lacks nothing. The more it moves, the more comes out of it.\n[Tao Te Ching chapter 5]",
        "All things arise in unison. Thereby we see their return.\n[Tao Te Ching chapter 16]",
        "All things flourish, and each returns to its source.\n[Tao Te Ching chapter 16]",
        "Strong winds do not last all morning, hard rains do not last all day.\n[Tao Te Ching chapter 23]",
        "If Heaven and Earth are unable to persist, how could man?\n[Tao Te Ching chapter 23]",
        "Man is ruled by Earth. Earth is ruled by Heaven. Heaven is ruled by the Way. The Way is ruled by itself.\n[Tao Te Ching chapter 25]",
        "What the Way is to the world, the stream is to the river and the sea.\n[Tao Te Ching chapter 32]",
        "If Heaven were not clear it might rend. If Earth were not firm it might crumble.\n[Tao Te Ching chapter 39]",
        "All things carry yin and embrace yang. They reach harmony by blending with the vital breath.\n[Tao Te Ching chapter 42]",
        "Of all things, none does not revere the Way and honor virtue. Reverence of the Way and honoring virtue were not demanded of them, but it is in their nature.\n[Tao Te Ching chapter 51]",
        "The river and the sea can be kings of a hundred valleys, because they lie below them.\n[Tao Te Ching chapter 66]",
        "Conquering the world and changing it, I do not think it can succeed.\n[Tao Te Ching chapter 29]",
        "The world is a sacred vessel that cannot be changed. He who changes it will destroy it. He who seizes it will lose it.\n[Tao Te Ching chapter 29]",
        "Never take over the world to tamper with it. Those who want to tamper with it are not fit to take over the world.\n[Tao Te Ching chapter 48]",
        "When wisdom and knowledge appear, great pretense arises.\n[Tao Te Ching chapter 18]",
        "Those who understand others are clever, those who understand themselves are wise.\n[Tao Te Ching chapter 33]",
        "The more clever and cunning people are, the stranger the events will be.\n[Tao Te Ching chapter 57]",
        "People are difficult to rule, because of their knowledge.\n[Tao Te Ching chapter 65]",
        "Not knowing of the eternal leads to unfortunate errors.\n[Tao Te Ching chapter 16]",
        "Those who know it do not speak about it. Those who speak about it do not know it.\n[Tao Te Ching chapter 56]",
        "Correct becomes defect. Good becomes ominous. People's delusions have certainly lasted long.\n[Tao Te Ching chapter 58]",
        "Knowing that you do not know is the best. Not knowing that you do not know is an illness.\n[Tao Te Ching chapter 71]",
        "Truly, only those who see illness as illness can avoid illness.\n[Tao Te Ching chapter 71]",
        "The sage is not ill, because he sees illness as illness.\n[Tao Te Ching chapter 71]",
        "True words seem false.\n[Tao Te Ching chapter 78]",
        "True words are not pleasing. Pleasing words are not true.\n[Tao Te Ching chapter 81]",
        "Those who are right do not argue. Those who argue are not right.\n[Tao Te Ching chapter 81]",
        "Those who know are not learned. Those who are learned do not know.\n[Tao Te Ching chapter 81]",
        "Abandon wisdom, discard knowledge, and people will benefit a hundredfold.\n[Tao Te Ching chapter 19]",
        "Abandon knowledge and your worries are over.\n[Tao Te Ching chapter 19]",
        "I have the mind of a fool, understanding nothing.\n[Tao Te Ching chapter 20]",
        "Those who seek knowledge, collect something every day. Those who seek the Way, let go of something every day.\n[Tao Te Ching chapter 48]",
        "My words are very easy to understand and very easy to practice. Still, no one in the world can understand or practice them.\n[Tao Te Ching chapter 70]",
        "My words have an origin. My deeds have a sovereign. Truly, because people do not understand this, they do not understand me.\n[Tao Te Ching chapter 70]",
        "That so few understand me is why I am treasured.\n[Tao Te Ching chapter 70]",
        "A good person is the bad person's teacher. A bad person is the good person's task.\n[Tao Te Ching chapter 27]",
        "The one who does not honor the teacher and the one who does not honor the task, although ever so knowledgeable, they are confused.\n[Tao Te Ching chapter 27]",
        "The superior student listens to the Way and follows it closely. The average student listens to the Way and follows some and some not. The lesser student listens to the Way and laughs out loud. If there were no laughter it would not be the Way.\n[Tao Te Ching chapter 41]",
        "When everyone in the world sees beauty, then ugly exists.\n[Tao Te Ching chapter 2]",
        "What is and what is not create each other.\n[Tao Te Ching chapter 2]",
        "High and low rest on each other.\n[Tao Te Ching chapter 2]",
        "First and last follow each other.\n[Tao Te Ching chapter 2]",
        "What's the difference between yes and no?\n[Tao Te Ching chapter 20]",
        "What's the difference between beautiful and ugly?\n[Tao Te Ching chapter 20]",
        "Heavy is the root of light.\n[Tao Te Ching chapter 26]",
        "What should be shrunken must first be stretched.\n[Tao Te Ching chapter 36]",
        "What should be weakened must first be strengthened.\n[Tao Te Ching chapter 36]",
        "What should be abolished must first be cherished.\n[Tao Te Ching chapter 36]",
        "What should be deprived must first be enriched.\n[Tao Te Ching chapter 36]",
        "Misery is what happiness rests upon. Happiness is what misery lurks beneath.\n[Tao Te Ching chapter 58]",
        "Thirty spokes are joined in the wheel's hub. The hole in the middle makes it useful.\n[Tao Te Ching chapter 11]",
        "Mold clay into a bowl. The empty space makes it useful.\n[Tao Te Ching chapter 11]",
        "Cut out doors and windows for the house. The holes make it useful.\n[Tao Te Ching chapter 11]",
        "The value comes from what is there, but the use comes from what is not there.\n[Tao Te Ching chapter 11]",
        "The sage acts by doing nothing.\n[Tao Te Ching chapter 2]",
        "Can you comprehend everything in the four directions and still do nothing?\n[Tao Te Ching chapter 10]",
        "Because he (the Sage) opposes no one, no one in the world can oppose him.\n[Tao Te Ching chapter 22]",
        "The Way is ever without action, yet nothing is left undone.\n[Tao Te Ching chapter 37]",
        "The highest virtue does nothing. Yet, nothing needs to be done. The lowest virtue does everything. Yet, much remains to be done.\n[Tao Te Ching chapter 38]",
        "The value of teaching without words and accomplishing without action is understood by few in the world.\n[Tao Te Ching chapter 43]",
        "The sage knows without traveling, perceives without looking, completes without acting.\n[Tao Te Ching chapter 47]",
        "When nothing is done, nothing is left undone.\n[Tao Te Ching chapter 48]",
        "Use justice to rule a country. Use surprise to wage war. Use non-action to govern the world.\n[Tao Te Ching chapter 57]",
        "I do not act, and people become reformed by themselves.\n[Tao Te Ching chapter 57]",
        "I am at peace, and people become fair by themselves.\n[Tao Te Ching chapter 57]",
        "I do not interfere, and people become rich by themselves.\n[Tao Te Ching chapter 57]",
        "Act without action.\n[Tao Te Ching chapter 63]",
        "Those who act will fail. Those who seize will lose.\n[Tao Te Ching chapter 64]",
        "He (the sage) wants all things to follow their own nature, but dares not act.\n[Tao Te Ching chapter 64]",
        "The sage does not act and therefore does not fail, does not seize and therefore does not lose.\n[Tao Te Ching chapter 64]",
        "Cautious, like crossing a river in the winter.\n[Tao Te Ching chapter 15]",
        "Wary, as if surrounded by strangers.\n[Tao Te Ching chapter 15]",
        "Although he travels all day, the sage never loses sight of his luggage carts.\n[Tao Te Ching chapter 26]",
        "The best way to carve is not to split.\n[Tao Te Ching chapter 28]",
        "Those who know when to halt are unharmed.\n[Tao Te Ching chapter 44]",
        "Seal the openings, shut the doors, and until your last day you will not be exhausted. Widen the openings, interfere, and until your last day you will not be safe.\n[Tao Te Ching chapter 52]",
        "The sage is sharp but does not cut, pointed but does not pierce, forthright but does not offend, bright but does not dazzle.\n[Tao Te Ching chapter 58]",
        "Pursue without interfering.\n[Tao Te Ching chapter 63]",
        "Lightly given promises must meet with little trust.\n[Tao Te Ching chapter 63]",
        "Taking things lightly must lead to big difficulties.\n[Tao Te Ching chapter 63]",
        "The sage regards things as difficult, and thereby avoids difficulty.\n[Tao Te Ching chapter 63]",
        "People fail at the threshold of success. Be as cautious at the end as at the beginning. Then there will be no failure.\n[Tao Te Ching chapter 64]",
        "Those who have the courage to dare will perish. Those who have the courage not to dare will live.\n[Tao Te Ching chapter 73]",
        "The sage's Way is to act and not to contend.\n[Tao Te Ching chapter 81]"
    };

    int num_verses = sizeof(passages) / sizeof(passages[0]);
    int selection = rand() % num_verses;
    printf(
    " ___  ___  ___  ___  ___  _ _    .---. \n"
    "|_ _|| . || . |/ __>| . || | |  / (_o \\ \n"
    " | | |   || | |\\__ \\|   |\\   /  \\ o ) / \n"
    " |_| |_|_|'___'<___/|_|_| |_|    '---'  \n"
);
    while(1) {
        char input;
        printf("1 for passage, 0 to exit\n");
        scanf(" %c", &input); // Space before %c to skip whitespace

        if(input == '1') {
            int selection = rand() % num_verses; // New random selection each time
            printf("\n==================\n\n%s\n\n==================\n", passages[selection]);
        }
        else if(input == '0') {
            break;
        }
        else {
            printf("Invalid input. Please try again.\n");
        }
    }

    return 0;
}

