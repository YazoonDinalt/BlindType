#include <stdio.h>
#include <windows.h>
#include <conio.h>



void printToCons(char *string, int len, int right, int sleep) {

	for (int i = 0; i < right; i++) printf(" ");

	for (int i = 0; i < len; i++) {
		Sleep(sleep);
		printf("%c", string[i]);
	}
	printf("\n");
}

void initialize() {

	for (int i = 0; i < 10; i++) printf("\n");
	printToCons("HELLO MY DEAR USER", 18, 50, 100);
	printToCons("Please, choose what you want to train", 38, 40, 100);
	printf("\n");
	printToCons("1. Quick thinking", 17, 45, 50);
	printToCons("2. Finger movement speed", 25, 45, 50);

}

void REinitialize() {

	system("cls");
	for (int i = 0; i < 10; i++) printf("\n");
	printToCons("HELLO MY DEAR USER", 18, 50, 0);
	printToCons("Please, choose what you want to train", 38, 40, 0);
	printf("\n");
	printToCons("1. Quick thinking", 17, 45, 0);
	printToCons("2. Finger movement speed", 25, 45, 0);

}

void QuickThink() {
	

	system("cls");
	for (int i = 0; i < 3; i++) printf("\n");
	printToCons("A letter will appear on the screen.\nYou need to click on it as quickly as possible", 83, 0, 20);
	Sleep(200);
	printf("You are Ready? (Y/N)\n1. Yes\n2. No");

	int key = _getch();
	printf("%d", key);
	while (key != 49 && key != 50) {
		key = _getch();
		system("cls");
		for (int i = 0; i < 3; i++) printf("\n");
		printf("A letter will appear on the screen.\nYou need to click on it as quickly as possible\n");
		printf("You are Ready? (Y/N)\n1. Yes\n2. No");
		printf("%d", key);
	}





}

int main() {
	//initialize();
	
	int key = _getch();

	//while (key != 49 && key != 50) {
	//	key = _getch();
	//	REinitialize();
	//}
	
	if (key == 49) QuickThink();

	return 0; 
}