#!/bin/sh
find . | wc -l | awk "{$1=$1}"
