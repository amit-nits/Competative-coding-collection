/*.............................................................................................................................
You are given a binary matrix A of size n×n. Let's denote an x-compression of the given matrix as a matrix B of size nx×nx such that for every i∈[1,n],j∈[1,n] the condition A[i][j]=B[⌈ix⌉][⌈jx⌉] is met.

Obviously, x-compression is possible only if x divides n, but this condition is not enough. For example, the following matrix of size 2×2 does not have any 2-compression:

01
10
For the given matrix A, find maximum x such that an x-compression of this matrix is possible.

Note that the input is given in compressed form. But even though it is compressed, you'd better use fast input.

Input
The first line contains one number n (4≤n≤5200) — the number of rows and columns in the matrix A. It is guaranteed that n is divisible by 4.

Then the representation of matrix follows. Each of n next lines contains n4 one-digit hexadecimal numbers (that is, these numbers can be represented either as digits from 0 to 9 or as uppercase Latin letters from A to F). Binary representation of each of these numbers denotes next 4 elements of the matrix in the corresponding row. For example, if the number B is given, then the corresponding elements are 1011, and if the number is 5, then the corresponding elements are 0101.

Elements are not separated by whitespaces.


SOlution ::: After some tinkering with the given condition, we notice that an x-compression is possible iff x divides n and the n × n matrix is divisible into x × x matrices such that each matrix is either all 1 or all 0. We can loop over all such x and check the condition in n2 time per x, but this is potentially too slow.

To speed this up, we can precompute rectangle sums for every rectangle containing the upper-left corner, which enables us to compute the sum of any rectangle in . This improves our time complexity to . Since (really!), this means our solution is .
................................................................................................................................................................ */
#include <algorithm>
#include <bitset>
#include <cassert>
#include <iostream>
#include <vector>
#include<stdio.h>
using namespace std;

const int N_MAX = 5205;

int N;
bitset<N_MAX> matrix[N_MAX];
int rect_sum[N_MAX][N_MAX];

int hex_to_int(char hex) {
    return isdigit(hex) ? hex - '0' : hex - 'A' + 10;
}

int get_rect_sum(int r1, int r2, int c1, int c2) {
    return rect_sum[r2][c2] - rect_sum[r2][c1] - rect_sum[r1][c2] + rect_sum[r1][c1];
}

int main() {
    scanf("%d", &N);
    char str[N_MAX];

    for (int i = 0; i < N; i++) {
        scanf("%s", str);
        reverse(str, str + N / 4);

        for (int j = 0; j < N; j++)
            matrix[i][j] = (hex_to_int(str[j / 4]) >> j % 4) & 1;
    }

    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            rect_sum[i + 1][j + 1] = rect_sum[i + 1][j] + rect_sum[i][j + 1] - rect_sum[i][j] + matrix[i][j];

    for (int x = N; x > 0; x--)
        if (N % x == 0) {
            bool good = true;

            for (int i = 0; i < N && good; i += x)
                for (int j = 0; j < N && good; j += x) {
                    int sum = get_rect_sum(i, i + x, j, j + x);

                    if (sum != x * x && sum != 0)
                        good = false;
                }

            if (good) {
                cout << x << '\n';
                return 0;
            }
        }

    assert(false);
}