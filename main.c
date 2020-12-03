#include <unistd.h>
#include <string.h>

char ** parse_args(char * line){
    int i = 0;
    char ** args;
    char *remaining = line;
    while(remaining){
        args[i] = strsep(&remaining," ");
        i++;
    }
	//args[i] = NULL;
	return args;
}
int main(){
    char line[] = "ls -a -l";
    char ** args = parse_args(line);
    execvp(args[0],args);

    return 0;
}