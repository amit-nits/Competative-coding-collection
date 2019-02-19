/* .................................................................................................................................................
Question...You are playing a new famous fighting game: Kortal Mombat XII. You have to perform a brutality on your opponent's character.
You are playing the game on the new generation console so your gamepad have 26 buttons.
Each button has a single lowercase Latin letter from 'a' to 'z' written on it. All the letters on buttons are pairwise distinct.
You are given a sequence of hits, the i-th hit deals ai units of damage to the opponent's character.
To perform the i-th hit you have to press the button si on your gamepad. Hits are numbered from 1 to n.
You know that if you press some button more than k times in a row then it'll break.
You cherish your gamepad and don't want to break any of its buttons.
To perform a brutality you have to land some of the hits of the given sequence.
You are allowed to skip any of them, however changing the initial order of the sequence is prohibited.
The total damage dealt is the sum of ai over all i for the hits which weren't skipped.
Note that if you skip the hit then the counter of consecutive presses the button won't reset.
Your task is to skip some hits to deal the maximum possible total damage to the opponent's character and not break your gamepad buttons.




solution ...Since we are only allowed to push the same button k times in a row, 
let's do a two-pointer sweep to find all segments of consisting of just one button.
 Within each segment, we'll sort and take the k highest values.
See the code for details on the two-pointer sweep 
.......................................................................................................................................................*/
#include <algorithm>
#include <cassert>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int N, K;
vector<int> A;
string S;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> K;
    A.resize(N);

    for (int &a : A)
        cin >> a;

    cin >> S;
    long long total = 0;

    for (int i = 0, j = 0; i < N; i = j) {
        while (j < N && S[i] == S[j])            j++;

        sort(A.begin() + i, A.begin() + j);
        reverse(A.begin() + i, A.begin() + j);

        for (int k = i; k < min(j, i + K); k++)
            total += A[k];
    }

    cout << total << '\n';
}