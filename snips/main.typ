#import "@local/template:0.1.0": *

#show: template.with(
  title: [Title],
  short_title: "Short title",
  description: [description],
  date: datetime(year: 2024, month: 12, day: 25),
  //authors: (
  //  (
  //    name: "Je Sian Keith Herman",
  //    link: "https://jskherman.com",
  //  ),
  //),
  
  // lof: true,
  // lot: true,
  // lol: true,
  //bibliography_file: "refs.bib",
  paper_size: "a4",
  // landscape: true,
  cols: 1,
  //text_font: "STIX Two Text",
  //code_font: "Cascadia Mono",
  accent: "#1A41AC", // blue
  h1-prefix: "Lecture",
  colortab: true,
)

