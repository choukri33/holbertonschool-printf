<p align="center">
  <img width="460" height="300" src="https://ecossistema.pe/wp-content/uploads/listing-uploads/logo/2023/01/Logo-PrintF.jpg">
</p>
<p align="center">
Hello👋🏻
</p>



## Task and Team

This project was released by Choukri and Houcine in Holbertonschool's Bordeaux.
For this project called "Printf" we had one week to complete it. The tasks were divided equally between myself and Choukri.

## Distribution of tasks

Choukri was in charge of task 0 containing: %c, %s, %, as well as the man page.
Myself in charge of task 1 containing: %d, %i, as well as writing this README and the flowchart.


This project consist of rebuilding the standard printf function in C. Our project required a function capable of printing with the %d, %c, %s, %i specifiers to standard output. _printf returns the number of characters printed. 
We were not asked to handle flag characters, field width, precision, or length.


## Prototype

int _printf(const char *format, ...);
## Format specifiers
| specifier |        description       |                  exemple                       |
|----------:|--------------------------|------------------------------------------------|
|    %c     | prints 1 character       | _printf("%c",'p');           --> "p"           |
|    %s     | prints a string          | _printf("%s", "let's code"); --> "let's code"  |
|    %i     | prints an integer        | _printf("%i", 33);           --> "33"          |
|    %d     | prints a decimal number  | _printf("%d", -33);          --> "-33"         |


## Flowchart

![Diagramme printf drawio](https://github.com/choukri33/holbertonschool-printf/assets/146715216/78d6f39d-31c4-48bd-a246-84c9961f8656)
