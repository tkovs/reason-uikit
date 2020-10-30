open ReasonUIKit;

[@react.component]
let make = () =>
  <Container>
    <Button onClick={_ => ()} style=Button.StyleDanger>
      {React.int(5)}
    </Button>
  </Container>;
