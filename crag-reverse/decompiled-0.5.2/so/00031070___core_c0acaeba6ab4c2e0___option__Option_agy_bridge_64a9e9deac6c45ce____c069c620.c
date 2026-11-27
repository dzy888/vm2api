// 00031070 <core[c0acaeba6ab4c2e0]::option::Option<agy_bridge[64a9e9deac6c45ce]::ProviderInfo>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::option::Option<agy_bridge[64a9e9deac6c45ce]::ProviderInfo>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<core[c0acaeba6ab4c2e0]::option::Option<agy_bridge[64a9e9deac6c45ce]::ProviderInfo>>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (*param_1 == -1) {
    return;
  }
  if (*param_1 != 0) {
    (*(code *)PTR___rust_dealloc_000c3aa0)(param_4,1);
  }
  <agy_bridge[64a9e9deac6c45ce]::protocol::CapturedHeaders>(param_1 + 3);
  return;
}


