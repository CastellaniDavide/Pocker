/*
 * This template is valid both in C and in C++,
 * so you can expand it with code from both languages.
 */

#include <stdio.h>
#include <assert.h>

// constraints
#define MAXN 100000

// input data
int N, M, i;
int D[MAXN], S[MAXN], E[MAXN], B[MAXN], P[MAXN];


int main() {
    //  uncomment the following lines if you want to read/write from files
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);

    assert(2 == scanf("%d %d", &N, &M));
    for(i=0; i<N; i++)
        assert(5 == scanf("%d %d %d %d %d", &D[i], &S[i], &E[i], &B[i], &P[i]));

    // insert your code here

    for (int a = 0; a < N; a++)
    {
        if (M >= B[a]){
        M = M - B[a] + P[a];
        }
    }





    printf("%d\n", M); // change 42 with actual answer
    return 0;
}
