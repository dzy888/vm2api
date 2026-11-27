// 003ad970 <[(craggemini_core[66f3c71560d70857]::binding::AccountBindingConfig,craggemini_core[66f3c71560d70857]::binding::ParsedProxy,std[6c98fd8553dbae28]::path::PathBuf)]>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<[(craggemini_core[66f3c71560d70857]::binding::AccountBindingConfig,
   craggemini_core[66f3c71560d70857]::binding::ParsedProxy, std[6c98fd8553dbae28]::path::PathBuf)]>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<[(craggemini_core[66f3c71560d70857]::binding::AccountBindingConfig,craggemini_core[66f3c71560d70857]::binding::ParsedProxy,std[6c98fd8553dbae28]::path::PathBuf)]>
          (longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR___rust_dealloc_00798fc8;
  if (param_2 != 0) {
    param_1 = param_1 + 0x1a0;
    do {
      <craggemini_core[66f3c71560d70857]::binding::AccountBindingConfig>(param_1 + -0x1a0);
      <craggemini_core[66f3c71560d70857]::binding::ParsedProxy>(param_1);
      if (*(longlong *)(param_1 + 0x80) != 0) {
        (*(code *)puVar1)(param_4,1);
      }
      param_1 = param_1 + 0x238;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}


