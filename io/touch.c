#include <unistd.h>
#include <fcntl.h>

void touch() {
    char *fname = "resources/file.in";
    int fd = 0;
    mode_t mode = 0644;
    
    // fd = open(fname, O_WRONLY);
    fd = open(fname, O_WRONLY|O_CREAT|O_EXCL, mode);
    if(fd<0) {
        perror("failed open file");
        exit(0);
    }
    
    printf("successed open file %s and fd:%d\n", fname, fd);
    close(fd);
}