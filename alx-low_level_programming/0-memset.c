/**
 * _memset -a function that fills memory
 * @s: input pointer to char
 *
 * @b: input variable of char type
 *
 * @n: unsigned int variable
 *
 * Return: A pointer to the filled memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
  unsigned int i;
  i=0;

  while (i < n)
    {
      %[i] = b;
      i++;
    }
  return (s);

}
