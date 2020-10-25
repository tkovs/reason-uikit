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
  | SizeRegular
  | SizeLarge;

let sizeModifierToClass = modifier =>
  switch (modifier) {
  | SizeSmall => "uk-button-small"
  | SizeRegular => ""
  | SizeLarge => "uk-button-large"
  };

[@react.component]
let make = (~children, ~style=StyleDefault, ~size=SizeRegular) => {
  let className =
    "uk-button"
    ++ " "
    ++ styleModifierToClass(style)
    ++ " "
    ++ sizeModifierToClass(size);

  <button className> children </button>;
};
