#include "minitalk.h"

void	ft_handler(int signal)
{
	if (signal)
		return ;
}

void	ft_send_bits(int pid, char c)
{	
	int	bit;

	bit = 0;

	while (bit < 8)
	{
		if ((c & (1 << bit)) != 0)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		bit++;
		usleep(100);
	}
}

int	main(int ac, char **av)
{
	int	pid;
 	int	i;
	struct	sigaction	sig;
	
	sig.sa_handler = ft_handler;
	i = 0;

	if (ac == 3)
	{
		pid = ft_atoi(av[1]);
		sigaction(SIGUSR1, &sig, NULL);
		if (kill(pid, SIGUSR1) == -1)
		{
			ft_printf("ERROR : WRONG PID\n");
			exit(1);
		}
		usleep (200);
		while (av[2][i])                           
		{ 
			ft_send_bits(pid, av[2][i]);
			i++;
		}
		ft_send_bits(pid, '\n');
		ft_send_bits(pid, '\0');
	}
	else
	{
		ft_printf("Error: wrong format.\n");
		return (1);
	}
}
