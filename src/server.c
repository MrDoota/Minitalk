#include "minitalk.h"

void	ft_handler(int signal, siginfo_t *info, void *context)
{
	static int	bit;
	static int	i;
	static char	*str;
	char	c[2];

	(void)context;
	
	if (!str)
	{
		str = ft_calloc(1, sizeof(char));
		return;
	}
	if (signal == SIGUSR1)
		i |= (1 << bit);
	bit++;
	if (bit == 8)
	{
		c[0] = i;
		c[1] = '\0';
		str = ft_strjoin(str, c);
		if (i == '\0')
		{
			ft_printf("%s", str);
			free(str);
			str = NULL;
		}
		bit = 0;
		i = 0;
	}
	kill(info->si_pid, SIGUSR1);
}

int	main(int ac, char **av)
{
	int	pid;
	struct	sigaction	sig;
	
	sig.sa_flags = SA_SIGINFO;
	sig.sa_sigaction = ft_handler;
	(void)av;
	
	if (ac != 1)
	{
		ft_printf("Error: wrong format.\n");
		return (0);
	}
	pid = getpid();
	ft_printf("PID -> %d\n", pid);
	sigaction(SIGUSR2, &sig, NULL);
	sigaction(SIGUSR1, &sig, NULL);
	while (ac == 1)
		pause ();
}
