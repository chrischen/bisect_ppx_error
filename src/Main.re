// Doesn't work
let write_runtime_coverage: out_channel => unit =
  channel => ignore(Format.formatter_of_out_channel(channel));

// Works
let write_runtime_coverage2: Stdlib__no_aliases.Stdlib.out_channel => unit =
  channel => ignore(Format.formatter_of_out_channel(channel));
