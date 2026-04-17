#!/bin/bash
set -e
git checkout $1
git reset --hard HEAD~1
git push --force origin $1
git checkout dev
