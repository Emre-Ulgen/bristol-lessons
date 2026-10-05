#include <stdio.h>
#include <stdlib.h>

char* grade (int grade) {
    if (grade <= 100 && grade >= 0) {
        if (grade >= 70) {
            return "First";
        }

        else if (grade >= 60) {
            return "Upper second";
        }

        else if (grade >= 50) {
            return "Lower second";
        }
        else if (grade >=40) {
            return "Third";
        }
        else return "fail";
    }

    else return "Invalid mark";


}


int main (int argc, char *argv[]) {

    if (argc < 2) {
        printf("Kullanim: %s <not>\n", argv[0]);
        return 1;
    }

    printf("%s\n", grade(atoi(argv[1])));
    return 0;
}