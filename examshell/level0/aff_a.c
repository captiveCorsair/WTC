#include <unistd.h>

void  ft_putchar(char c)
{
  write(1, &c, 1);
}

void	aff_a(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while(str[i])
  	{
    	if ((str[i] == 'a') && (j == 0))
		{
			ft_putchar('a');
			j++;
      	}
		i++;
	}
	ft_putchar('\n');
}

int   main(int argc, char **argv)
{
  if (argc == 2)
    aff_a(argv[1]);
  else
	ft_putchar('\n');
  return (0);
}
