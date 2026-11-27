// 00600330 <&mut_serde_json[dc3825464c436029]::ser::Serializer<&mut_alloc[12e961f32105355]::vec::Vec<u8>>>

/* <serde_json[dc3825464c436029]::number::Number as
   serde_core[48776c27239fa21f]::ser::Serialize>::serialize::<&mut
   serde_json[dc3825464c436029]::ser::Serializer<&mut alloc[12e961f32105355]::vec::Vec<u8>>> */

undefined8 __rustcall
<serde_json[dc3825464c436029]::number::Number_as_serde_core[48776c27239fa21f]::ser::Serialize>::
serialize::
<&mut_serde_json[dc3825464c436029]::ser::Serializer<&mut_alloc[12e961f32105355]::vec::Vec<u8>>>
          (longlong *param_1,longlong *param_2)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  longlong lVar5;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 uVar6;
  undefined8 uStack_50;
  undefined1 auStack_48 [40];
  
  param_2 = (longlong *)*param_2;
  if (*param_1 == 0) {
    uStack_50 = 0x600387;
    uVar3 = (*(code *)PTR_fmt_00799cd0)();
    uVar6 = extraout_XMM0_Qa_00;
LAB_00600387:
    uVar2 = 0x14 - uVar3;
    lVar5 = param_2[2];
    if ((ulonglong)(*param_2 - lVar5) < uVar2) {
      uStack_50 = 0x600473;
      uVar6 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
              <alloc[12e961f32105355]::alloc::Global>(param_2,lVar5,uVar2,1,1);
      lVar5 = param_2[2];
    }
    else if (uVar3 == 0x14) goto LAB_00600442;
  }
  else {
    if ((int)*param_1 == 1) {
      lVar5 = param_1[1];
      uStack_50 = 0x600362;
      uVar2 = (*(code *)PTR_fmt_00799cd0)();
      uVar3 = uVar2;
      uVar6 = extraout_XMM0_Qa;
      if (lVar5 < 0) {
        uVar3 = uVar2 - 1;
        if (0x13 < uVar3) {
          uStack_50 = 0x6004d7;
          (*(code *)PTR_panic_bounds_check_00799520)
                    (extraout_XMM0_Qa,
                     &anon_1b4a85c95499e1b671cf4fa96a1b6d0f_699_llvm_10049508496007902178);
          pcVar1 = (code *)swi(3);
          uVar6 = (*pcVar1)();
          return uVar6;
        }
        auStack_48[uVar2 - 1] = 0x2d;
      }
      goto LAB_00600387;
    }
    if (0x7fefffffffffffff < (param_1[1] & 0x7fffffffffffffffU)) {
      lVar5 = param_2[2];
      if ((ulonglong)(*param_2 - lVar5) < 4) {
        uStack_50 = 0x600497;
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(param_2,lVar5,4,1,1);
        lVar5 = param_2[2];
      }
      *(undefined4 *)(param_2[1] + lVar5) = 0x6c6c756e;
      param_2[2] = lVar5 + 4;
      return 0;
    }
    uStack_50 = 0x600415;
    puVar4 = (undefined1 *)(*(code *)PTR_write_to_zmij_buffer_0079a0c0)();
    uVar2 = (longlong)puVar4 - (longlong)auStack_48;
    lVar5 = param_2[2];
    if ((ulonglong)(*param_2 - lVar5) < uVar2) {
      uStack_50 = 0x6004b9;
      uVar6 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
              <alloc[12e961f32105355]::alloc::Global>(param_2,lVar5,uVar2,1,1);
      lVar5 = param_2[2];
    }
    else {
      uVar6 = extraout_XMM0_Qa_01;
      if (puVar4 == auStack_48) goto LAB_00600442;
    }
  }
  uStack_50 = 0x600442;
  (*(code *)PTR_memcpy_00799008)(uVar6,uVar2);
LAB_00600442:
  param_2[2] = lVar5 + uVar2;
  return 0;
}


