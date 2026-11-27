// 006bc0f0 <alloc[12e961f32105355]::sync::ArcInner<hyper[c4782d5b5c5e3493]::body::chan::Shared>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<alloc[12e961f32105355]::sync::ArcInner<hyper[c4782d5b5c5e3493]::body::chan::Shared>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<alloc[12e961f32105355]::sync::ArcInner<hyper[c4782d5b5c5e3493]::body::chan::Shared>>
          (longlong param_1)

{
  if (*(longlong *)(param_1 + 0x18) != 0) {
    <core[c0acaeba6ab4c2e0]::result::Result<bytes[e9829e187354639b]::bytes::Bytes,hyper[c4782d5b5c5e3493]::error::Error>>
              (param_1 + 0x20);
  }
  <core[c0acaeba6ab4c2e0]::option::Option<hyper[c4782d5b5c5e3493]::error::Error>>
            (*(undefined8 *)(param_1 + 0xa0));
  if (*(int *)(param_1 + 0x40) != -1) {
    <http[56314f485c23ccf6]::header::map::HeaderMap>(param_1 + 0x40);
  }
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0xb0) + 0x18))();
  }
  if (*(longlong *)(param_1 + 200) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x006bc152. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 200) + 0x18))();
  return;
}


