package main

import (
//	"./sub"
	"fmt"
)

func main() {

	for i := 0; i < 2; i++ {
		fmt.Println( "test" )
		go where()
		/*sub.boom()*/
	}

}
