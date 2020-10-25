[@react.component]
let make = () =>
  <div className="uk-container">
    <form>
      <fieldset className="uk-fieldset">
        <legend className="uk-legend"> {React.string("Legend")} </legend>
        <div className="uk-margin">
          <input className="uk-input" type_="text" placeholder="Input" />
        </div>
        <div className="uk-margin">
          <select className="uk-select">
            <option> {React.string("Option 01")} </option>
            <option> {React.string("Option 02")} </option>
          </select>
        </div>
        <div className="uk-margin">
          <textarea className="uk-textarea" rows=5 placeholder="Textarea" />
        </div>
        <div className="uk-margin uk-grid-small uk-child-width-auto uk-grid">
          <label>
            <input
              className="uk-radio"
              type_="radio"
              name="radio2"
              checked=true
            />
            {React.string("A")}
          </label>
          <label>
            <input className="uk-radio" type_="radio" name="radio2" />
            {React.string("B")}
          </label>
        </div>
        <div className="uk-margin uk-grid-small uk-child-width-auto uk-grid">
          <label>
            <input className="uk-checkbox" type_="checkbox" checked=true />
            {React.string("A")}
          </label>
          <label>
            <input className="uk-checkbox" type_="checkbox" />
            {React.string("B")}
          </label>
        </div>
        <div className="uk-margin">
          <input
            className="uk-range"
            type_="range"
            value="2"
            min="0"
            max="10"
            step=0.1
          />
        </div>
      </fieldset>
    </form>
  </div>;
