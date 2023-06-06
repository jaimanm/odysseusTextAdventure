#include <iostream>
#include <vector>
using namespace std;

vector<std::string> nodes {
	"The Island of the Cicones",
	"The Island of the Lotus Eaters",
	"The Cyclops",
	"The Land of Aeolia",
	"The Laestrygonians",
	"Circe's Island",
	"The Sirens",
	"Scylla",
	"Thrinakia",
	"The Island of Calypso",
	"Phaeacia"
};

vector<std::string> situations {
	"You and your ships are pushed north by the gods to the land of the Cicones. You and your men are driving back the native Cicones and suddenly find all their food and wine. Your men say the food is very good and the wine very sweet.",
	"You countinue sailing and you arrive at the island of the Lotus Eaters. They appear very friendly and offer you persimmons (fruit) to eat. You are very hungry and some of your men promise it is the best thing they have ever tasted.",
	"You stumble upon an island and explore a bit. Inside a cave, there is milk , cheese, lambs, and goats to eat for you and your men. Your men have traveled for so long with very little food and are yeaerning to eat",
	"You arrive to the island of Aeolus, the god of the winds. There he hosts you and your men for about a month. When it is time to live, Aeolus gives you a mystery bag as a parting gift. Do you take it?",
	"You pull up near an island. Do you go around the short route or the long route?",
	"The wind blows you and your remaining men to the island of Circe. There, you discover an extravagant palace and Circe offers you and your men food and wine. However, half of your men are turned into pigs because of their greedy appetite.",
	"After returning from the underworld, you and your men are drawn to the island of the Sirens. From stories, you've heard that their song is enchanting but you also remember that circe told you to wax your ears when you pass the island.",
	"After escaping the sirens, you approach the Strait of Scylla and Charybdis. On one side Charybdis would create whirlpools that would sink the ships, while on the other side, Skylla would streatch out her six monstrous heads, and eat the sailors.",
	"After many nights at sea, you arrive at Thrinakia, the island of the Sun god. You beg your men to leave but they are tired and do not accept. Remembering the advice of the prophet Tiresias, you instruct your men not to kill the cattle of Helios but you are out of food.",
	"Having been on the sea for ten whole nights, you pass by an island with plenty of food on it.",
	"You arrive in Phaecia and you are saved by the daughter of Alcinous"
};

vector<vector<std::string>> prompts {
	{"Leave the island immediately before the Cicones come back", "Eat and drink on the beach with your men for a bit"},
	{"Give into your hunger and try the delicious lotus plant", "Forcefully drag your men onto the ships and immediately depart from the island."},
	{"Go into the cave and quickly grab some extra food for the journey.", "Continue on your journey immediately, leaving the cave and the extra food behind."},
	{"Take the gift", "Don't take the gift"},
	{"Go the short route.", "Go the long route."},
	{"Immediately pick up your sword and fight Circe with the help of Hermes.", "Decide against the encounter and sail away with the rest of your men."},
	{"Wax your ears", "Do not wax your ears"},
	{"Go through Charybdis", "Go through Scylla"},
	{"Go to sleep and try to find other sources of food the next morning", "Beg your men to not eat the cattle, and to leave the island and search for food elsewhere."},
	{"Stay on the island and recover before heading out on the rest of your journey.", "Cling onto your board and hope the seas take you to the right direction"},
	{"Tell the story of your journey to the people of the island and accept their help", "Try to sail back on your own."}
};

