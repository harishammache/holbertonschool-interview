# Menger Sponge



## Description

Ce projet consiste à dessiner une éponge de Menger en 2D, une célèbre fractale mathématique. L'objectif est d'implémenter une fonction C qui affiche la représentation d'une éponge de Menger de niveau donné.

Une éponge de Menger de niveau N est une grille 3x3 de sous-éponges de niveau N-1, sauf la case centrale qui reste vide. Une éponge de niveau 0 est simplement un caractère `#`.

## Exigences

- Éditeurs autorisés : vi, vim, emacs
- Compilation sur Ubuntu 14.04 LTS
- Compilation avec `gcc 4.8.4` et les flags `-Wall -Werror -Wextra -pedantic`
- Respect du style Betty
- Pas de variables globales
- Maximum 5 fonctions par fichier
- Prototypes dans un header `menger.h` (avec include guard)
- Pas d'obligation de fournir le `main.c`

## Prototype

```c
void menger(int level);
```
- `level` : niveau de l'éponge à dessiner (si < 0, ne rien faire)

## Format attendu

- Niveau 0 : carré 1x1
- Niveau 1 : carré 3x3 de niveau 0, centre vide
- Niveau 2 : carré 9x9 de niveau 1, centre vide, etc.
- Taille = $3^N$

## Exemples

### Niveau 0
```
#
```

### Niveau 1
```
###
# #
###
```

### Niveau 2
```
#########
# ## ## #
#########
###   ###
# #   # #
###   ###
#########
# ## ## #
#########
```

## Astuce

Pour savoir si une case doit être vide, il faut vérifier si, à n'importe quel niveau, la case courante est au centre d'un carré 3x3.

## Compilation

```sh
gcc -Wall -Werror -Wextra -pedantic -o menger 0-menger.c -lm
```

## Auteur

Alexandre Gautier, Software Engineer @ Holberton School

---

> "La beauté des fractales réside dans leur simplicité et leur complexité infinie."
