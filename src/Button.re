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

[@react.component]
let make = (~style=StyleDefault, ~children) => {
  let className = "uk-button" ++ " " ++ styleModifierToClass(style);

  <button className> children </button>;
};
