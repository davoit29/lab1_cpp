#!/bin/bash
set -e
git checkout stg
git pull origin stg
git merge dev -m "merge dev to stg"
git push origin stg
git checkout prd
git pull origin prd
git merge stg -m "merge stg to prd"
git push origin prd
git checkout dev
