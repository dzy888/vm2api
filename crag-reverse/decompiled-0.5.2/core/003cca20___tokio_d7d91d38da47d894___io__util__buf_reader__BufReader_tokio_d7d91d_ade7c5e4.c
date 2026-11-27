// 003cca20 <tokio[d7d91d38da47d894]::io::util::buf_reader::BufReader<tokio[d7d91d38da47d894]::process::ChildStdout>>

/* WARNING: Switch with 1 destination removed at 0x003cca5b */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::io::util::buf_reader::BufReader<tokio[d7d91d38da47d894]::process::ChildStdout>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<tokio[d7d91d38da47d894]::io::util::buf_reader::BufReader<tokio[d7d91d38da47d894]::process::ChildStdout>>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  <tokio[d7d91d38da47d894]::io::poll_evented::PollEvented<mio[4b4dae02747c797f]::sys::unix::pipe::Receiver>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop();
  if (*(int *)(param_1 + 0x18) != -1) {
    (*(code *)PTR_close_00799030)();
  }
  <tokio[d7d91d38da47d894]::runtime::io::registration::Registration>(param_1);
  if (*(longlong *)(param_1 + 0x38) == 0) {
    return;
  }
  (*(code *)PTR_free_0079adc8)(param_4,1);
  return;
}


