open Jest;

open Expect;

open ParseColor;

/*
 Almost gave up on the music thing
 But we all so spoiled now
 More life, more everything
 Must have never had your phone tapped
  */
describe("Free smoke free smokkkkeee", () =>
  test("1 + 2 = 3", () =>
    expect(1 + 2) |> toBe(3)
  )
);

describe("parse", () => {
  test("Hex #ffa500", () => {
    let t = "#ffa500" |> parse;
    let res = {
      "rgb": (255, 165, 0),
      "hsl": (39, 100, 50),
      "hsv": (39, 100, 100),
      "cmyk": (0, 35, 100, 0),
      "keyword": Some("orange"),
      "hex": Some("#ffa500"),
      "rgba": (255, 165, 0, 1.0),
      "hsla": (39, 100, 50, 1.0),
      "hsva": (39, 100, 100, 1.0),
      "cmyka": (0, 35, 100, 0, 1.0),
    };
    expect(t) |> toEqual(res);
  });
  test("Hex #333", () => {
    let t = "#333" |> parse;
    let res = {
      "rgb": (51, 51, 51),
      "hsl": (0, 0, 20),
      "hsv": (0, 0, 20),
      "cmyk": (0, 0, 0, 80),
      "keyword": None,
      "hex": Some("#333333"),
      "rgba": (51, 51, 51, 1.0),
      "hsla": (0, 0, 20, 1.0),
      "hsva": (0, 0, 20, 1.0),
      "cmyka": (0, 0, 0, 80, 1.0),
    };
    expect(t) |> toEqual(res);
  });
  test("Hex #f98", () => {
    let t = "#f98" |> parse;
    let res = {
      "rgb": (255, 153, 136),
      "hsl": (9, 100, 77),
      "hsv": (9, 47, 100),
      "cmyk": (0, 40, 47, 0),
      "keyword": None,
      "hex": Some("#ff9988"),
      "rgba": (255, 153, 136, 1.0),
      "hsla": (9, 100, 77, 1.0),
      "hsva": (9, 47, 100, 1.0),
      "cmyka": (0, 40, 47, 0, 1.0),
    };
    expect(t) |> toEqual(res);
  });
  test("String 'lime'", () => {
    let t = "lime" |> parse;
    let res = {
      "rgb": (0, 255, 0),
      "hsl": (120, 100, 50),
      "hsv": (120, 100, 100),
      "cmyk": (100, 0, 100, 0),
      "keyword": Some("lime"),
      "hex": Some("#00ff00"),
      "rgba": (0, 255, 0, 1.),
      "hsla": (120, 100, 50, 1.),
      "hsva": (120, 100, 100, 1.),
      "cmyka": (100, 0, 100, 0, 1.),
    };
    expect(t) |> toEqual(res);
  });
  test("String hsl(210,50,50)", () => {
    let t = "hsl(210,50,50)" |> parse;
    let res = {
      "rgb": (64, 127, 191),
      "hsl": (210, 50, 50),
      "hsv": (210, 67, 75),
      "cmyk": (67, 33, 0, 25),
      "keyword": None,
      "hex": Some("#407fbf"),
      "rgba": (64, 127, 191, 1.),
      "hsla": (210, 50, 50, 1.),
      "hsva": (210, 67, 75, 1.),
      "cmyka": (67, 33, 0, 25, 1.),
    };
    expect(t) |> toEqual(res);
  });
  test("String rgba(153,50,204,60%)", () => {
    let t = "rgba(153,50,204,60%)" |> parse;
    let res = {
      "rgb": (153, 50, 204),
      "hsl": (280, 61, 50),
      "hsv": (280, 75, 80),
      "cmyk": (25, 75, 0, 20),
      "keyword": Some("darkorchid"),
      "hex": Some("#9932cc"),
      "rgba": (153, 50, 204, 0.6),
      "hsla": (280, 61, 50, 0.6),
      "hsva": (280, 75, 80, 0.6),
      "cmyka": (25, 75, 0, 20, 0.6),
    };
    expect(t) |> toEqual(res);
  });
});
