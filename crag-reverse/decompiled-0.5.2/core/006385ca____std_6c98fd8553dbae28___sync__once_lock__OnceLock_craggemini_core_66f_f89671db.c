// 006385ca <<std[6c98fd8553dbae28]::sync::once_lock::OnceLock<craggemini_core[66f3c71560d70857]::schema::ToolNameCache>>::get_or_init<<craggemini_core[66f3c71560d70857]::schema::ToolNameCache>::new>::{closure#0},!>

/* <std[6c98fd8553dbae28]::sync::once_lock::OnceLock<craggemini_core[66f3c71560d70857]::schema::ToolNameCache>>::initialize::<<std[6c98fd8553dbae28]::sync::once_lock::OnceLock<craggemini_core[66f3c71560d70857]::schema::ToolNameCache>>::get_or_init<<craggemini_core[66f3c71560d70857]::schema::ToolNameCache>::new>::{closure#0},
   !> */

void __rustcall
<std[6c98fd8553dbae28]::sync::once_lock::OnceLock<craggemini_core[66f3c71560d70857]::schema::ToolNameCache>>
::initialize::
<<std[6c98fd8553dbae28]::sync::once_lock::OnceLock<craggemini_core[66f3c71560d70857]::schema::ToolNameCache>>::get_or_init<<craggemini_core[66f3c71560d70857]::schema::ToolNameCache>::new>::_closure_0_,_>
          (longlong param_1)

{
  undefined1 local_19;
  longlong *local_18;
  longlong local_10;
  undefined1 *local_8;
  
  if (*(int *)(param_1 + 0x70) == 0) {
    return;
  }
  local_18 = &local_10;
  local_8 = &local_19;
  local_10 = param_1;
  (*(code *)PTR_call_0079a178)
            (anon_63b06cc94833867f683611f039574387_15_llvm_6903579140370050947,&local_18,
             &anon_63b06cc94833867f683611f039574387_13_llvm_6903579140370050947);
  return;
}


