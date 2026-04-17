#!/bin/bash
# Использование: ./deploy.sh stg или ./deploy.sh prd
TARGET=$1
if [ "$TARGET" != "stg" ] && [ "$TARGET" != "prd" ]; then
    echo "Usage: ./deploy.sh stg|prd"
    exit 1
fi
git checkout $TARGET
git merge dev
git checkout dev
echo "Changes deployed to $TARGET"
