# libft
wethinkcode_ project

Recoding of stardard C functions.
## Read libft.en.pdf for full project description

## How To Build The Project
* clone the project
* **cd** into the project directory
* run **make clean && make all**
* after running make a new static library **libft.a** will be created
* to remove the .o files run **make clean**
* to remake the project again run **make re**

## How to use the project
### Example
* create main function:
```c
#include "libft.h"

int main(int argc, char **argv)
{
  int len;

  if (argc == 2)
  {
     len = ft_strlen(argv[1]);
     ft_putendl("");
     ft_putstr(The length of string argument is : );
     ft_putnbr(len);
     ft_putendl("");
  }
  else
    ft_putendl("\n wrong number of args, usage: ./main 'stringargument'");
  
 return (0);
}
```
* compile main function **gcc -Wall -Werror -Wextra -c main.c -o main.o**
* link main function with library *libft.a* **gcc -Wall -Werror -Wextra -o main main.o libft.a**
* run compiled function **./main "HelloWorld"**
* this should output the string length of "HelloWorld"
* this is an example of houw to use the library functions
