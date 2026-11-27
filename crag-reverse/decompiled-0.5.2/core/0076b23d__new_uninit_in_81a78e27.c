// 0076b23d new_uninit_in

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <alloc[12e961f32105355]::boxed::Box<alloc[12e961f32105355]::collections::btree::node::LeafNode<u64,
   gimli[a7f20a324fd82d99]::read::abbrev::Abbreviation>>>::new_uninit_in */

void __rustcall
<alloc[12e961f32105355]::boxed::Box<alloc[12e961f32105355]::collections::btree::node::LeafNode<u64,gimli[a7f20a324fd82d99]::read::abbrev::Abbreviation>>>
::new_uninit_in(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  lVar2 = (*(code *)PTR___rust_alloc_00799000)();
  if (lVar2 != 0) {
    return;
  }
  (*(code *)PTR_handle_alloc_error_007991d8)();
  if (lRam0000000000000538 == 0) {
    _DAT_00000008 = 0x538;
    _DAT_00000010 = param_3;
    _DAT_00000018 = 0;
    return;
  }
  lVar2 = lRam0000000000000538;
  _DAT_00000018 = lRam0000000000000540;
  do {
    lVar3 = (ulonglong)*(ushort *)(lVar2 + 0x532) << 3;
    _DAT_00000028 = 0xffffffffffffffff;
    do {
      if (lVar3 == 0) {
        _DAT_00000028 = (ulonglong)*(ushort *)(lVar2 + 0x532);
        goto LAB_0076b2c3;
      }
      uVar1 = *(ulonglong *)(lVar2 + 0x4e0 + _DAT_00000028 * 8);
      _DAT_00000028 = _DAT_00000028 + 1;
      lVar3 = lVar3 + -8;
    } while ((char)((uVar1 < param_3) - (param_3 < uVar1)) == '\x01');
    if (uVar1 < param_3 == param_3 < uVar1) {
      _DAT_00000010 = lVar2;
      _DAT_00000020 = _DAT_00000028;
      _DAT_00000028 = 0x538;
      _DAT_00000008 = 0;
      return;
    }
LAB_0076b2c3:
    bVar4 = _DAT_00000018 == 0;
    _DAT_00000018 = _DAT_00000018 + -1;
    if (bVar4) {
      _DAT_00000008 = 0x538;
      _DAT_00000010 = param_3;
      _DAT_00000018 = lVar2;
      _DAT_00000020 = 0;
      return;
    }
    lVar2 = *(longlong *)(lVar2 + 0x538 + _DAT_00000028 * 8);
  } while( true );
}


