*This project has been created as part of the 42 curriculum by tiarakot.*

## Description:

**get_next_line** is a project designed to create a function that returns a line read from a file descriptor. The goal is to learn about static variables in C, memory management (specifically the heap), and how to handle buffered reading.

## Instruction:

## Compilation:

The project must be compiled with the following flags:

```bash
cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 get_next_line.c get_next_line_utils.c main.c
```
Note: You can modify the BUFFER_SIZE value to any positive integer to change the number of bytes read per read() call.


## Installation && usage:

1. Clone this repository:

```bash
git clone https://github.com/YOUR_USERNAME/get_next_line.git
cd get_next_line
```
2. Include the header in your C file: `#include "get_next_line.h"`.
3. Create a file `main.c`.

```c
#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int	main()
{
	int fd = open("test.txt", O_RDONLY);
    char *line;

    line = get_next_line(fd);
    printf("%s", line);
    free(line);

    line = get_next_line(fd);
    printf("%s", line);
    free(line);
}
```
4. Creat a file `test.txt`.

```text
Hello
World
```

5. Compile your source files along with `get_next_line.c` and `get_next_line_utils.c`.

```bash
cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 get_next_line.c get_next_line_utils.c main.c
```

## Algorithm Explanation:

The algorithm follows a **Read-Store-Extract-Update** cycle to handle data efficiently:

1. **Read and Store**: The function uses a `static char *` to persist data between calls. It reads from the file descriptor in chunks of `BUFFER_SIZE` and joins them into the static "storage" string until a newline (`\n`) or EOF is detected.
2. **Extract**: Once a newline is found in the storage, the function calculates the length up to that `\n` and allocates memory for a new string (the line to be returned).
3. **Update**: After extracting the line, the "storage" must be updated to remove the part that was just returned, leaving only the "leftover" characters for the next function call.
4. **Memory Management**: To prevent leaks, the `ft_strjoin` is designed to free the old storage pointer after creating the new concatenated string.

**Justification**: This approach ensures that we never lose data between calls. By using a static pointer, we can handle cases where a single read() call contains multiple lines or only a partial line.

## Resources:

- File Descriptors - Wikipedia
- Static Variables in C - GeeksforGeeks
- The `read()` System Call - Linux Manual

## Use of AI:

AI (Large Language Model) was used for:

- **Code Review**: Checking for potential edge cases (like empty files or single-character lines).
- **Documentation**: Structuring this README and explaining the behavior of static memory segments.
- **Debugging**: Identifying the risk of memory leaks in the `ft_strjoin` implementation when the first argument is not freed.




