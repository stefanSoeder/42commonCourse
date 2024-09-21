#include <unistd.h>

int	ft_isalpha(int c)
{
	if (!((c >= 65 && c <= 90) || (c >= 97 && c <= 122)))
		return (0);
	else
		return (1);
}

int	main(int argc, char **argv)
{
	if (argc >=2)
	{
		if(ft_isalpha(argv[1][0]))
			write(1, "ALPHA\n", 6);
		else
			write(1, "NOT_ALPHA\n", 10);
	}
	else
		write(1, "NULL\n", 5);
}	
