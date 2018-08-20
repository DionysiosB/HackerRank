arr=($(cat))
declare -a pattern=( ${arr[@]/*[Aa]*/})
echo ${pattern[@]}
