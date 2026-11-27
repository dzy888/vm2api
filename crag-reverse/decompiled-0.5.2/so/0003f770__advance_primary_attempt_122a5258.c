// 0003f770 advance_primary_attempt

/* <agy_bridge[64a9e9deac6c45ce]::Turn>::advance_primary_attempt */

undefined8 __rustcall
<agy_bridge[64a9e9deac6c45ce]::Turn>::advance_primary_attempt(longlong param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_30 [24];
  
  uVar1 = 0;
  if (((*(char *)(param_1 + 0x31c) == '\x01') && (*(char *)(param_1 + 0x1a2) != '\0')) &&
     (*(char *)(param_1 + 0x1a4) != '\0')) {
    if (*(longlong *)(param_1 + 0x80) != 0) {
      return 0;
    }
    if (*(longlong *)(param_1 + 0x178) - 0xfU < 0xfffffffffffffff0) {
      return 0;
    }
    local_40 = *(undefined8 *)(param_1 + 0x180);
    local_38 = *(undefined8 *)(param_1 + 0x188);
    uVar1 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
            ::hash_one::<&usize>(param_1 + 0x2c8,&local_40);
    <hashbrown[b5c94476ffc33875]::raw::RawTable<(usize,u32)>>::remove_entry::
    <hashbrown[b5c94476ffc33875]::map::equivalent_key<usize,usize,u32>::_closure_0_>
              (local_30,param_1 + 0x2a8,uVar1,&local_40);
    uVar1 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
            ::hash_one::<&usize>(param_1 + 0x2f8,&local_38);
    <hashbrown[b5c94476ffc33875]::raw::RawTable<(usize,u32)>>::remove_entry::
    <hashbrown[b5c94476ffc33875]::map::equivalent_key<usize,usize,u32>::_closure_0_>
              (local_30,param_1 + 0x2d8,uVar1,&local_38);
    *(longlong *)(param_1 + 0x178) = *(longlong *)(param_1 + 0x178) + 1;
    *(undefined1 *)(param_1 + 0x1a0) = 0;
    uVar2 = 0;
    *(undefined8 *)(param_1 + 0x180) = 0;
    *(undefined8 *)(param_1 + 0x188) = 0;
    if (*(longlong *)(param_1 + 0xa0) != -1) {
      if (*(longlong *)(param_1 + 0xa0) != 0) {
        (*(code *)PTR___rust_dealloc_000c3aa0)(0,1);
      }
      uVar2 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
              <agy_bridge[64a9e9deac6c45ce]::protocol::CapturedHeaders>(param_1 + 0xb8);
    }
    *(undefined8 *)(param_1 + 0xa0) = 0xffffffffffffffff;
    *(undefined4 *)(param_1 + 0x170) = 0xffffffff;
    if ((*(longlong *)(param_1 + 0x150) != -1) && (*(longlong *)(param_1 + 0x150) != 0)) {
      (*(code *)PTR___rust_dealloc_000c3aa0)(uVar2,1);
    }
    *(undefined8 *)(param_1 + 0x150) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 400) = 0;
    *(undefined4 *)(param_1 + 0x1a1) = 0;
    uVar1 = 1;
  }
  return uVar1;
}


