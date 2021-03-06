<h1 align="center">
  <br>
  reason-uikit
</h1>

<h4 align="center">
  A ReasonML React implementation of the <a link="https://getuikit.com/">UIKit</a>
</h4>
<p align="center">
  <img alt="GitHub top language" src="https://img.shields.io/github/languages/top/tkovs/reason-uikit.svg">

  <img alt="GitHub language count" src="https://img.shields.io/github/languages/count/tkovs/reason-uikit.svg">
  
  <img alt="GitHub commit activity" src="https://img.shields.io/github/commit-activity/m/tkovs/reason-uikit.svg">

  <img alt="Repository size" src="https://img.shields.io/github/repo-size/tkovs/reason-uikit.svg">
  <br />
  <a href="https://github.com/tkovs/reason-uikit/commits/master">
    <img alt="GitHub last commit" src="https://img.shields.io/github/last-commit/tkovs/reason-uikit.svg">
  </a>

  <a href="https://github.com/tkovs/reason-uikit/issues">
    <img alt="Repository issues" src="https://img.shields.io/github/issues/tkovs/reason-uikit.svg">
  </a>

  <img alt="GitHub" src="https://img.shields.io/github/license/tkovs/reason-uikit.svg">
</p>

<p align="center">
  <a href="#migration-status">Migration status</a>&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;
  <a href="#how-do-i-install">How do I install?</a>&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;
  <a href="#usage">Usage</a>
</p>

## Migration status

Not all of the [UIKit][uikit] components were implemented.

### Finished

### Partially

- Icon
- Button
- Container
- Width
- Padding
- Spinner
- Badge

### To begin

* Input
* Label
* Link
* ...

## How do I install?
1. Add the [reason-uikit][npm-reason-uikit] package to your project.
```sh
yarn add reason-uikit
```
2. Add `reason-uikit` to your `bsconfig.json`
```json
{
  "dependencies": [ "reason-uikit" ]
}
```
3. Enjoy!

## Usage

Import ReasonUIKit and just use the components.

```reason
open ReasonUIKit;

[@react.component]
let make = () =>
  <Container size=Container.SizeSmall>
    <Button onClick={_ => ()} style=Button.StylePrimary size=Button.SizeLarge>
      <Icon icon=Icon.Play ratio=2 />
    </Button>
  </Container>;
```

[uikit]: https://getuikit.com/
[npm-reason-uikit]: https://www.npmjs.com/package/reason-uikit
