#!/bin/bash
git checkout stg
git merge dev --no-ff -m "Merge dev to stg $(date +'%Y-%m-%d %H:%M:%S')"
TAG_NAME="stg-$(date +'%Y%m%d_%H%M%S')"
git tag $TAG_NAME
git push origin stg --tags
git checkout dev
