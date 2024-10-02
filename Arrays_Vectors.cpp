#include <iostream>
#include <vector>
using namespace std;
//We're back to where the output is 3 numbers

int main() {
// lets use vectors
std::vector<int> numbers(3);
cout << "Enter three integers: ";
for (int i = 0; i < 3; i++) {

    cin >> numbers[i];
}
// Now to find the smallest number
int smallest = numbers[0];

for (int i = 1; i < 3; i++) {
    if (numbers[i]< smallest) {
        smallest = numbers [i];
    }
}

// Now the output
cout << "The smallest of the three is..." << smallest << endl;

}