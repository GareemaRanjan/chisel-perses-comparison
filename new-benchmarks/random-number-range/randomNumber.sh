clang randomNumber.c -o randomNumber

readonly EXIT_CODE="$?"

echo $EXIT_CODE

if [[ "${EXIT_CODE}" == "0" ]]; then

  echo "It runs!"

  exit 0

  echo "An error occured!"

fi

exit 1