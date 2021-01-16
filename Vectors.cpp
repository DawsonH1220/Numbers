#include <iostream>
#include <vector>
int main()
{
    std::cout << "Enter how many numbers will be in the vector: ";
    int num{};
    std::vector<double> nums{};
    std::cin >> num;
    double numsInput{};
    std::cout << "Enter the numbers in the vector seperated by spaces ";
    for (size_t i{}; i < num; i++) {
        std::cin >> numsInput;
        nums.push_back(numsInput);
    }
    double highest{ nums.at(0) };
    double lowest{ nums.at(0) };
    double avg{};
    double total{};
    double range{};
    for (size_t i{}; i < nums.size(); i++){
        total += nums.at(i);
        if (highest < nums.at(i)){
            highest = nums.at(i);
        }
        if (lowest > nums.at(i)) {
            lowest = nums.at(i);
        }
    }
    avg = total / nums.size();
    range = highest - lowest;
    std::cout << "Total: " << total << std::endl;
    std::cout << "Average: " << avg << std::endl;
    std::cout << "Highest: " << highest << std::endl;
    std::cout << "Lowest: " << lowest << std::endl;
    std::cout << "Range: " << range << std::endl;
    std::cout << "Size of vector: " << nums.size() << std::endl;

}