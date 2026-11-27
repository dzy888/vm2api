// 001f34b0 stdout

/* std[6c98fd8553dbae28]::io::stdio::stdout */

undefined8 * __rustcall std[6c98fd8553dbae28]::io::stdio::stdout(void)

{
  if (DAT_0021beb8 == 0) {
    return &STDOUT;
  }
  <std[6c98fd8553dbae28]::sync::once_lock::OnceLock<std[6c98fd8553dbae28]::sync::reentrant_lock::ReentrantLock<core[c0acaeba6ab4c2e0]::cell::RefCell<std[6c98fd8553dbae28]::io::buffered::linewriter::LineWriter<std[6c98fd8553dbae28]::io::stdio::StdoutRaw>>>>>
  ::initialize::
  <<std[6c98fd8553dbae28]::sync::once_lock::OnceLock<std[6c98fd8553dbae28]::sync::reentrant_lock::ReentrantLock<core[c0acaeba6ab4c2e0]::cell::RefCell<std[6c98fd8553dbae28]::io::buffered::linewriter::LineWriter<std[6c98fd8553dbae28]::io::stdio::StdoutRaw>>>>>::get_or_init<std[6c98fd8553dbae28]::io::stdio::stdout::_closure_0_>::_closure_0_,_>
            ();
  return &STDOUT;
}


