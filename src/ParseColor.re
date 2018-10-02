type rgb = (int, int, int);

type hsl = (int, int, int);

type hsv = (int, int, int);

type cmyk = (int, int, int, int);

type keyword = string;

type hex = string;

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
  keyword: "",
  hex: "",
  rgba: unitAlphaColor,
  hsla: unitAlphaColor,
  hsva: unitAlphaColor,
  cmyka: (0, 0, 0, 0, 0.),
};

type parse = string => color;

let parse = _str => {
  let c = defaultColor;
  c;
};
