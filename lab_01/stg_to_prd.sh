#!/bin/bash
git checkout prd
git merge stg --no-ff -m "Merge stg to prd $(date +'%Y-%m-%d %H:%M:%S')"
TAG_NAME="prd-$(date +'%Y%m%d_%H%M%S')"
git tag $TAG_NAME
git push origin prd --tags
git checkout dev

