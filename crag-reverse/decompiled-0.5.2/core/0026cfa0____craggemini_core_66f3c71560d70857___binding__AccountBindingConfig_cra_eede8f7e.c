// 0026cfa0 <(craggemini_core[66f3c71560d70857]::binding::AccountBindingConfig,craggemini_core[66f3c71560d70857]::binding::ParsedProxy,std[6c98fd8553dbae28]::path::PathBuf)>

/* WARNING: Switch with 1 destination removed at 0x0026cfce */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<(craggemini_core[66f3c71560d70857]::binding::AccountBindingConfig,
   craggemini_core[66f3c71560d70857]::binding::ParsedProxy, std[6c98fd8553dbae28]::path::PathBuf)>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<(craggemini_core[66f3c71560d70857]::binding::AccountBindingConfig,craggemini_core[66f3c71560d70857]::binding::ParsedProxy,std[6c98fd8553dbae28]::path::PathBuf)>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  <craggemini_core[66f3c71560d70857]::binding::AccountBindingConfig>();
  <craggemini_core[66f3c71560d70857]::binding::ParsedProxy>(param_1 + 0x1a0);
  if (*(longlong *)(param_1 + 0x220) == 0) {
    return;
  }
  (*(code *)PTR_free_0079adc8)(param_4,1);
  return;
}


