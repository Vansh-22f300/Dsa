#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

// Per your request
using namespace std;

/**
 * @brief A helper structure to link a brick's force to its original index.
 */
struct Brick {
    int force;
    int index;
};

/**
 * @brief A custom comparison function to sort bricks.
 * It sorts primarily by force (descending) and secondarily by index (ascending).
 */
bool compareBricks(const Brick& a, const Brick& b) {
    if (a.force != b.force) {
        return a.force > b.force;
    }
    return a.index < b.index;
}

/**
 * @brief Calculates the minimum blows required to smash all bricks.
 *
 * @param bigHits The number of available big hammer strikes.
 * @param newtons A vector of integers for the force required to smash each brick.
 *
 * @return A 2D vector containing:
 * 1. The minimum total blows.
 * 2. A sorted list of 1-based indices for the big hammer (or {-1} if unused).
 * 3. A sorted list of 1-based indices for the small hammer (or {-1} if unused).
 */
vector<vector<int>> smashTheBricks(int bigHits, vector<int>& newtons) {
    int n = newtons.size();
    
    vector<Brick> bricks(n);
    // 1. Combine force and original 1-based index.
    for (int i = 0; i < n; ++i) {
        bricks[i] = {newtons[i], i + 1};
    }

    // 2. Sort bricks by force in descending order.
    sort(bricks.begin(), bricks.end(), compareBricks);

    int totalBlows = 0;
    vector<int> bigHammerIndices;
    vector<int> smallHammerIndices;

    // Determine how many bricks can actually be hit with the big hammer.
    int actualBigHits = min(bigHits, n);

    // 3. Assign hammers based on the sorted list.
    for (int i = 0; i < n; ++i) {
        // Use the big hammer on the hardest bricks.
        if (i < actualBigHits) {
            totalBlows += 1;
            bigHammerIndices.push_back(bricks[i].index);
        } else {
            // Use the small hammer on the rest.
            totalBlows += bricks[i].force;
            smallHammerIndices.push_back(bricks[i].index);
        }
    }

    // 4. Sort the final index lists in ascending order.
    sort(bigHammerIndices.begin(), bigHammerIndices.end());
    sort(smallHammerIndices.begin(), smallHammerIndices.end());

    // Handle the case where a hammer is not used.
    if (bigHammerIndices.empty()) {
        bigHammerIndices.push_back(-1);
    }
    if (smallHammerIndices.empty()) {
        smallHammerIndices.push_back(-1);
    }
    
    // This return statement is crucial for the function to work correctly.
    return {{totalBlows}, bigHammerIndices, smallHammerIndices};
}

/**
 * @brief The main function to run an example test case.
 */
int main() {
    // --- Example Test Case ---
    vector<int> newtons = {8, 5, 4, 9};
    int bigHits = 2;

    cout << "Input Bricks (Newtons): ";
    for (int n : newtons) {
        cout << n << " ";
    }
    cout << "\nAvailable Big Hammer Hits: " << bigHits << endl;
    cout << "-----------------------------------" << endl;

    // Call the function to get the result
    vector<vector<int>> result = smashTheBricks(bigHits, newtons);

    // --- Print the Results ---
    cout <<result[0][0];
    for (int idx : result[1]) {
        cout << idx << " ";
    }
    for (int idx : result[2]) {
        cout << idx << " ";
    }
    return 0;
}