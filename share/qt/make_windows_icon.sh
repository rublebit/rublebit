#!/bin/bash
# create multiresolution windows icon
ICON_SRC=../../src/qt/res/icons/rublebit.png
ICON_DST=../../src/qt/res/icons/rublebit.ico
convert ${ICON_SRC} -resize 16x16 rublebit-16.png
convert ${ICON_SRC} -resize 32x32 rublebit-32.png
convert ${ICON_SRC} -resize 48x48 rublebit-48.png
convert rublebit-16.png rublebit-32.png rublebit-48.png ${ICON_DST}

