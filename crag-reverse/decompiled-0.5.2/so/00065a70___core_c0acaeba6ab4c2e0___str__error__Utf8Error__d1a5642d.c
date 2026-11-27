// 00065a70 <core[c0acaeba6ab4c2e0]::str::error::Utf8Error>

/* WARNING: Switch with 1 destination removed at 0x00065ab8 */
/* <core[c0acaeba6ab4c2e0]::io::error::Error>::new::<core[c0acaeba6ab4c2e0]::str::error::Utf8Error>
    */

longlong __rustcall
<core[c0acaeba6ab4c2e0]::io::error::Error>::new::<core[c0acaeba6ab4c2e0]::str::error::Utf8Error>
          (undefined8 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  longlong lVar6;
  undefined1 uStack_39;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  code *pcStack_20;
  
  pcStack_20 = (code *)0x65a7f;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_000c3a88)();
  pcStack_20 = (code *)0x65a8f;
  puVar5 = (undefined4 *)(*(code *)PTR___rust_alloc_000c3a90)();
  if (puVar5 != (undefined4 *)0x0) {
    uVar1 = *param_2;
    uVar2 = param_2[1];
    uVar3 = param_2[2];
    uVar4 = param_2[3];
    *puVar5 = uVar1;
    puVar5[1] = uVar2;
    puVar5[2] = uVar3;
    puVar5[3] = uVar4;
    pcStack_20 = (code *)0x65aae;
    lVar6 = (*(code *)PTR_custom_owner_from_box_000c3ee0)(uVar1,&DAT_000c0bb0);
    return lVar6 + 1;
  }
  pcStack_20 = <std[6c98fd8553dbae28]::sync::once_lock::OnceLock<agy_bridge[64a9e9deac6c45ce]::Runtime>>
               ::initialize::
               <<std[6c98fd8553dbae28]::sync::once_lock::OnceLock<agy_bridge[64a9e9deac6c45ce]::Runtime>>::get_or_init<<std[6c98fd8553dbae28]::sync::once_lock::OnceLock<agy_bridge[64a9e9deac6c45ce]::Runtime>>::try_insert::_closure_0_>::_closure_0_,_>
  ;
  (*(code *)PTR_handle_alloc_error_000c3d10)();
  if ((int)__DT_SYMTAB[0x15].st_size == 0) {
    return 0;
  }
  puStack_38 = &uStack_30;
  uStack_30 = 0x10;
  uStack_28 = 8;
  pcStack_20 = (code *)&uStack_39;
  lVar6 = (*(code *)PTR_call_000c3ef0)
                    (anon_a096e19ef5e60642f162739f9e865059_0_llvm_12347187141279222813,&puStack_38,
                     &anon_a096e19ef5e60642f162739f9e865059_2_llvm_12347187141279222813);
  return lVar6;
}


