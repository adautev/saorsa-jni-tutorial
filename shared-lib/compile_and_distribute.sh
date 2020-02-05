#!/bin/bash
gcc -I "/usr/lib/jvm/java-11-openjdk-amd64/include/linux/" -I "/usr/lib/jvm/java-11-openjdk-amd64/include/" -I "`pwd`" -c SampleCLib.c
gcc -shared -o SampleCLib.so SampleCLib.o
cp SampleCLib.so /usr/java/packages/lib/libSampleCLib.so
