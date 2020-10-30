type sizeModifier =
  | SizeXSmall
  | SizeSmall
  | SizeMedium
  | SizeLarge
  | SizeXLarge
  | SizeExpand;

let sizeModifierToClass = modifier =>
  switch (modifier) {
  | SizeXSmall => " uk-container-xsmall"
  | SizeSmall => " uk-container-small"
  | SizeMedium => ""
  | SizeLarge => " uk-container-large"
  | SizeXLarge => " uk-container-xlarge"
  | SizeExpand => " uk-container-expand"
  };

[@react.component]
let make = (~children, ~size=SizeMedium) => {
  let className = "uk-container" ++ sizeModifierToClass(size);

  <div className> children </div>;
};
