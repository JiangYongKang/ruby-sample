#include <stdio.h>
int main() {
    int score = 87; //考试分数为87分
    score /= 10;

    switch(score) {
        case 10:
        case 9:
            printf("等级A");
            break;
        case 8:
            printf("等级B");
            break;
        case 7:
        case 6:
            printf("等级C");
            break;
        default:
            printf("等级D");
            break;
    }
    return 0;
}
