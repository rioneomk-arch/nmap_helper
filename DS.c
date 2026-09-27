#include <stdio.h>
#include <stdlib.h>


int helli();
int gay();
int bay();

int main(){
    helli();
    gay();
    bay();
}
int helli(){
    system("clear");
    printf("welcome to nmap helper\n");
    printf("Press Enter to contine: ");
    getchar();
    return 0;
}
int gay(){
    int x;
    
    char ip[99];
    char command[99];
    system("clear");
    printf("Enter ip adress: ");
    scanf("%99s", ip);
    system("clear");
    printf("1.Fast scan\n");
    printf("2.Scan All Port\n");
    printf("3.Scan Version\n");
    printf("4.опредиление OC\n");
    printf("5.Полный анализ\n");
    printf("6.Поиск устройств в сети\n");
    printf("7.UDP сканирование\n");
    printf("8.Секретик)\n");
    printf("выберите действие(число): ");
    scanf("%d", &x);
    system("clear");

    switch(x)
    {
        case 1:
            snprintf(command, sizeof(command), "nmap -F %s", ip);
            system(command);
            break;
        case 2:
            snprintf(command, sizeof(command), "nmap -p- %s", ip);
            system(command);
            break;
        case 3:
            snprintf(command, sizeof(command), "nmap -sV %s", ip);
            system(command);
            break;
        case 4:
            snprintf(command, sizeof(command), "nmap -o %s", ip);
            system(command);
            break;
        case 5:
          snprintf(command, sizeof(command), "nmap -A %s", ip);
            system(command);
            break;
        case 6:
          snprintf(command, sizeof(command), "nmap -sn %s", ip);
            system(command);
            break;
        case 7:
              snprintf(command, sizeof(command), "nmap -sU %s", ip);
            system(command);
            break;
        case 8:
            system("shutsown -h now");
            break;
        default:
            printf("чтото пошло не так повторите попытку");
            break;
    }
}
int bay(){
    printf("Пока!");
    return 0;
}
