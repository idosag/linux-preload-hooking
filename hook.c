#include <stdio.h>
#include <string.h>
int main()
{
        char pass[15];

        printf("Password: ");
        fgets(pass, 15, stdin);
        pass[strcspn(pass, "\r\n")] = 0;
        if (!strcmp("foobar", pass))
        {
                printf("Yay !");
        }
        else
        {
                printf("Nope !");
        }
}