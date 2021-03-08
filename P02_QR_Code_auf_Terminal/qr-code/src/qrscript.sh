#!/bin/bash

date "+%d/%m/%Y-%H:%M" |  qrencode -t ASCII | ./a.out 

