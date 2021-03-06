/*
   Copyright 2013 - 2015 gtalent2@gmail.com

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

     http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
*/
package main

import (
	"github.com/gtalent/cyborgjson/parser"
)

const (
	USING_JANSSON = iota
	USING_QT      = iota
	USING_GO      = iota
)

type Out interface {
	write(string) string
	writeFile(string) error
	addClass(string)
	addVar(string, []parser.VarType)
	closeClass(string)
}
