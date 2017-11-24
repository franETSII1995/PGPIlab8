int main(int argc, char **argv)
{
	
  int num;
  if (argc!=2)
  {
	printf("uso: %s <numero>\n", argv[0]);
        exit(-1);
  }
  num=atoi(argv[1]);
  printf ("resultado: el factorial de [%d] es [%d].\n", num, calcfact(num));
}

int calcfact(int num)
{
  if (num <= 1) return 1;
  else return (num*calcfact(num-1));
}
