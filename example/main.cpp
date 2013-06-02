/*
 * Copyright 2013 gtalent2@gmail.com
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *   http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#include <iostream>
#include "Model.hpp"

using namespace std;
using namespace models;

int main() {
	Model1 mod;
	mod.load("{\"Field1\": \"Ni!\", \"Field2\": 5, \"Field3\": [4, 2], \"Field4\": [[\"Narf!\", \"Narf!\"], [\"Narf!\", \"Narf!\"]], \"Field5\": {\"Narf\": \"Ni\"}}");
	cout << mod.write() << endl;
	return 0;
}
