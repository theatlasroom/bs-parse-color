// Generated by BUCKLESCRIPT VERSION 4.0.5, PLEASE EDIT WITH CARE
'use strict';

var ParseColor = require("../src/ParseColor.bs.js");

var c = ParseColor.parse("orange");

console.log(c);

console.log(c.rgb);

console.log(c.rgba);

console.log(c.hex);

console.log(c.keyword);

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
