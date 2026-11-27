// 006f5c10 {closure#0}

/* tokio[d7d91d38da47d894]::loom::std::sys::num_cpus::{closure#0} */

void __rustcall
tokio[d7d91d38da47d894]::loom::std::sys::num_cpus::_closure_0_
          (undefined8 param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined1 local_31;
  undefined **local_30;
  code *local_28;
  undefined1 *local_20;
  undefined *local_18;
  undefined8 local_10;
  code *local_8;
  
  local_30 = &PTR_s_TOKIO_WORKER_THREADS_00794550;
  local_28 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
  local_20 = &local_31;
  local_18 = PTR_fmt_0079a6d8;
  local_8 = <alloc[12e961f32105355]::string::String_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
  local_31 = param_2;
  local_10 = param_1;
  (*(code *)PTR_panic_fmt_007991a8)(param_4,&PTR_s__vendor_tokio_1_54_1_src_loom_st_00794560);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


