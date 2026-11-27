// 0051f270 <&alloc[12e961f32105355]::vec::Vec<serde_json[dc3825464c436029]::value::Value>>

/* WARNING: Switch with 1 destination removed at 0x0051f375 */
/* <&mut serde_json[dc3825464c436029]::ser::Serializer<&mut
   bytes[e9829e187354639b]::buf::writer::Writer<bytes[e9829e187354639b]::bytes_mut::BytesMut>> as
   serde_core[48776c27239fa21f]::ser::Serializer>::collect_seq::<&alloc[12e961f32105355]::vec::Vec<serde_json[dc3825464c436029]::value::Value>>
    */

undefined8 * __rustcall
<&mut_serde_json[dc3825464c436029]::ser::Serializer<&mut_bytes[e9829e187354639b]::buf::writer::Writer<bytes[e9829e187354639b]::bytes_mut::BytesMut>>as_serde_core[48776c27239fa21f]::ser::Serializer>
::collect_seq::<&alloc[12e961f32105355]::vec::Vec<serde_json[dc3825464c436029]::value::Value>>
          (longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 unaff_R13;
  longlong lVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  
  lVar7 = *(longlong *)(param_2 + 8);
  lVar6 = *(longlong *)(param_2 + 0x10);
  lVar1 = *param_1;
  lVar2 = *(longlong *)(lVar1 + 8);
  uVar8 = (*(code *)PTR_put_slice_00799c88)(param_4,lVar2 != 0x7fffffffffffffff);
  if (lVar2 == 0x7fffffffffffffff) {
LAB_0051f360:
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    puVar5 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
    if (puVar5 == (undefined8 *)0x0) {
      (*(code *)PTR_handle_alloc_error_007991d8)();
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    puVar5[4] = 0;
    puVar5[2] = unaff_R13;
    puVar5[3] = 0;
    *puVar5 = 1;
    puVar5[1] = &anon_30b5cef53457a6ea696e8d7e9f6273d6_735_llvm_8436237269785592069;
    return puVar5;
  }
  if (lVar6 == 0) {
    lVar1 = *(longlong *)(lVar1 + 8);
    (*(code *)PTR_put_slice_00799c88)(uVar8,lVar1 != 0x7fffffffffffffff);
joined_r0x0051f33b:
    if (lVar1 == 0x7fffffffffffffff) goto LAB_0051f360;
    puVar5 = (undefined8 *)0x0;
  }
  else {
    puVar5 = (undefined8 *)
             <serde_json[dc3825464c436029]::value::Value_as_serde_core[48776c27239fa21f]::ser::Serialize>
             ::serialize::
             <&mut_serde_json[dc3825464c436029]::ser::Serializer<&mut_bytes[e9829e187354639b]::buf::writer::Writer<bytes[e9829e187354639b]::bytes_mut::BytesMut>>>
                       (lVar7,param_1);
    puVar4 = PTR_put_slice_00799c88;
    if (puVar5 == (undefined8 *)0x0) {
      lVar6 = lVar6 * 0x20;
      uVar8 = extraout_XMM0_Da;
      do {
        lVar7 = lVar7 + 0x20;
        lVar6 = lVar6 + -0x20;
        lVar1 = *(longlong *)(*param_1 + 8);
        if (lVar6 == 0) {
          (*(code *)PTR_put_slice_00799c88)(uVar8,lVar1 != 0x7fffffffffffffff);
          goto joined_r0x0051f33b;
        }
        (*(code *)puVar4)();
        if (lVar1 == 0x7fffffffffffffff) goto LAB_0051f360;
        puVar5 = (undefined8 *)
                 <serde_json[dc3825464c436029]::value::Value_as_serde_core[48776c27239fa21f]::ser::Serialize>
                 ::serialize::
                 <&mut_serde_json[dc3825464c436029]::ser::Serializer<&mut_bytes[e9829e187354639b]::buf::writer::Writer<bytes[e9829e187354639b]::bytes_mut::BytesMut>>>
                           (lVar7,param_1);
        uVar8 = extraout_XMM0_Da_00;
      } while (puVar5 == (undefined8 *)0x0);
    }
  }
  return puVar5;
}


