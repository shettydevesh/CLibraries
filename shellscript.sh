#!/bin/bash

LOCATION=`pwd`


read -p "Enter the username: " user

read -p "Enter the file name(without the extension): " File

read -p "Enter the project name: " name

cd /home/$user/

if [ -d $name ]
then
    cd $LOCATION
else
    mkdir "$name"
    cd /home/$user/$name
    mkdir Output
    cd $LOCATION
fi

if [ -f "$File".c ]
then
    gcc -c "$File".c
else
    echo "No such file exists"
    exit
fi

read -p "Enter the name of your library: " lib

if [ -d /home/$user/$name/Library ]
then    
    cd /home/$user/$name/Library
else
    cd /home/$user/$name/
    mkdir Library
fi

export LD_LIBRARY_PATH=:/home/$user/$name/Library

cd /home/$user/$name/Library

if [ -f  lib"$lib".so ]
then
    cd $LOCATION
    export LD_LIBRARY_PATH=:/home/$user/$name/Library
    gcc -o $File -L /home/$user/$name/Library $File.o -l"$lib" && ./$File
else
    echo "Library doesn't exist!"
    read -p "Would you like to create this library? " choice
    if [[ "$choice" == "Yes" ]]
    then   
        echo -n "Enter the location of the function files: "
        read floc
        cd $floc
        echo -n "Enter the function files (with extension): " 
        read func
        gcc -c $func -fpic
        mv *.o /home/$user/$name/Output
        cd /home/$user/$name/Output
        gcc -shared -o lib"$lib".so *.o
        mv lib"$lib".so /home/$user/$name/Library
        rm *.o
        cd $LOCATION
	    export LD_LIBRARY_PATH=:/home/$user/$name/Library
        gcc -o $File -L /home/$user/$name/Library $File.o -l"$lib" && ./$File
        export LD_LIBRARY_PATH=:/home/$user/$name/Library
    else
        echo "Well its seems like you dont want to create a library. Fine."
        exit
    fi
fi
