#!/usr/bin/env bash

. run.conf

runSubScript() {
	if [[ "$1" = "true" ]]
	then
		
		echo -e "\e[1;36mRunning $2 \e[0m"
		bash "$2"
		echo -e "\e[1;36m::End $2 \e[0m"
	else
		echo -e "\e[1;49;31mSkipping $2 \e[0m"
	fi

}

runSubScript "$Args" "./src/Args.sh"
runSubScript "$BashConstructs" "./src/BashConstructs.sh"
runSubScript "$BashSyntax" "./src/BashSyntax.sh"
runSubScript "$ControlStructures" "./src/ControlStructures.sh"
runSubScript "$Colors" "./src/Colors.sh"
runSubScript "$Functions" "./src/Functions.sh"
runSubScript "$ProgramControl" "./src/ProgramControl.sh"
runSubScript "$Variables" "./src/Variables.sh"
