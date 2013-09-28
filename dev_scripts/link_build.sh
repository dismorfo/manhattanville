#!/bin/bash

die() {
    echo >&2 "$@"
    exit 1
}

[ "$#" -eq 2 ] || die "2 arguments required: custom_code_lib_dir, build_dir"

[ -d $1 ] || die "Library directory $1 does not exist"
[ -d $2 ] || die "Build directory $2 does not exist"


site_dirs=(modules themes)

for site_dir in "${site_dirs[@]}"
do
    for dir in $1/${site_dir}/*
    do 
        base=${dir##*/}
        rm -rf $2/sites/all/${site_dir}/${base}

        ln -s $(pwd)/$1/${site_dir}/${base} $2/sites/all/${site_dir}/${base}
    done
done

for dir in $1/profiles/*
do 
    base=${dir##*/}
    rm -rf $2/profiles/${base}

    ln -s $(pwd)/$1/profiles/${base} $2/profiles/${base}
done

echo "ok"
