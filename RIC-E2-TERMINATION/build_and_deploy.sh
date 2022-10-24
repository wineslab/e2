#!/bin/bash
docker build --squash -f Dockerfile -t e2term:ricindi .
docker save e2term:ricindi | gzip > e2termricindi.tar.gz
scp e2termricindi.tar.gz redant0-lxd:/root/ 
echo "done"
