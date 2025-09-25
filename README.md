# produit-vecteur-matrice-
produit vecteur matrices
PROBLÈME:

Calculer le produit d’un vecteur 1 *n par une matrice n*m et obtenir un vecteur résultat 1 *m.

PRINCIPE:
1. Lire la dimension n du vecteur et le nombre de colonnes m de la matrice.
2. Saisir les éléments du vecteur.
3. Saisir les éléments de la matrice ligne par ligne.
4. Calculer chaque élément du vecteur résultat
5. Afficher le vecteur résultat.

DICTIONNAIRE DE DONNÉES:
• n : dimension du vecteur et nombre de lignes de la matrice (int)
• m : nombre de colonnes de la matrice (int)
• vec[n] : vecteur d’entrée (double*)
• mat[n][m] : matrice d’entrée (double**)
• res[m] : vecteur résultat (double*)
• i, j : indices de parcours (int)

COMPLEXITÉ:
• Temps : O(n *m)
• Espace : O(n *m + n + m)
