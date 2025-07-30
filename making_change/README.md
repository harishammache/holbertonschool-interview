<h1 align="center">💰 Making Change Project</h1>

<div align="center">
    <img src="img/img.jpg" alt="Coins Icon" width="150">
</div>

<p align="center">
    <strong>Optimisation de la monnaie rendue</strong><br>
    <em>Un projet algorithmique pour maîtriser la programmation dynamique et la complexité</em>
</p>

---

## 📚 Description

Ce projet vise à résoudre le problème classique de **"making change"** :  
> *Déterminer le **plus petit nombre de pièces** nécessaires pour atteindre un total donné.*

Ce défi algorithmique fait appel à la **programmation dynamique** pour garantir une solution efficace, tout en respectant des contraintes de performance.

Il comprend :

- 💡 La **résolution d’un problème combinatoire** de manière optimale
- 🧮 La mise en œuvre d’un **algorithme efficace** (bottom-up / top-down)
- ⚙️ La prise en compte de **cas limites** (`total <= 0`, total impossible à atteindre)
- 📈 L’analyse de la **complexité algorithmique**

---

## 🧠 Objectifs pédagogiques

- Comprendre et implémenter une **stratégie de programmation dynamique**
- Gérer les **cas limites** et retours attendus :
  - `0` si le total est nul ou négatif
  - `-1` si aucune combinaison ne permet d’atteindre le total
- Manipuler des structures de données adaptées (`list`, `dict`, etc.)
- Optimiser l’utilisation des ressources mémoire et CPU
- Rendre le code propre, modulaire et lisible

---

## ⚙️ Technologies utilisées

- Python 3.8+
- Ubuntu 20.04 LTS
- Shell (exécution de fichiers `.py`)

---

## 🔁 Cas à tester

- `makeChange([1, 2, 5], 11)` → `3` (5+5+1)
- `makeChange([1], 0)` → `0`
- `makeChange([2], 3)` → `-1`
- `makeChange([], 10)` → `-1`
- `makeChange([3, 7], 21)` → `3`

---

## 📜 Contraintes

- Le **temps d’exécution** est évalué dans ce projet : évite les solutions récursives inefficaces sans mémoïsation.
- Tu peux supposer que tu possèdes un **nombre infini** de chaque pièce disponible.
- La valeur de chaque pièce est **strictement positive**.

---

## 🧠 Ressources utiles

- [🔢 Dynamic Programming Simplified](https://www.geeksforgeeks.org/dynamic-programming/)
- [💡 Coin Change Problem (LeetCode)](https://leetcode.com/problems/coin-change/)
- [📘 Memoization vs Tabulation](https://www.programiz.com/dsa/memoization)

---

## 👨‍💻 Author

**Haris** – Full-Stack Web Developer  
GitHub: [@harishammache](https://github.com/harishammache)