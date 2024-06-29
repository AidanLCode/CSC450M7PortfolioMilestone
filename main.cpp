#include <iostream>
#include <thread>
#include <chrono>

//Function to count up from 0 to 20
void count_up() {
    for(int i = 0; i <= 20; ++i) { //Count to 20
        std::cout << "Count Up: " << i << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(500)); //sleep for 500 milliseconds
    }
}

//Function to count down from 20 to 0
void count_down() {
    for(int i = 20; i >= 0; --i) {
        std::cout << "Count Down: " << i << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(500)); //sleep for 500 milliseconds
    }
}


int main() {
    //Create the first thread to execute the count up function
    std::thread thread1(count_up);

    //Wait for thread1 to finish
    thread1.join();

    //Create the second thread to execute the count down function
    std::thread thread2(count_down);

    //Wait for thread2 to finish
    thread2.join();
    return 0;
}
