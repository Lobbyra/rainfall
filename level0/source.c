#include <unistd.h>
#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>

int		main(int argc, char **argv, char **envp)
{
    int res = atoi(argv[1]);
    uid_t userUID;
    uid_t userGID;

    if (res == 423) {
        userUID = getuid();
        userGID = getegid();
        setresuid(userUID, userUID, userUID);
        setresuid(userGID, userGID, userGID);
        execv("/bin/sh", NULL);
    } else {
        fprintf(stderr, "No !\n");
    }
    return (0);
}
