// 001c43a4 <<std[6c98fd8553dbae28]::sync::once_lock::OnceLock<std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<std[6c98fd8553dbae28]::io::buffered::bufreader::BufReader<std[6c98fd8553dbae28]::io::stdio::StdinRaw>>>>::get_or_init<std[6c98fd8553dbae28]::io::stdio::stdin::{closure#0}>::{closure#0},!>

/* <std[6c98fd8553dbae28]::sync::once_lock::OnceLock<std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<std[6c98fd8553dbae28]::io::buffered::bufreader::BufReader<std[6c98fd8553dbae28]::io::stdio::StdinRaw>>>>::initialize::<<std[6c98fd8553dbae28]::sync::once_lock::OnceLock<std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<std[6c98fd8553dbae28]::io::buffered::bufreader::BufReader<std[6c98fd8553dbae28]::io::stdio::StdinRaw>>>>::get_or_init<std[6c98fd8553dbae28]::io::stdio::stdin::{closure#0}>::{closure#0},
   !> */

void __rustcall
<std[6c98fd8553dbae28]::sync::once_lock::OnceLock<std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<std[6c98fd8553dbae28]::io::buffered::bufreader::BufReader<std[6c98fd8553dbae28]::io::stdio::StdinRaw>>>>
::initialize::
<<std[6c98fd8553dbae28]::sync::once_lock::OnceLock<std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<std[6c98fd8553dbae28]::io::buffered::bufreader::BufReader<std[6c98fd8553dbae28]::io::stdio::StdinRaw>>>>::get_or_init<std[6c98fd8553dbae28]::io::stdio::stdin::_closure_0_>::_closure_0_,_>
          (void)

{
  undefined1 *local_28;
  undefined1 *local_20;
  undefined1 **local_18;
  undefined1 local_9;
  
  if (std[6c98fd8553dbae28]::io::stdio::stdin::INSTANCE._48_4_ == 0) {
    return;
  }
  local_18 = &local_28;
  local_28 = std[6c98fd8553dbae28]::io::stdio::stdin::INSTANCE;
  local_20 = &local_9;
  (*(code *)PTR_call_0021a698)
            (&DAT_002171f0,&local_18,&PTR_s__rustc_48a229ceaefd4985c50990b14_002171b0);
  return;
}


