// 001fc420 write_char

/* <std[6c98fd8553dbae28]::io::default_write_fmt::Adapter<alloc[12e961f32105355]::vec::Vec<u8>> as
   core[c0acaeba6ab4c2e0]::fmt::Write>::write_char */

undefined8 __rustcall
<std[6c98fd8553dbae28]::io::default_write_fmt::Adapter<alloc[12e961f32105355]::vec::Vec<u8>>as_core[c0acaeba6ab4c2e0]::fmt::Write>
::write_char(longlong *param_1,uint param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  
  if (param_2 < 0x80) {
    uVar1 = 1;
  }
  else if (param_2 < 0x800) {
    uVar1 = 2;
  }
  else if (param_2 < 0x10000) {
    uVar1 = 3;
  }
  else {
    uVar1 = 4;
  }
  param_1 = (longlong *)*param_1;
  lVar2 = param_1[2];
  if ((ulonglong)(*param_1 - lVar2) < uVar1) {
    <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
    <alloc[12e961f32105355]::alloc::Global>(param_1,lVar2,uVar1,1,1);
    lVar2 = param_1[2];
  }
  (*(code *)PTR_memcpy_00219c60)();
  param_1[2] = lVar2 + uVar1;
  return 0;
}


