#!/bin/bash
#script to remove duplicates from file

awk '!seen[$0]++' passwordlist.txt > outpt.txt && awk '{ print }' outpt.txt > passwordlist.txt && rm outpt.txt
