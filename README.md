# Stepper-Motor
Script pour moteur pas a pas avec un module ULN2003

### Fonctionnement du module ULN2003
ULN2003 = amplificateur de signal avec transistor (7 transistor dans la puce, seulement 4 utiliser car le moteur a 4 bobines)

### Fonctionnement d'un stepper moteur (moteur pas a pas)
4 bobines qui creent un champs electromagnetique controler pas le ULN2003, exemple de sequence pour faire tourner le moteur :

Étape  IN1  IN2  IN3  IN4
  1     1    0    0    0
  2     1    1    0    0
  3     0    1    0    0
  4     0    1    1    0
  5     0    0    1    0
  6     0    0    1    1
  7     0    0    0    1
  8     1    0    0    1
