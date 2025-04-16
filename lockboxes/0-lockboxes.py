#!/usr/bin/python3
'''
    Lockboxes
'''


def canUnlockAll(boxes):
    """method that determines if all the boxes can be opened"""
    n = len(boxes)
    boites_ouvertes = {0}

    cles_a_explorer = boxes[0].copy()

    while len(cles_a_explorer) > 0:
        cle = cles_a_explorer.pop()

        if cle < n and cle not in boites_ouvertes:
            boites_ouvertes.add(cle)
            for nouvelle_cle in boxes[cle]:
                if nouvelle_cle not in boites_ouvertes:
                    cles_a_explorer.append(nouvelle_cle)

    if len(boites_ouvertes) == n:
        return True
    else:
        return False
