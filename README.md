## Sudoku Solver - Projet scolaire

Réalisation d'un solveur de grilles de sudoku

**Fonctionnement :**

```
make re
./solver < [path_to_grid]
cat <path_to_grid> | ./solver
```

**Example : **

- Normal :

```
cat samples/hard2.txt

|------------------|
| 8 5       2 4    |
| 7 2             9|
|     4            |
|       1   7     2|
| 3   5       9    |
|   4              |
|         8     7  |
|   1 7            |
|         3 6   4  |
|------------------|

cat samples/hard2.txt | ./solver

|------------------|
| 8 5 1 3 9 2 4 6 7|
| 7 2 3 6 1 4 8 5 9|
| 9 6 4 8 7 1 5 2 3|
| 5 8 9 1 4 7 6 3 2|
| 3 7 5 2 6 8 9 1 4|
| 2 4 6 9 5 3 7 8 1|
| 4 3 2 5 8 9 1 7 6|
| 6 1 7 4 2 5 3 9 8|
| 1 9 8 7 3 6 2 4 5|
|------------------|

```

- Erreur :

```
cat samples/error_x.txt

|------------------|
| 7   8       3    |
|       2   1      |
| 5                |
|   4           2 6|
| 3       8        |
|       1 7     9  |
|   9   6 7       4|
|         7   5    |
|                  |
|------------------|

cat samples/error_x.txt | ./Solver

|------------------|
| X X X X X X X X X|
| X X X X X X X X X|
| X X X X X X X X X|
| X X X X X X X X X|
| X X X X X X X X X|
| X X X X X X X X X|
| X X X X X X X X X|
| X X X X X X X X X|
| X X X X X X X X X|
|------------------|
```
