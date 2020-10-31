open ReasonUIKit;

[@react.component]
let make = () =>
  <Container>
    <Button onClick={_ => ()} style=Button.StyleDanger>
      <Icon icon=Icon.PlayCircle ratio=2 />
    </Button>
  </Container>;
