#include <iostream>
#include <fstream>
#include <windows.h>
int main() {
    std::ofstream out("C:\\Users\\Admin\\poll_log.txt", std::ios::app);
    out << "Polled!" << std::endl;
    return 0;
}
