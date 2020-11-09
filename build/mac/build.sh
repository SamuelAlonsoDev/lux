clang++ ../../lux.mm "$lux_mac_project" "$lux_mac_exceptions" -std=c++2a -O3 -I "../../" -framework AppKit -framework Metal -o ../../out/mac/"$lux_mac_output"
./../../out/mac/"$lux_mac_output"
echo 
echo 
read -p "Press 'enter' to continue..."