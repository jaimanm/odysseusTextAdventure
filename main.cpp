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
	"cicones situation",
	"lotus eaters situation",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	""
};

vector<vector<std::string>> prompts {
	{"cicones option 1", "cicones option 2"},
	{"lotus eaters option 1", "lotus eaters option 2"},
	{"", ""},
	{"", ""},
	{"", ""},
	{"", ""},
	{"", ""},
	{"", ""},
	{"", ""},
	{"", ""},
	{"", ""}
};

vector<vector<std::string>> decisionResponses {
	{"cicones repsonse 1", "cicones response 2"},
	{"lotus eaters response 1", "lotus eaters response 2"},
	{"", ""},
	{"", ""},
	{"", ""},
	{"", ""},
	{"", ""},
	{"", ""},
	{"", ""},
	{"", ""},
	{"", ""}
};

vector<int> rightAnswers {
	1,
	2,
	2,
	1,
	1,
	2,
	2,
	2,
	1,
	1,
	2
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