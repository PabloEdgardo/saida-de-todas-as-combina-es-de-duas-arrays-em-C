#include <stdio.h>
#include <string.h>

int main() {
    char *dire[] = {"norte","sul", "leste","oeste", NULL};
    char *regi[] = {"dakota do", "rio grande do","america do ", NULL};

    for (int i = 0; regi[i]; i++) 
    {
        for (int o = 0; dire[o]; o++)
        {
        if (i == 2 && o >= 2) {
                continue; // Pula para a próxima iteração
            }
            printf("%s %s:%d \n", regi[i], dire[o], o);
        }
    }
    return 0;

}
    /* checkagem do array
    for (int i = 0; dire[i]; i++)
    {
        printf("%d:%s \n", i, dire[i]);
    }
    */
