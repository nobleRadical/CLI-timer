#include <stdio.h>
#include <windows.h>

int main(int argc, char* argv[]) {
    int hours, minutes, seconds, time;
    hours = minutes = seconds = 0;
    if (argc == 1) {
        printf("No time specified.");
        return 1;
    } else if (argc == 2) {
        seconds = atoi(argv[1]);
    } else if (argc == 3) {
        minutes = atoi(argv[1]);
        seconds = atoi(argv[2]);
    } else if (argc >= 4) {
        hours = atoi(argv[1]);
        minutes = atoi(argv[2]);
        seconds = atoi(argv[3]);
    }
    time = (hours * 3600) + (minutes * 60) + seconds;
    while (time > 0) {
        printf("%6.d", time);
        Sleep(1000);
        time--;
        printf("\r");
    }
    printf("\nBeep!");
    PlaySound("C:\\Users\\kascm\\Music\\timer_alarm.wav", NULL, SND_FILENAME);
    return 0;
}