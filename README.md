# Exos_C_Merlin

## Rappels d'utilisation de git

- Installer git : https://git-scm.com/downloads
- Copier sur ma machine un dépôt git distant d'url <url> : `git clone <url>`
- Récupérer les changements distants (faits par quelqu'un d'autre) : `git pull` (dans le dossier du dépôt)
- Ajouter mes changements : `git add -A`  (dans le dossier du dépôt)
- Envoyer mes changements : `git commit -m <message>` (dans le dossier du dépôt) puis `git push` (dans le dossier du dépôt)
  - `<message>` est la description des changements.

## 1. Nombres premiers

L’exercice sera réalisé sur la branche `1_prime_numbers` et dans un dossier `1_prime_numbers`.

Écrire un programme `prime_numbers` qui prend en argument de ligne de commande un entier positif N et liste les N premiers nombres premiers.

Par exemple :
```
./prime_numbers 5
```
Affiche :
```
2
3
5
7
```

