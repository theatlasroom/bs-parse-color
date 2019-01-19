// Generated by BUCKLESCRIPT VERSION 4.0.18, PLEASE EDIT WITH CARE
'use strict';

var ParseColor = require("../src/ParseColor.bs.js");

var c = ParseColor.parse("orange");

console.log(c);

console.log(c[/* rgb */2]);

console.log(c[/* rgba */6]);

console.log(c[/* hex */1]);

console.log(c[/* keyword */0]);

console.log(ParseColor.asKeyword(ParseColor.parse(ParseColor.asHex(c))));

console.log(ParseColor.asKeyword(c));

console.log(ParseColor.asHsv(c));

console.log(ParseColor.asHsva(c));

console.log(ParseColor.asHsl(c));

console.log(ParseColor.asHsla(c));

console.log(ParseColor.asRgb(c));

console.log(ParseColor.asRgba(c));

exports.c = c;
/* c Not a pure module */
