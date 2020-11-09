ask_exceptions()
{
    echo Please add the ID of the exceptions you want to enable, separated by an space[i.e, 1 6 4 10]:
    echo   1 = null_ptr
    read ppppp
    ex=""
    set -f
    set -- junk $ppppp
    shift
    set +f
    for word; do
        if [ "$word" = "1" ]; then
        ex="$ex -D lux_null_ptr"
        fi;
    done
    export lux_mac_exceptions="$ex"
}

ask_exception()
{
    echo Do you want to change the exceptions configuration? [y/n]
    read pppp
    if [ "$pppp" = "y" ]; then
    ask_exceptions
    elif [ "$pppp" = "n" ]; then
    export lux_mac_exceptions=""
    else
    ask_exception
    fi;
}

ask_name()
{
    echo Please specify the output binary name:
    read ppp
    export lux_mac_output="$ppp"
    ask_exception
}

ask_binary()
{
    echo Do you want to modify the output binary name? [y/n]
    read pp
    if [ "$pp" = "y" ]; then
    ask_name
    elif [ "$pp" = "n" ]; then
    export lux_mac_output="lux"
    ask_exception
    else
    ask_binary
    fi;
}

ask_console()
{
    echo Do you want this to be a console project? [y/n]
    read p
    if [ "$p" = "y" ]; then
    export lux_mac_project="-D lux_console -D lux_mac"
    elif [ "$p" = "n" ]; then
    export lux_mac_project="-D lux_mac"
    else
    ask_console
    fi;
    ask_binary
}

ask_console
./build.sh