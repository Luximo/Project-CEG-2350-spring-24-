<html>
<h1>Regex cheat sheet

<h2>Special characters
<ul>
    <li>\ = Indicates that the following character should be treated specially, or "escaped"
    <li>^ = Batches the beginning of input
    <li>$ = Batches the end of input
    <li>x* = Batches the preceding item "x" 0 or more times
    <li>x+ = Batches the preceding item "x" 1 or more times. Equivalent to {1,}
    <li>x? = Batches the preceding item "x" 0 or 1 times


<h2>Character classes

<ul>
    <li>\w = Batches any alphanumeric character from the basic Latin alphabet, including the underscore. Equivalent to [A-Za-z0-9_]
    <li>\W = Batches any character that is not a word character from the basic Latin alphabet. Equivalent to [^A-Za-z0-9_]
    <li>\d = Batches any digit (Arabic numeral). Equivalent to [0-9]
    <li>\D = Batches any character that is not a digit (Arabic numeral). Equivalent to [^0-9]
    <li>\s = Batches a single white space character, including space, tab, form feed, line feed, and other Unicode spaces
    <li>\S = Batches a single character other than white space.


