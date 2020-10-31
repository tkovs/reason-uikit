open Jest;
open Expect;
open ReactTestingLibrary;
open ReasonUIKit;

describe("Container component render", () => {
  test("pure", () => {
    <Container> {React.string("tkovs")} </Container>
    |> render
    |> container
    |> expect
    |> toMatchSnapshot
  });

  test("with size", () => {
    <Container size=Container.SizeLarge> {React.string("tkovs")} </Container>
    |> render
    |> container
    |> expect
    |> toMatchSnapshot
  });
});
