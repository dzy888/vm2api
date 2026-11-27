// 007258c4 <<std[6c98fd8553dbae28]::sync::once_lock::OnceLock<std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<std[6c98fd8553dbae28]::io::buffered::bufreader::BufReader<std[6c98fd8553dbae28]::io::stdio::StdinRaw>>>>::get_or_init<std[6c98fd8553dbae28]::io::stdio::stdin::{closure#0}>::{closure#0},!>

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
  (*(code *)PTR_call_0079a178)
            (&DAT_00796008,&local_18,
             &PTR_anon_c153c4d816f71af2accb98944a80e600_1_llvm_2617760850115737065_00795fc8);
  return;
}


