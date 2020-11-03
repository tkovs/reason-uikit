type styleModifier =
  | StyleDefault
  | StylePrimary
  | StyleSecondary
  | StyleDanger
  | StyleText
  | StyleLink;

let styleModifierToClass = modifier =>
  switch (modifier) {
  | StyleDefault => "uk-button-default"
  | StylePrimary => "uk-button-primary"
  | StyleSecondary => "uk-button-secondary"
  | StyleDanger => "uk-button-danger"
  | StyleText => "uk-button-text"
  | StyleLink => "uk-button-link"
  };

type sizeModifier =
  | SizeSmall
  | SizeMedium
  | SizeLarge;

let sizeModifierToClass = modifier =>
  switch (modifier) {
  | SizeSmall => "uk-button-small"
  | SizeMedium => ""
  | SizeLarge => "uk-button-large"
  };

type buttonModifiers =
  | SizeModifier(sizeModifier)
  | StyleModifier(styleModifier);

let concatAroundSpaces = (a, b) => a ++ " " ++ b;

let transform = modifier =>
  switch (modifier) {
  | SizeModifier(size) => size |> sizeModifierToClass
  | StyleModifier(style) => style |> styleModifierToClass
  };

let buttonModifiersMap = modifiers =>
  List.map(transform, modifiers) |> List.fold_left(concatAroundSpaces, "");

[@react.component]
let make =
    (
      ~children,
      ~disabled=false,
      ~size=SizeMedium,
      ~style=StyleDefault,
      ~testId="",
      ~onClick: ReactEvent.Mouse.t => unit,
    ) => {
  let classNames =
    [StyleModifier(style), SizeModifier(size)] |> buttonModifiersMap;
  let className = "uk-button" ++ classNames;

  let spreadProps = {"data-testid": testId};

  <Spread props=spreadProps>
    <button className onClick disabled> children </button>
  </Spread>;
};
