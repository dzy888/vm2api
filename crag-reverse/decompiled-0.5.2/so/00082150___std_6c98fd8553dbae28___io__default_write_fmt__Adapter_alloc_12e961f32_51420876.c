// 00082150 <std[6c98fd8553dbae28]::io::default_write_fmt::Adapter<alloc[12e961f32105355]::vec::Vec<u8>>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<std[6c98fd8553dbae28]::io::default_write_fmt::Adapter<alloc[12e961f32105355]::vec::Vec<u8>>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<std[6c98fd8553dbae28]::io::default_write_fmt::Adapter<alloc[12e961f32105355]::vec::Vec<u8>>>
          (longlong param_1)

{
  ulonglong uVar1;
  
  uVar1 = *(ulonglong *)(param_1 + 8);
  if (uVar1 != 0) {
    if ((1 < ((uint)uVar1 & 3) - 2) && ((uVar1 & 3) != 0)) {
      (*(code *)PTR_drop_000c3ae0)();
    }
  }
  return;
}


