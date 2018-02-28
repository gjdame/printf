## _printf:
Returns the resulting format on success. If failed, return -1.

Each file contains a function to aid with basic functioning of _printf.

### Format Capabilities
Our version of program can print the following:
Character: %c
Strings: %s
Signed integers: %d
Signed decimal intergers: %i
Unsigned integers: %u
Hex (lower and upper): %x and %X
Octal: %o
Binary: %b
ROT13: %R
Reverse String: %r

### To run our _printf, do the following:

#### Clone the repo:
```
git clone https://github.com/gjdame/printf.git
```

#### Type in the commands:
```
gcc -Wall -Wextra -Werror -pedantic -Wno-format *.c
```

#### Run the executable:
```
./a.out
```

### Examples:

```
int main(void)
{
	_printf("Char: [%c]\n", 'H');
	_printf("String: [%s]\n", "I am a string !");
	_printf("Negative:[%d]\n", -762534);
	_printf("Binary: [%b]\n", 98);
	_printf("Unsigned octal: [%o]\n", ui);
	_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	_printf("Unknown:[%r]\n");
	_printf("Reverse me, muchacho: %r\n", "Reverse me, muchacho");
	_printf("Big Whopper: %R\n", "Big Whopper");
	return (0);
}

Character:[H]
String:[I am a string !]
Negative:[-762534]
Binary:[1100010]
Unsigned octal:[20000001777]
Unsigned hexadecimal:[800003ff, 800003FF]
Unknown:[%r]
Reverse me, muchacho: ohcahcum, em esreveR
Big Whopper: reppohW giB
```

YAAY.