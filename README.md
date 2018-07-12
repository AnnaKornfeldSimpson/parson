DO NOT USE THIS COPY OF PARSON

It is for debugging issues with checked-c-convert.

Run `make test` to compile the original code (only change is that stdlib etc. headers were replaced with their _checked versions).
Run `make testchecked` to compile the original tests and the converted versions of `parson.checked.c` and `parson.checked.h`. These versions were converted with the checked-c-convert tool and then manually patched until they compiled without error. The tests.c file was not changed.

    
## License
[The MIT License (MIT)](http://opensource.org/licenses/mit-license.php)
