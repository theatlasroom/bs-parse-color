type rgb = (int, int, int);

type hsl = (int, int, int);

type hsv = (int, int, int);

type color = {
  rgb,
  hsl,
  hsv,
};

let emptyColor = {rgb: (0, 0, 0), hsl: (0, 0, 0), hsv: (0, 0, 0)};

type parse = string => color;

let parse = _str => {
  let c = {...emptyColor, rgb: (0, 0, 0)};
  c;
};
