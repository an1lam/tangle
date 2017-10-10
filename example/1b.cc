:(after "Print Something")
cout << "Hello, world!\n";

:(before "End Print Something")
cout << "Goodbye, world!\n";
