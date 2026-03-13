# Count it!

## Description

`0-count.py` implements `count_words(subreddit, word_list)`, a recursive solution that fetches the hot articles for a subreddit via the Reddit API and tallies how many times each keyword appears in titles. It respects case-insensitive matching, avoids counting substrings, collapses duplicate keywords, and stops following redirects so invalid subreddits simply produce no output.

## Requirements

- Python 3.8+ (depends on `requests`, which is part of the standard library in the testing environment)
- Internet access to query `reddit.com`
- No external configuration; the function accepts a subreddit name and a space-delimited keyword list as strings.

## Usage

Run the helper script provided in the Holberton task:

```
python3 0-main.py <subreddit> "keyword1 keyword2 ..."
```

Example:

```
python3 0-main.py programming "react python java javascript scala"
```

Output is sorted first by frequency (descending) and then alphabetically. Keywords with zero matches are skipped, and each occurrence in any title counts separately (`java java java` counts as three occurrences of `java`).

## Behavior Notes

- Duplicate keywords are merged (`Python python` counts as two instances of `python`).
- Keywords are normalized to lowercase before printing.
- The function is recursive; it keeps requesting hot articles by following pagination recursively rather than by using iteration.
- Invalid subreddits or an empty result set produce no output.

## Example output

```
java: 27
javascript: 20
python: 17
react: 17
scala: 4
```
