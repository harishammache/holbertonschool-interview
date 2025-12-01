#!/usr/bin/python3
"""
Log parsing
"""

import sys


def print_stats(total_size, status_counts):
    """Prints the accumulated statistics."""
    print("File size: {}".format(total_size))
    for code in sorted(status_counts.keys()):
        if status_counts[code] > 0:
            print("{}: {}".format(code, status_counts[code]))


if __name__ == "__main__":
    total_size = 0
    status_counts = {
        200: 0,
        301: 0,
        400: 0,
        401: 0,
        403: 0,
        404: 0,
        405: 0,
        500: 0
    }
    line_count = 0

    try:
        for line in sys.stdin:
            parts = line.split()

            if len(parts) >= 7:
                size = parts[-1]
                status = parts[-2]

                if status.isdigit() and size.isdigit():
                    status = int(status)
                    size = int(size)

                    total_size += size

                    if status in status_counts:
                        status_counts[status] += 1

            line_count += 1

            if line_count % 10 == 0:
                print_stats(total_size, status_counts)

    except KeyboardInterrupt:
        print_stats(total_size, status_counts)
        raise

    print_stats(total_size, status_counts)
