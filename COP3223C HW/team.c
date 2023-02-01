#include <stdio.h>

// Victoria Ten
// COP 3223C - Summer 2022
// A3: If Statements 2
// May 30, 2022

int main() {

    int ucf, team_1, team_2;

    //Team's ranking
    printf("What is UCF\'s ranking?\n");
    scanf("%d", &ucf);

    printf("What is team #1\'s ranking?\n");
    scanf("%d", &team_1);

    printf("What is team #2\'s ranking?\n");
    scanf("%d", &team_2);

    // Ranking: Team #1, Team #2, UCF
    if(ucf>team_1 && ucf>team_2 && team_1<team_2) {
        printf("UCF\'s Record: 0-2\nBest Team: Team #1\n");
    }

    //Ranking: Team #2, Team #1, UCF
    if(ucf>team_1 && ucf>team_2 && team_1>team_2) {
        printf("UCF\'s Record: 0-2\nBest Team: Team #2\n");
    }

    //Ranking: Team #1, UCF, Team #2
    if (ucf>team_1 && ucf<team_2) {
        printf("UCF\'s Record: 1-1\nBest Team: Team #1\n");
    }

    //Ranking: Team #2, UCF, Team #1
    if (ucf<team_1 && ucf>team_2 && team_1>team_2) {
        printf("UCF\'s Record: 1-1\nBest Team: Team #2\n");
    }

    //Ranking: UCF is the best
    if (ucf<team_1 && ucf<team_2) {
        printf("UCF\'s Record: 2-0\nBest Team: UCF\n");
    }

    return 0;
}