vector<vector<std::string>> decisionResponses {
	{"That was an easy decision! You and your men, although sad to leave some of the good stuff behind, board your ships and get off the island.\nThe last thing you see is the Cicones storming the beach in staggering numbers, having gathered themselves for a counter-attack. Only one of your men have died from the fighting with the Cicones.", "Bad decision! The Cicones gathered themselves for a counter-attack and stormed the beach. Catching your men off-guard and drunk, you all scramble to board your ships and leave, letting many men get slaughtered in the process.\nMany men die, and you must take extra time to mourn, recover, and rest before continuing on your journey."},
	{"You try the fruit and it tastes amazing. So amazing that you could stay and eat it forever. Wait how did I end up here??? Doesn't matter since I get to eat ENCHANTED FRUIT! You head to the houses of the lotus eaters and spend many nights there and become a fruitaholic. After many days, your men get tired of your nonsense and drag you back to your ship.", "The men who ate the fruit desperately want to stay on the island but you forcefully drag them back to the ship. Although it took a lot of effort and you are still hungry, you and your men waste no time and depart immediately toward Ithaca."},
	{"A giant monster with one eye, calling himself Polyphemus shuts the door of the cave with a huge rock and eats two of your men. He swears on his father Poseidon he will eat the rest of Odyseus's men. However, on the second day, Odysseus gives Polyphemus wine and while he is passed out, takes a massive stick and stabs his eye, blinding the cyclops. You tie yourself and your men to the underbelly of the sheep and escape the next morning when Polyphemus lets his sheep out.", "Your men are unhappy and they beg you to go grab the food but you order them back onto the ship. As you are sailing away from the shore, your crew looks back and sees a giant cyclops walking to the cave. Your soldiers thank you for your wisdom and sound decision making."},
	{"You take the mysterious bag but on the journey back, but one of your men open it out of curiosity. All the unfavorable winds that were confined in the bag are let out and you are blown away.", "Aeolus insists that you take the gift and you quarrel for a whole day. You did not take the unfavorable winds but you also didn't receive the favorable ones so you end up sailing on your own for a long time."},
	{"At first everything seems fine but as you get closer to the island, you see the massive Laestrygonians and they begin to throw rocks at your ships. The only ship that remains afloat is the one that you are on", "Seems like nothing is going on, maybe we should've taken the short route after all."},
	{"With the help of Hermes protecting you from Circe's magic, you run into her palace with a sword prepared to fight. However, she seems to be attracted to you so you take advantage of that. Eventually, you force her to turn your men back into humans. She lets you go and gives you advice on how to find the blind prophet in the underworld.", "You sail away with half your men but a wind blows you back to the island. Struck with guilt, this time you decide to fight Circe with the help of Hermes and by some magic, she falls for you. You force her to eventually turn your men back into their human form and she gives you advice on how to find the blind prophet in the Underworld. However, you've wasted a lot of time sailing on the sea."},
	{"As you make your way across the island, you hear nothing and you sail through like normal.", "You tell your men to tie you to the mast of the ship and to disobey your orders as you sail past the island. You  hear their tempting song filled with promises of the future and feel the irresistable urge to jump off the ship and swim to the island. Struggling against the ropes, you scream and order your men to untie you but they don't obey just as you ordered. After you pass the island, you rest for many days still traumatized by your experience."},
	{"At first nothing happens when you go through the straight, but suddenly a massive whirlpool appears at your feet and your ship struggles to stay afloat. Some of your men jump out in fear.Luckily, you manage to get out but your ship is heavily damaged and you spend days at a nearby island fixing it.", "Scylla lunges out all six of her heads, each grabbing one of your men. You and the rest of your soldiers continue on your journey and mourn for the lost men."},
	{"While you are asleep, your men secretly slaughter and roast the ox, bring the wrath of zeus. When you leave the island, Zeus sends a wild storm to destroy your ship, leaving you as the lone survivor.", "Your men listen to you and sail off but they all die of starvation, leaving just a tiny bit of food left for you."},
	{"A nymph introduces herself as Calypso and confesses her love for you. She offers you immortality to stay with her for the rest of his life but he declines. Not willing to accept your answer, Calypso keeps you captive for 7 years before Hermes finally frees you.", "After 5 more days you float onto a shore by chance."},
	{"The people of Phaecia are inspired by your story and offer you the fastest ships to sail back home.", "You wander by yourself at sea and finally get to Ithaca after months."}
};

vector<int> rightAnswers {
	1,
	2,
	2,
	1,
	2,
	1,
	1,
	2,
	2,
	2,
	1
};
int score = 0;

void decisionNode(int nodeIndex) {
	std::string currentNode = nodes[nodeIndex];
	std::string currentSituation = situations[nodeIndex];
	std::cout << "You have been on your journey home for " << score << " days.\n";
	std::cout << currentNode << "\n";
	std::cout << currentSituation << "\n";
}

void scorePlayer(int nodeIndex, int decision) {
	//SEGMENTATION FAULT ON LINE BELOW - most probably index out of bounds
	// solution: changed decision to decision-1 (didn't get to test this solution because of the following:)
	// BUT WAIT I CHANGED IT BACK TO JUST decision AND NOW ITS WORKING, I CAN'T REPRODUCE THE ERROR
	std::cout << decisionResponses[nodeIndex][decision] << "\n\n";
	if (decision == rightAnswers[nodeIndex]) {
		score += 2;
	} else {
		score += 5;
	}
}

void playerDecision(int nodeIndex) {
	vector<std::string> currentPrompt = prompts[nodeIndex];
	int decision = 0;
	// THE GAME BREAKS IF YOU DONT PUT A NUMBER
	while (decision != 1 && decision != 2) {
		std::cout << "1 - " + currentPrompt[0] << "\n" << "2 - " + currentPrompt[1] << "\n";
		std::cout << "What will you do?\n";
		std::cin >> decision;
	}
	scorePlayer(nodeIndex, decision);
}

void gameStart() {
	// welcome to the game
	std::cout << "Welcome to our game, Oddyseus's Journey.\n";
	// print stuff about the beginnning of Odysseus's journey
	std::cout << "You are playing as Oddyseus. You, King of Ithaca, led a Greek victory by coming up with the genius idea of the Trojan Horse, ending the 10 year war.\n";
	std::cout << "As you leave with the spoils of war with your men on 12 ships, it is up to you to get through the perils of traveling and to get back home to Ithaca.\n";
	std::cout << "Be careful, though - the gods want to punish you for burning down the temples of Troy, and they plan on making your journey back home almost impossible.\n\n";
	
}

void gameEnd() {
	std::cout << "Finally, you've made it back to Ithaca. It has been a long... \n" << score << "\n...days of traveling, but you've made it! Now there are more problems to face in Ithaca, but your journey home from the war ends here.\n\nThanks for playing our game!";
}

// main game loop
int main() {
	gameStart();
	for (int i = 0; i < nodes.size(); i++) {
		decisionNode(i);
		playerDecision(i);
		score += 1;
	};
	gameEnd();
}