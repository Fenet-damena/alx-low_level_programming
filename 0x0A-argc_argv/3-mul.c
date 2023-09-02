/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int result;

		result = argv[1] * argv[2];
		pritnf(result);
		printf("\n");
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
