type rgb = (int, int, int);

type hsl = (int, int, int);

type hsv = (int, int, int);

type cmyk = (int, int, int, int);

type keyword = option(string);

type hex = option(string);

type rgba = (int, int, int, float);

type hsla = (int, int, int, float);

type hsva = (int, int, int, float);

type cmyka = (int, int, int, int, float);

type color = {
  rgb,
  hsl,
  hsv,
  cmyk,
  keyword,
  hex,
  rgba,
  hsla,
  hsva,
  cmyka,
};

let unitColor: (int, int, int) = (0, 0, 0);

let unitAlphaColor: (int, int, int, float) = (0, 0, 0, 0.);

let defaultColor: color = {
  rgb: unitColor,
  hsl: unitColor,
  hsv: unitColor,
  cmyk: (0, 0, 0, 0),
  keyword: None,
  hex: None,
  rgba: unitAlphaColor,
  hsla: unitAlphaColor,
  hsva: unitAlphaColor,
  cmyka: (0, 0, 0, 0, 0.),
};

/* require our parse-color module and bind to it as a useable variable */
[@bs.module] external parseColor : string => color = "parse-color";

type parse = string => color;

let parse = v => {
  let parsed = parseColor(v);
  Js.log(parsed);
  Js.log(parsed.rgb);
  Js.log(parsed.rgba);
  parsed;
};
