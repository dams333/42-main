#include <stdio.h>
#include <stdlib.h>
int	ft_printf(const char *format, ...);

int	main()
{
	printf("Comparez les résultats (V = Vrai printf, F = ft_printf)\n");
	printf("La valeur indiquée dérrière le | est la valeur de retour\n");

	printf("---------- Test char format ----------\n");
	printf("           Test 1\n");
	printf("| %i (V)\n", printf("%c", 'a'));
	printf("| %i (F)\n",ft_printf("%c", 'a'));
	printf("           Test 2\n");
	printf("| %i (V)\n", printf("%c", '\n'));
	printf("| %i (F)\n",ft_printf("%c", '\n'));
	printf("           Test 3\n");
	printf("| %i (V)\n", printf("%c", 0));
	printf("| %i (F)\n",ft_printf("%c", 0));

	printf("\n---------- Test string format ----------\n");
	printf("           Test 1\n");
	char	*null_str = NULL;
	printf("| %i (V)\n", printf("%s", null_str));
	printf("| %i (F)\n", ft_printf("%s", null_str));
	printf("           Test 2\n");
	printf("| %i (V)\n", printf("%s", ""));
	printf("| %i (F)\n", ft_printf("%s", ""));
	printf("           Test 3\n");
	printf("| %i (V)\n", printf("%s", "Salut Toto, comment vas-tu ?"));
	printf("| %i (F)\n", ft_printf("%s", "Salut Toto, comment vas-tu ?"));
	printf("           Test 4\n");
	printf("| %i (V)\n", printf("%s", "Ceci est une ligne 1\nCela une ligne 2\nEt la une derniere"));
	printf("| %i (F)\n", ft_printf("%s", "Ceci est une ligne 1\nCela une ligne 2\nEt la une derniere"));

	printf("\n---------- Test pointer format ----------\n");
	printf("/!\\WARN, Sur MacOS (et donc pour la Moulinette) le pointeur NULL affiche 0x0 et non (nil) comme sur Linux\n");
	printf("           Test 1\n");
	void	*null_ptr = NULL;
	printf("| %i (V)\n", printf("%p", null_ptr));
	printf("| %i (F)\n", ft_printf("%p", null_ptr));
	printf("           Test 2\n");
	void	*real_pointer = malloc(1);
	printf("| %i (V)\n", printf("%p", real_pointer));
	printf("| %i (F)\n", ft_printf("%p", real_pointer));

	printf("\n---------- Test double format ----------\n");
	printf("           Test 1\n");
	printf("| %i (V)\n", printf("%d", 0));
	printf("| %i (F)\n", ft_printf("%d", 0));
	printf("           Test 2\n");
	printf("| %i (V)\n", printf("%d", 156));
	printf("| %i (F)\n", ft_printf("%d", 156));
	printf("           Test 3\n");
	printf("| %i (V)\n", printf("%d", -156));
	printf("| %i (F)\n", ft_printf("%d", -156));
	printf("           Test 4\n");
	printf("| %i (V)\n", printf("%d", 2147483647));
	printf("| %i (F)\n", ft_printf("%d", 2147483647));
	printf("           Test 5\n");
	printf("| %i (V)\n", printf("%ld", -2147483648));
	printf("| %i (F)\n", ft_printf("%d", -2147483648));

	printf("\n---------- Test int format ----------\n");
	printf("           Test 1\n");
	printf("| %i (V)\n", printf("%i", 0));
	printf("| %i (F)\n", ft_printf("%i", 0));
	printf("           Test 2\n");
	printf("| %i (V)\n", printf("%i", 156));
	printf("| %i (F)\n", ft_printf("%i", 156));
	printf("           Test 3\n");
	printf("| %i (V)\n", printf("%i", -156));
	printf("| %i (F)\n", ft_printf("%i", -156));
	printf("           Test 4\n");
	printf("| %i (V)\n", printf("%i", 2147483647));
	printf("| %i (F)\n", ft_printf("%i", 2147483647));
	printf("           Test 5\n");
	printf("| %i (V)\n", printf("%li", -2147483648));
	printf("| %i (F)\n", ft_printf("%i", -2147483648));

	printf("\n---------- Test unsigned int format ----------\n");
	printf("           Test 1\n");
	printf("| %i (V)\n", printf("%u", 0));
	printf("| %i (F)\n", ft_printf("%u", 0));
	printf("           Test 2\n");
	printf("| %i (V)\n", printf("%u", 156));
	printf("| %i (F)\n", ft_printf("%u", 156));
	printf("           Test 3\n");
	printf("| %i (V)\n", printf("%u", 2147483647));
	printf("| %i (F)\n", ft_printf("%u", 2147483647));
	printf("           Test 4\n");
	printf("| %i (V)\n", printf("%lu", 2147483648));
	printf("| %i (F)\n", ft_printf("%u", 2147483648));
	printf("           Test 5\n");
	printf("| %i (V)\n", printf("%lu", 3147483648));
	printf("| %i (F)\n", ft_printf("%u", 3147483648));

	printf("\n---------- Test hexa lowcase format ----------\n");
	printf("           Test 1\n");
	printf("| %i (V)\n", printf("%x", 0));
	printf("| %i (F)\n", ft_printf("%x", 0));
	printf("           Test 2\n");
	printf("| %i (V)\n", printf("%x", 10));
	printf("| %i (F)\n", ft_printf("%x", 10));
	printf("           Test 3\n");
	printf("| %i (V)\n", printf("%x", 512));
	printf("| %i (F)\n", ft_printf("%x", 512));
	printf("           Test 4\n");
	printf("| %i (V)\n", printf("%x", 11259375));
	printf("| %i (F)\n", ft_printf("%x", 11259375));
	printf("           Test 5\n");
	printf("| %i (V)\n", printf("%x", 1125421));
	printf("| %i (F)\n", ft_printf("%x", 1125421));

	printf("\n---------- Test hexa upcase format ----------\n");
	printf("           Test 1\n");
	printf("| %i (V)\n", printf("%X", 0));
	printf("| %i (F)\n", ft_printf("%X", 0));
	printf("           Test 2\n");
	printf("| %i (V)\n", printf("%X", 10));
	printf("| %i (F)\n", ft_printf("%X", 10));
	printf("           Test 3\n");
	printf("| %i (V)\n", printf("%X", 512));
	printf("| %i (F)\n", ft_printf("%X", 512));
	printf("           Test 4\n");
	printf("| %i (V)\n", printf("%X", 11259375));
	printf("| %i (F)\n", ft_printf("%X", 11259375));
	printf("           Test 5\n");
	printf("| %i (V)\n", printf("%X", 1125421));
	printf("| %i (F)\n", ft_printf("%X", 1125421));

	printf("\n---------- Test percent format ----------\n");
	printf("           Test 1\n");
	printf("| %i (V)\n", printf("%%"));
	printf("| %i (F)\n", ft_printf("%%"));

	printf("\n---------- Test multiple format ----------\n");
	printf("           Test 1\n");
	printf("| %i (V)\n", printf("Salut %s, tu as %i ans", "Toto", 56));
	printf("| %i (F)\n", ft_printf("Salut %s, tu as %i ans", "Toto", 56));
	printf("           Test 2\n");
	printf("| %i (V)\n", printf("J'ai %d fois la lettre %c dans mon prénom", 2, 'a'));
	printf("| %i (F)\n", ft_printf("J'ai %d fois la lettre %c dans mon prénom", 2, 'a'));
	printf("           Test 3\n");
	printf("| %i (V)\n", printf("Si j'ai %i%% de %s dans mon panier.\nIl faut que j'achète %d %s", 18, "patate", 5, "pastèques"));
	printf("| %i (F)\n", ft_printf("Si j'ai %i%% de %s dans mon panier.\nIl faut que j'achète %d %s", 18, "patate", 5, "pastèques"));

	printf("\n---------- Test # bonus ----------\n");
	printf("           Test 1\n");
	printf("| %i (V)\n", printf("%#x", 1125421));
	printf("| %i (F)\n", ft_printf("%#x", 1125421));
	printf("           Test 2\n");
	printf("| %i (V)\n", printf("%#X", 1125421));
	printf("| %i (F)\n", ft_printf("%#X", 1125421));

	printf("\n---------- Test space bonus ----------\n");
	printf("           Test 1\n");
	printf("| %i (V)\n", printf("% d", 112));
	printf("| %i (F)\n", ft_printf("% d", 112));
	printf("           Test 2\n");
	printf("| %i (V)\n", printf("% d", -112));
	printf("| %i (F)\n", ft_printf("% d", -112));
	printf("           Test 3\n");
	printf("| %i (V)\n", printf("% i", 11245));
	printf("| %i (F)\n", ft_printf("% i", 11245));
	printf("           Test 4\n");
	printf("| %i (V)\n", printf("% i", 0));
	printf("| %i (F)\n", ft_printf("% i", 0));

	printf("\n---------- Test + bonus ----------\n");
	printf("           Test 1\n");
	printf("| %i (V)\n", printf("%+d", 112));
	printf("| %i (F)\n", ft_printf("%+d", 112));
	printf("           Test 2\n");
	printf("| %i (V)\n", printf("%+d", -112));
	printf("| %i (F)\n", ft_printf("%+d", -112));
	printf("           Test 3\n");
	printf("| %i (V)\n", printf("%+i", 11245));
	printf("| %i (F)\n", ft_printf("%+i", 11245));
	printf("           Test 4\n");
	printf("| %i (V)\n", printf("%+i", 0));
	printf("| %i (F)\n", ft_printf("%+i", 0));

	printf("\n---------- Test combine + and space bonus ----------\n");
	printf("           Test 1\n");
	printf("| %i (V)\n", printf("%+ d", 112));
	printf("| %i (F)\n", ft_printf("%+ d", 112));
	printf("           Test 2\n");
	printf("| %i (V)\n", printf("%+ d", -112));
	printf("| %i (F)\n", ft_printf("%+ d", -112));
	printf("           Test 3\n");
	printf("| %i (V)\n", printf("% +d", 112));
	printf("| %i (F)\n", ft_printf("% +d", 112));
	printf("           Test 4\n");
	printf("| %i (V)\n", printf("% +d", -112));
	printf("| %i (F)\n", ft_printf("% +d", -112));
}
