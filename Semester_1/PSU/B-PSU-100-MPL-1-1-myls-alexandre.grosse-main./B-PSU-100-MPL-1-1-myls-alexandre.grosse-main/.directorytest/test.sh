#!/bin/bash

# Nettoyage préalable
rm -rf test_empty_dir test_file.txt test_dir test_file1.txt test_file2.txt no_permission_dir symlink_to_test_file -- -fichier.txt "fichier avec espaces.txt" fichier_éèêë.txt output.txt

echo "=== Début des tests ==="
echo

# Test 1: Lister le répertoire courant sans options
echo "Test 1: Lister le répertoire courant sans options"
./my_ls
echo

# Test 2: Lister un répertoire spécifique
echo "Test 2: Lister un répertoire spécifique"
mkdir test_dir_specific
./my_ls test_dir_specific
echo

# Test 3: Lister un répertoire vide
echo "Test 3: Lister un répertoire vide"
mkdir test_empty_dir
./my_ls test_empty_dir
echo

# Test 4: Utiliser l'option -l dans le répertoire courant
echo "Test 4: Utiliser l'option -l dans le répertoire courant"
./my_ls -l
echo

# Test 5: Lister un fichier spécifique
echo "Test 5: Lister un fichier spécifique"
touch test_file.txt
./my_ls test_file.txt
echo

# Test 6: Combiner l'option -l avec un fichier
echo "Test 6: Combiner l'option -l avec un fichier"
./my_ls -l test_file.txt
echo

# Test 7: Lister plusieurs fichiers et répertoires
echo "Test 7: Lister plusieurs fichiers et répertoires"
mkdir test_dir
touch test_file1.txt test_file2.txt
./my_ls test_file1.txt test_dir test_file2.txt
echo

# Test 8: Utiliser une option invalide
echo "Test 8: Utiliser une option invalide"
./my_ls -z
echo

# Test 9: Accéder à un fichier ou répertoire inexistant
echo "Test 9: Accéder à un fichier ou répertoire inexistant"
./my_ls fichier_inexistant.txt
echo

# Test 10: Lister un répertoire sans permission de lecture
echo "Test 10: Lister un répertoire sans permission de lecture"
mkdir no_permission_dir
chmod 000 no_permission_dir
./my_ls no_permission_dir
chmod 755 no_permission_dir  # Restaurer les permissions
echo

# Test 11: Tester avec des liens symboliques
echo "Test 11: Tester avec des liens symboliques"
ln -s test_file.txt symlink_to_test_file
./my_ls symlink_to_test_file
./my_ls -l symlink_to_test_file
echo

# Test 12: Fichiers avec des noms spéciaux
echo "Test 12: Fichiers avec des noms spéciaux"
touch -- -fichier.txt
touch "fichier avec espaces.txt"
./my_ls
echo

# Test 13: Utiliser des variables d'environnement comme argument
echo "Test 13: Utiliser des variables d'environnement comme argument"
./my_ls "$HOME"
echo

# Test 14: Tester avec des encodages de caractères différents
echo "Test 14: Tester avec des encodages de caractères différents"
touch fichier_éèêë.txt
./my_ls
echo

# Nettoyage final
rm -rf test_empty_dir test_dir_specific test_file.txt test_dir test_file1.txt test_file2.txt no_permission_dir symlink_to_test_file -- -fichier.txt "fichier avec espaces.txt" fichier_éèêë.txt

echo "=== Tests terminés ==="
