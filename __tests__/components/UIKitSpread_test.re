open Jest;
open Expect;
open ReactTestingLibrary;

describe("Spread component render", () => {
  test("should spread id prop in his children", () => {
    <Spread props={"id": "root"}> <div /> </Spread>
    |> render
    |> container
    |> expect
    |> toMatchSnapshot
  });

  test("should spread props in his children", () => {
    let props = {"data-testid": "submit-button", "uk-button": ""};

    <Spread props> <div /> </Spread>
    |> render
    |> container
    |> expect
    |> toMatchSnapshot;
  });
});
