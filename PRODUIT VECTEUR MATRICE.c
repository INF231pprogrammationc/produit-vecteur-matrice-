Conversation opened. 5 messages. 1 message unread.

Skip to content
Using Gmail with screen readers
1 of 160
(no subject)
Inbox

Samira Kemgou
Attachments1:21 AM (5 hours ago)
 
2

Samira Kemgou
Attachments7:06 AM (4 minutes ago)
Le jeu. 25 sept. 2025 à 01:43, Samira Kemgou <kemgousamira10@gmail.com> a écrit : Le jeu. 25 sept. 2025 à 01:30, Samira Kemgou <kemgousamira10@gmail.com> a écri

Samira Kemgou <kemgousamira10@gmail.com>
Attachments
7:10 AM (0 minutes ago)
to me

 One attachment
  •  Scanned by Gmail

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n, m;
    double *vec;     
    double **mat;   
    double *res;     

    printf("Entrez la dimension n du vecteur (et nombre de lignes de la matrice) : ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        fprintf(stderr, "Dimension invalide.\n");
        return 1;
    }

    printf("Entrez le nombre de colonnes m de la matrice : ");
    if (scanf("%d", &m) != 1 || m <= 0) {
        fprintf(stderr, "Dimension invalide.\n");
        return 1;
    }

    /* allocation */
    vec = malloc(n * sizeof(double));
    mat = malloc(n * sizeof(double*));
    res = malloc(m * sizeof(double));
    if (!vec || !mat || !res) {
        fprintf(stderr, "Erreur d'allocation mémoire.\n");
        return 1;
    }
    for (int i = 0; i < n; ++i) {
        mat[i] = malloc(m * sizeof(double));
        if (!mat[i]) {
            fprintf(stderr, "Erreur d'allocation mémoire.\n");
            for (int k = 0; k < i; ++k) {
                free(mat[k]);
            }
            free(mat);
            free(vec);
            free(res);
            return 1;
        }
    }

    
    printf("Entrez %d éléments du vecteur (séparés par des espaces) :\n", n);
    for (int i = 0; i < n; ++i) {
        if (scanf("%lf", &vec[i]) != 1) {
            fprintf(stderr, "Lecture du vecteur échouée.\n");
            for (int i = 0; i < n; ++i) {
                free(mat[i]);
            }
            free(mat);
            free(vec);
            free(res);
            return 1;
        }
    }

   
    printf("Entrez les %d x %d éléments de la matrice (ligne par ligne) :\n", n, m);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (scanf("%lf", &mat[i][j]) != 1) {
                fprintf(stderr, "Lecture de la matrice échouée.\n");
                
                for (int i = 0; i < n; ++i) {
                    free(mat[i]);
                }
                free(mat);
                free(vec);
                free(res);
                return 1;
            }
        }
    }

    
    for (int j = 0; j < m; ++j) {
        res[j] = 0.0;
        for (int i = 0; i < n; ++i) {
            res[j] += vec[i] * mat[i][j];
        }
    }

    
    printf("Résultat (vecteur 1 x %d) :\n", m);
    for (int j = 0; j < m; ++j) {
        printf("%.6g ", res[j]);
    }
    printf("\n");

    
    for (int i = 0; i < n; ++i) {
        free(mat[i]);
    }
    free(mat);
    free(vec);
    free(res);

    return 0;
}
produit vecteur matrice (1) 2.c
Displaying produit vecteur matrice (1) 2.c.