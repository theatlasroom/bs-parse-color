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
  .
  "rgb": rgb,
  "hsl": hsl,
  "hsv": hsv,
  "cmyk": cmyk,
  "keyword": keyword,
  "hex": hex,
  "rgba": rgba,
  "hsla": hsla,
  "hsva": hsva,
  "cmyka": cmyka,
};

/* require our parse-color module and bind to it as a useable variable */
[@bs.module] external parseColor : string => color = "parse-color";

type parse = string => color;

let parse = v => {
  let p = parseColor(v);
  p;
};
