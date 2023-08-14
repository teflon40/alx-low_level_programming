#include "git.h"

int main(int ac, char **av)
{
	char cmd[1024] = "/usr/bin/git add ";
	char *line = NULL, **tokens, **tmp;
	char *commit[] = {"/usr/bin/git", "commit", "-m", "", NULL};
	size_t size = 0, chd;
	struct stat st;

	if (ac != 2) {
		printf("Usage: %s <filename>\n", av[0]);
		exit(1);
	}
	if (stat(av[1], &st)) {
		printf("fatal: pathspec '%s' did not match any files\n");
		exit(128);
	}
	strcat(cmd, av[1]);
	tokens = tokenize_str(cmd, " ");

	printf("commit msg: ");
	if (getline(&line, &size, stdin) == -1) {
		free(line);
		return 0;
	}
	commit[3] = line;
	tmp = tokens;
	for (chd = 0; chd < 2; chd++) {
		if (chd == 1)
			tmp = commit;
		switch(fork()) {
			case -1:
				exit(1);
			case 0:
				execve(tmp[0], tmp, environ);
				break;
			default:
				wait(NULL);
				break;
		}
	}
	//printf("%s\n", cmd);
	return 0;
}
