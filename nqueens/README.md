
# N Queens

![Chess Queen](https://upload.wikimedia.org/wikipedia/commons/4/47/Chess_qdt45.svg)

## Description

Le problème des N reines est un classique de l’algorithmique : il s’agit de placer N reines sur un échiquier N×N de sorte qu’aucune ne puisse en attaquer une autre (ni sur la même ligne, colonne ou diagonale).

Ce projet consiste à écrire un programme Python qui affiche toutes les solutions possibles pour un N donné.

## Exigences

- Éditeurs autorisés : vi, vim, emacs
- Interprété/compilé sur Ubuntu 14.04 LTS avec python3 (3.4.3)
- Première ligne : `#!/usr/bin/python3`
- Respect du style PEP 8 (v1.7.*)
- Tous les fichiers doivent être exécutables
- Un fichier README.md à la racine du projet
- Seul le module `sys` est autorisé

## Usage

```sh
./0-nqueens.py N
```

- Si le nombre d’arguments est incorrect : `Usage: nqueens N`
- Si N n’est pas un entier : `N must be a number`
- Si N < 4 : `N must be at least 4`

## Exemple

```sh
$ ./0-nqueens.py 4
[[0, 1], [1, 3], [2, 0], [3, 2]]
[[0, 2], [1, 0], [2, 3], [3, 1]]
```

Chaque solution est une liste de positions `[ligne, colonne]` pour chaque reine.

## Algorithme

Le programme utilise le backtracking : il place une reine par ligne, vérifie les conflits, et recule si besoin. Ce procédé garantit d’explorer toutes les configurations valides.

## Ressources utiles

- [Wikipedia: N-Queens](https://fr.wikipedia.org/wiki/Probl%C3%A8me_des_huit_reines)
- [Backtracking (fr)](https://fr.wikipedia.org/wiki/Retour_sur_trace)

## Auteur

Haris Hammache @ Holberton School

---

> « La programmation, c’est l’art de résoudre des problèmes complexes avec des solutions élégantes. »
