
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int i;

	if (argc == 2)
	{
		i = 0;
		while ((argv[1][i] != ' ') || (argv[1][i] != '\t'))
			i++;
		while (argv[1][i] != '\0' && argv[1][i] != ' ' && argv[1][i] != '\t')
		{
			ft_putchar(argv[1][i])
		}
		else
			ft_putchar('\n');
		return (0);
}

int		main (int argc, char **argv)
{
	if (argc == 2)
		first_word(argv[1]);
	else
		ft_putchar('\n');
	return (0);
}
