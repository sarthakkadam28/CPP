#include <iostream>
#include <string>
#include <future>
#include <thread> 
#include <chrono>

using namespace std;


string printing_task() {
    std::this_thread::sleep_for(std::chrono::seconds(10)); 
    return "Printing is done";
}

string scanning_task() {
    std::this_thread::sleep_for(std::chrono::seconds(5)); 
    return "Scanning is done";
}

int main() {

    std::future<string> printing_result = std::async(std::launch::async, printing_task);
    std::future<string> scanning_result = std::async(std::launch::async, scanning_task);

    
    std::cout << "Doing other work..." << std::endl;

    string result_printing_value = printing_result.get(); 
    string result_scanning_value = scanning_result.get(); 

    std::cout << " Printing Task completed. The result is: " << result_printing_value << std::endl;
    std::cout << "Scanning Task completed. The result is: " << result_scanning_value << std::endl;

    return 0;
}