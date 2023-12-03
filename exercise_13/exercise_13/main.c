//
//  main.c
//  exercise_13
//
//  Created by 추서연 on 2023/12/03.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
    int ID;
        char name[100];
        float score;
        };

int main (void) {
    struct student s1 = {2313800, "seoyeon", 4.3};
    s1.ID = 2313;
    s1.name[0] = 's';
    s1.score = 4.20000;
    printf("ID : %d\n", s1.ID);
    printf("name : %s\n", s1.name);
    printf("score : %f\n", s1.score);
    
    strcpy(s1.name, "JuYeop");
    printf("name2: %s\n",s1.name);
}
