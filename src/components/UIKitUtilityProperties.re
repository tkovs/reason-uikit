type widthModifier =
  | WidthSmall
  | WidthMedium
  | WidthLarge
  | WidthXLarge
  | Width2XLarge;

let widthModifierToClass = modifier =>
  switch (modifier) {
  | None => ""
  | Some(WidthSmall) => "uk-width-small "
  | Some(WidthMedium) => "uk-width-medium "
  | Some(WidthLarge) => "uk-width-large "
  | Some(WidthXLarge) => "uk-width-xlarge "
  | Some(Width2XLarge) => "uk-width-2xlarge "
  };

type paddingModifier =
  | PaddingSmall
  | PaddingMedium
  | PaddingLarge;

let paddingModifierToClass = modifier =>
  switch (modifier) {
  | None => ""
  | Some(PaddingSmall) => "uk-padding-small "
  | Some(PaddingMedium) => "uk-padding "
  | Some(PaddingLarge) => "uk-padding-large "
  };
