type iconModifier =
  | Home
  | SignIn
  | SignOut
  | User
  | Users
  | Lock
  | Unlock
  | Settings
  | Cog
  | Nut
  | Comment
  | Commenting
  | Comments
  | Hashtag
  | Tag
  | Cart
  | CreditCard
  | Mail
  | Receiver
  | Print
  | Search
  | Location
  | Bookmark
  | Code
  | PaintBucket
  | Camera
  | VideoCamera
  | Bell
  | Microphone
  | Bolt
  | Star
  | Heart
  | Happy
  | Lifesaver
  | Rss
  | Social
  | GitBranch
  | GitFork
  | World
  | Calendar
  | Clock
  | History
  | Future
  | Pencil
  | Trash
  | Move
  | Link
  | Question
  | Info
  | Warning
  | Image
  | Thumbnails
  | Table
  | List
  | Menu
  | Grid
  | More
  | MoreVertical
  | Plus
  | PlusCircle
  | Minus
  | MinusCircle
  | Close
  | Check
  | Ban
  | Refresh
  | Play
  | PlayCircle
  | Tv
  | Desktop
  | Laptop
  | Tablet
  | Phone
  | TabletLandscape
  | PhoneLandscape
  | File
  | FileText
  | FilePdf
  | Copy
  | FileEdit
  | Folder
  | Album
  | Push
  | Pull
  | Server
  | Database
  | CloudUpload
  | CloudDownload
  | Download
  | Upload
  | Reply
  | Forward
  | Expand
  | Shrink
  | ArrowUp
  | ArrowDown
  | ArrowLeft
  | ArrowRight
  | ChevronUp
  | ChevronDown
  | ChevronLeft
  | ChevronRight
  | ChevronDoubleLeft
  | ChevronDoubleRight
  | TriangleUp
  | TriangleDown
  | TriangleLeft
  | TriangleRight
  | Bold
  | Italic
  | Strikethrough
  | QuoteRight
  | FiveHundredPx
  | Behance
  | Dribbble
  | Etsy
  | Facebook
  | Flickr
  | Foursquare
  | Github
  | GithubAlt
  | Gitter
  | Google
  | GooglePlus
  | Instagram
  | Joomla
  | Linkedin
  | PageKit
  | Pinterest
  | Reddit
  | Soundcloud
  | TripAdvisor
  | Tumblr
  | Twitter
  | UIKit
  | Vimeo
  | Whatsapp
  | Wordpress
  | Xing
  | Yelp
  | YouTube;

let iconModifierToProperty = icon =>
  switch (icon) {
  | Home => "home"
  | SignIn => "sign-in"
  | SignOut => "sign-out"
  | User => "user"
  | Users => "users"
  | Lock => "lock"
  | Unlock => "unlock"
  | Settings => "settings"
  | Cog => "cog"
  | Nut => "nut"
  | Comment => "comment"
  | Commenting => "commenting"
  | Comments => "comments"
  | Hashtag => "hashtag"
  | Tag => "tag"
  | Cart => "cart"
  | CreditCard => "credit-card"
  | Mail => "mail"
  | Receiver => "receiver"
  | Print => "print"
  | Search => "search"
  | Location => "location"
  | Bookmark => "bookmark"
  | Code => "code"
  | PaintBucket => "paintbucket"
  | Camera => "camera"
  | VideoCamera => "video-camera"
  | Bell => "bell"
  | Microphone => "microphone"
  | Bolt => "bolt"
  | Star => "star"
  | Heart => "heart"
  | Happy => "happy"
  | Lifesaver => "lifesaver"
  | Rss => "rss"
  | Social => "social"
  | GitBranch => "git-branch"
  | GitFork => "git-fork"
  | World => "world"
  | Calendar => "calendar"
  | Clock => "clock"
  | History => "history"
  | Future => "future"
  | Pencil => "pencil"
  | Trash => "trash"
  | Move => "move"
  | Link => "link"
  | Question => "question"
  | Info => "info"
  | Warning => "warning"
  | Image => "image"
  | Thumbnails => "thumbnails"
  | Table => "table"
  | List => "list"
  | Menu => "menu"
  | Grid => "grid"
  | More => "more"
  | MoreVertical => "more-vertical"
  | Plus => "plus"
  | PlusCircle => "pluscircle"
  | Minus => "minus"
  | MinusCircle => "minus-circle"
  | Close => "close"
  | Check => "check"
  | Ban => "ban"
  | Refresh => "refresh"
  | Play => "play"
  | PlayCircle => "play-circle"
  | Tv => "tv"
  | Desktop => "desktop"
  | Laptop => "laptop"
  | Tablet => "tablet"
  | Phone => "phone"
  | TabletLandscape => "tablet-landscape"
  | PhoneLandscape => "phone-landscape"
  | File => "file"
  | FileText => "file-text"
  | FilePdf => "file-pdf"
  | Copy => "copy"
  | FileEdit => "file-edit"
  | Folder => "folder"
  | Album => "album"
  | Push => "push"
  | Pull => "pull"
  | Server => "server"
  | Database => "database"
  | CloudUpload => "cloud-upload"
  | CloudDownload => "cloud-download"
  | Download => "download"
  | Upload => "upload"
  | Reply => "reply"
  | Forward => "forward"
  | Expand => "expand"
  | Shrink => "shrink"
  | ArrowUp => "arrow-up"
  | ArrowDown => "arrow-down"
  | ArrowLeft => "arrow-left"
  | ArrowRight => "arrow-right"
  | ChevronUp => "chevron-up"
  | ChevronDown => "chevron-down"
  | ChevronLeft => "chevron-left"
  | ChevronRight => "chevron-right"
  | ChevronDoubleLeft => "chevron-double-left"
  | ChevronDoubleRight => "chevron-double-right"
  | TriangleUp => "triangle-up"
  | TriangleDown => "triangle-down"
  | TriangleLeft => "triangle-left"
  | TriangleRight => "triangle-right"
  | Bold => "bold"
  | Italic => "italic"
  | Strikethrough => "strikethrough"
  | QuoteRight => "quote-right"
  | FiveHundredPx => "500px"
  | Behance => "behance"
  | Dribbble => "dribbble"
  | Etsy => "etsy"
  | Facebook => "facebook"
  | Flickr => "flickr"
  | Foursquare => "foursquare"
  | Github => "github"
  | GithubAlt => "github-alt"
  | Gitter => "gitter"
  | Google => "google"
  | GooglePlus => "google-plus"
  | Instagram => "instagram"
  | Joomla => "joomla"
  | Linkedin => "linkedin"
  | PageKit => "pagekit"
  | Pinterest => "pinterest"
  | Reddit => "reddit"
  | Soundcloud => "soundcloud"
  | TripAdvisor => "tripadvisor"
  | Tumblr => "tumblr"
  | Twitter => "twitter"
  | UIKit => "uikit"
  | Vimeo => "vimeo"
  | Whatsapp => "whatsapp"
  | Wordpress => "wordpress"
  | Xing => "xing"
  | Yelp => "yelp"
  | YouTube => "youtube"
  };

[@react.component]
let make = (~icon) => {
  let icon = {"uk-icon": "icon: " ++ iconModifierToProperty(icon)};

  <Spread props=icon> <span /> </Spread>;
};
