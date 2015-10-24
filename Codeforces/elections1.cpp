#include <stdio.h>
#include <stdlib.h>
int n, m;
int votes[128];

int main(void) {
    scanf("%d %d", &n, &m);
    for (int i = 1; i <= m; i++) {
        int max_votes = -1;
        int max_candidate = 0;
        for (int j = 1; j <= n; j++) {
            int v;
            scanf("%d", &v);
            if (v > max_votes) {
                max_votes = v;
                max_candidate = j;
            }
        }
        votes[max_candidate]++;
    }
    int max_votes = -1;
    int max_candidate = 0;
    for (int i = 1; i <= n; i++) {
        if (votes[i] > max_votes) {
            max_votes = votes[i];
            max_candidate = i;
        }
    }
    printf("%d\n", max_candidate);
    return 0;
}
