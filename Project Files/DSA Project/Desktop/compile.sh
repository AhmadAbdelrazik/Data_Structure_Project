#!/usr/bin/env sh

######################################################################
# @author      : Ahmad Abdelrazik (ahmadabdelrazik159@gmail.com)
# @file        : compile
# @created     : Saturday Dec 16, 2023 13:02:20 EET
#
# @description : Compile Cpp file 
######################################################################

g++ *.cpp *.h -o $1
./$1
