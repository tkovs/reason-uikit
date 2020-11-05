include UIKitUtilityProperties;

type componentModifiers =
  | WidthModifier(option(widthModifier))
  | PaddingModifier(option(paddingModifier));

let concatAroundSpaces = (a, b) => a ++ " " ++ b;

let transform = modifier =>
  switch (modifier) {
  | PaddingModifier(padding) => padding |> paddingModifierToClass
  | WidthModifier(width) => width |> widthModifierToClass
  };

let componentModifiersMap = modifiers =>
  List.map(transform, modifiers) |> List.fold_left(concatAroundSpaces, "");

[@react.component]
let make = (~children, ~padding=None, ~width=None) => {
  let className =
    [PaddingModifier(padding), WidthModifier(width)]
    |> componentModifiersMap;

  <div className> children </div>;
};
