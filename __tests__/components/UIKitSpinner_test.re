open Jest;
open Expect;
open ReactTestingLibrary;
open ReasonUIKit;

describe("UIKitSpinner", () => {
  test("should render correctly", () => {
    <Spinner />
    |> render
    |> container
    |> expect
    |> toMatchSnapshot
  });
});
