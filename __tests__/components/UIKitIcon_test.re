open Jest;
open Expect;
open ReactTestingLibrary;
open ReasonUIKit;

describe("Icon component render", () => {
  test("pure", () => {
    <Icon icon=Icon.Camera />
    |> render
    |> container
    |> expect
    |> toMatchSnapshot
  });

  test("with ratio", () => {
    <Icon icon=Icon.Home ratio=2 />
    |> render
    |> container
    |> expect
    |> toMatchSnapshot
  });
});
