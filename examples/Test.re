let c = ParseColor.parse("orange");

Js.log(c);

Js.log(c.rgb);

Js.log(c.rgba);

Js.log(c.hex);

Js.log(c.keyword);

/* Lol, but why? */
Js.log(c |> ParseColor.asHex |> ParseColor.parse |> ParseColor.asKeyword);

Js.log(c |> ParseColor.asKeyword);

Js.log(c |> ParseColor.asHsv);

Js.log(c |> ParseColor.asHsva);

Js.log(c |> ParseColor.asHsl);

Js.log(c |> ParseColor.asHsla);

Js.log(c |> ParseColor.asRgb);

Js.log(c |> ParseColor.asRgba);
