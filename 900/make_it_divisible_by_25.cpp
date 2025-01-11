#include <iostream>
#include <string>
using namespace std;

int findMinDeletions(string number) {
    // These are the only possible endings for numbers divisible by 25
    string validEndings[] = {"00", "25", "50", "75"};
    
    int minDeletions = 1000;  // Using 1000 as infinity since numbers will be smaller
    
    // Try each possible ending (00, 25, 50, 75)
    for (string ending : validEndings) {
        int position = number.length() - 1;  // Start from end of number
        int deletions = 0;
        
        // Find the second digit of the ending (0,5,0,5)
        while (position >= 0 && number[position] != ending[1]) {
            deletions++;
            position--;
        }
        
        // If we couldn't find the second digit, skip this ending
        if (position < 0) continue;
        
        position--;  // Move to previous position
        
        // Find the first digit of the ending (0,2,5,7)
        while (position >= 0 && number[position] != ending[0]) {
            deletions++;
            position--;
        }
        
        // If we found both digits, update minimum if this is better
        if (position >= 0) {
            minDeletions = min(minDeletions, deletions);
        }
    }
    
    return (minDeletions == 1000) ? -1 : minDeletions;
}

int main() {
    int testCases;
    cin >> testCases;
    
    while (testCases--) {
        string number;
        cin >> number;
        cout << findMinDeletions(number) << endl;
    }
    
    return 0;
}
