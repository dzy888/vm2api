// 0075a440 stdin

/* std[6c98fd8553dbae28]::io::stdio::stdin */

undefined1 * __rustcall std[6c98fd8553dbae28]::io::stdio::stdin(void)

{
  if (stdin::INSTANCE._48_4_ == 0) {
    return stdin::INSTANCE;
  }
  <std[6c98fd8553dbae28]::sync::once_lock::OnceLock<std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<std[6c98fd8553dbae28]::io::buffered::bufreader::BufReader<std[6c98fd8553dbae28]::io::stdio::StdinRaw>>>>
  ::initialize::
  <<std[6c98fd8553dbae28]::sync::once_lock::OnceLock<std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<std[6c98fd8553dbae28]::io::buffered::bufreader::BufReader<std[6c98fd8553dbae28]::io::stdio::StdinRaw>>>>::get_or_init<std[6c98fd8553dbae28]::io::stdio::stdin::_closure_0_>::_closure_0_,_>
            ();
  return stdin::INSTANCE;
}


