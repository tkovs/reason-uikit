open Jest;
open Expect;
open ReactTestingLibrary;
open ReasonUIKit;

describe("Component", () => {
  test("pure", () => {
    <Button onClick={_ => ()}> {React.string("Back")} </Button>
    |> render
    |> container
    |> expect
    |> toMatchSnapshot
  });

  test("with size", () => {
    <Button onClick={_ => ()} size=Button.SizeLarge>
      {React.string("Back")}
    </Button>
    |> render
    |> container
    |> expect
    |> toMatchSnapshot
  });

  test("with style", () => {
    <Button onClick={_ => ()} style=Button.StylePrimary>
      {React.string("Back")}
    </Button>
    |> render
    |> container
    |> expect
    |> toMatchSnapshot
  });
});
