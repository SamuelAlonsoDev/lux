ask_name()
{
    echo Please specify the output binary name:
    read ppp
    export lux_mac_output="$ppp"
}

ask_binary()
{
    echo Do you want to modify the output binary name? [y/n]
    read pp
    if [ "$pp" = "y" ]; then
    ask_name
    elif [ "$pp" != "n" ]; then
    ask_binary
    fi;
}

ask_console()
{
    echo Do you want this to be a console project? [y/n]
    read p
    if [ "$p" = "y" ]; then
    export lux_mac_project="-D lux_console"
    elif [ "$p" = "n" ]; then
    export lux_mac_project="-D lux_mac"
    else
    ask_console
    fi;
    ask_binary
}

ask_console
./build.sh