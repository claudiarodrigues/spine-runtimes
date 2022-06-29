#!/bin/bash
set -e

dir="$( cd "$( dirname "${BASH_SOURCE[0]}" )" >/dev/null && pwd )"
pushd $dir > /dev/null

if [ ! "$#" -eq 2 ]; then
	echo "Usage: ./setup.sh <Godot branch or tag> <dev:true|false>"
	echo
	echo "e.g.:"
	echo "       ./setup.sh 3.4.4-stable true"
	echo "       ./setup.sh master false"
	echo		
	exit 1
fi

branch=${1%/}
dev=${2%/}

pushd ..
rm -rf godot
git clone --depth 1 https://github.com/godotengine/godot.git -b $branch
if [ $dev = "true" ]; then
	cp -r .idea godot
	cp build/custom.py godot
	rm -rf example/.import
	rm -rf example/.godot
fi
cp -r ../spine-cpp/spine-cpp spine_godot
popd

popd > /dev/null