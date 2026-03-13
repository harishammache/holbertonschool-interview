#!/usr/bin/python3
"""Module to count keywords in Reddit hot articles"""
import requests


def count_words(subreddit, word_list, after=None, word_count=None):
    """
    Counts keywords in hot articles from a subreddit recursively.
    """
    if word_count is None:
        word_count = {}
        word_list = [word.lower() for word in word_list]
        word_list = list(set(word_list))

    url = f"https://www.reddit.com/r/{subreddit}/hot.json"
    headers = {"User-Agent": "Count Words v1.0"}
    params = {"limit": 100}

    if after:
        params["after"] = after

    try:
        response = requests.get(url, headers=headers,
                                params=params, allow_redirects=False)

        if response.status_code != 200:
            return

        data = response.json()

        for post in data["data"]["children"]:
            title = post["data"]["title"].lower()
            words_in_title = title.split()

            for word in word_list:
                for title_word in words_in_title:
                    clean_title_word = ''.join
                    (c for c in title_word if c.isalnum())
                    if clean_title_word == word:
                        word_count[word] = word_count.get(word, 0) + 1

        after_token = data["data"].get("after")
        if after_token:
            count_words(subreddit, word_list,
                        after=after_token, word_count=word_count)
        else:
            if word_count:
                sorted_words = sorted(word_count.items(),
                                      key=lambda x: (-x[1], x[0]))
                for word, count in sorted_words:
                    print(f"{word}: {count}")

    except Exception:
        return
