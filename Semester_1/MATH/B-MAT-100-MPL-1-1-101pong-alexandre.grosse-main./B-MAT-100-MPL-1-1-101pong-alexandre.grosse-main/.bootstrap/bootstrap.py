##
## EPITECH PROJECT, 2024
## EPITECH
## File description:
## bootstrap
##

import math
import os

# Exercice 1: Création d'un vecteur
def create_vector(x, y, z):
    return (x, y, z)



# Exercice 2: Somme et différence de vecteurs
def vector_sum(v1, v2):
    return (v1[0] + v2[0], v1[1] + v2[1], v1[2] + v2[2])


def vector_difference(v1, v2):
    return (v1[0] - v2[0], v1[1] - v2[1], v1[2] - v2[2])



# Exercice 3: Multiplication par un coefficient
def vector_multiply(v, scalar):
    return (v[0] * scalar, v[1] * scalar, v[2] * scalar)



# Exercice 4: Norme d'un vecteur
def vector_norm(v):
    return math.sqrt(v[0]**2 + v[1]**2 + v[2]**2)



# Exercice 5: Position de la balle après T=1s
def ball_position(x0, y0, z0, vx, vy, vz, t=1):
    x = x0 + vx * t
    y = y0 + vy * t
    z = z0 + vz * t
    return (x, y, z)



# Exercice 6: Vérification de collision avec la batte
def check_collision(x0, y0, z0, vx, vy, vz):
    if vz == 0:
        return False
    time_to_reach_z0 = -z0 / vz
    x_at_z0 = x0 + vx * time_to_reach_z0
    y_at_z0 = y0 + vy * time_to_reach_z0
    return 0 <= time_to_reach_z0 and abs(x_at_z0) <= 1 and abs(y_at_z0) <= 1



# Exercice 7: Angle entre le vecteur et le plan z
def angle_with_plane(v):
    norm = vector_norm(v)
    return math.degrees(math.acos(v[2] / norm)) if norm != 0 else 0



# Test des fonctions
v1 = create_vector(1, 2, 3)
v2 = create_vector(4, 5, 6)



print("Vecteur v1:", v1)
print("Vecteur v2:", v2)
print("Somme de v1 et v2:", vector_sum(v1, v2))
print("Différence de v1 et v2:", vector_difference(v1, v2))
print("Multiplication de v1 par 3:", vector_multiply(v1, 3))
print("Norme de v1:", vector_norm(v1))
print("Position de la balle après 1 seconde:", ball_position(0, 0, 0, 1, 1, 1))
print("Collision avec la batte:", check_collision(0, 0, 1, 1, 1, -1))
print("Angle entre v1 et le plan z:", angle_with_plane(v1))
