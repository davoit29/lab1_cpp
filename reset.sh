#!/bin/bash
# Жесткий откат: удаляет изменения и новые файлы
git reset --hard HEAD
git clean -fd
echo "Repository reset to last commit state"
