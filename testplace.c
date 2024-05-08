#include <stdlib.h>
#include <stdio.h>

int main()
{
    // The URL you want to curl
    const char *url = "parrot.live";

    // Construct the curl command
    char command[1000];
    sprintf(command, "curl %s", url);

    // Execute the curl command
    system(command);

    return 0;
}