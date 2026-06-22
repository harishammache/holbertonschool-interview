# Substring with Concatenated Words

> **Holberton School — Interview Prep**
> *By Alexandre Gautier, Software Engineer at Holberton School*

---

## Description

Implementation in C of a function that finds all starting indices of substrings in a string `s` that are a concatenation of **every word** in a given word list — exactly once, in any order, and without any intervening characters.

---

## Prototype

```c
int *find_substring(char const *s, char const **words, int nb_words, int *n);
```

| Parameter   | Description                                              |
|-------------|----------------------------------------------------------|
| `s`         | The string to scan                                       |
| `words`     | Array of words the substring must be a concatenation of  |
| `nb_words`  | Number of words in `words`                               |
| `n`         | Pointer to store the number of results found             |

**Returns:** An allocated array of indices where valid substrings start, or `NULL` if none found.

---

## Files

substring/

├── substring.c   # Implementation

├── substring.h   # Header (prototypes + include guard)

└── README.md


---

## How It Works

The algorithm uses a **sliding window** approach:

1. Compute `word_len` (all words are the same length) and `total_len = word_len × nb_words`.
2. Slide a window of size `total_len` over `s`, one character at a time.
3. For each window position, split it into chunks of `word_len` and check that every chunk matches a word in `words` — each used exactly once (tracked with a `used[]` boolean array).
4. If all words are matched, record the current index.

**Time complexity:** O(n × m × w) — where `n` is the length of `s`, `m` is `nb_words`, and `w` is `word_len`.

---

## Usage

Compile with the provided `main.c`:

```bash
gcc -Wall -Wextra -Werror -pedantic main.c substring.c -o substring
```

### Examples

```bash
$ ./substring barfoothefoobarman foo bar
Indices -> [0, 9]
```
```bash
$ ./substring wordgoodgoodgoodbestword word good best word
Indices -> []
```
```bash
$ ./substring wordgoodgoodgoodbestword word good best good
Indices -> [8]
```

---

## Requirements

- Language: **C**
- Compiler: `gcc 4.8.4` on Ubuntu 14.04 LTS
- Flags: `-Wall -Werror -Wextra -pedantic`
- Style: [Betty](https://github.com/hs-hq/Betty)
- No global variables
- No more than 5 functions per file
- All header files must be include-guarded

---

## Author

**Haris Hammache**