// 00600690 <&mut_serde_json[dc3825464c436029]::ser::Serializer<&mut_bytes[e9829e187354639b]::buf::writer::Writer<bytes[e9829e187354639b]::bytes_mut::BytesMut>>>

/* WARNING: Switch with 1 destination removed at 0x00600892 */
/* <serde_json[dc3825464c436029]::number::Number as
   serde_core[48776c27239fa21f]::ser::Serialize>::serialize::<&mut
   serde_json[dc3825464c436029]::ser::Serializer<&mut
   bytes[e9829e187354639b]::buf::writer::Writer<bytes[e9829e187354639b]::bytes_mut::BytesMut>>> */

undefined8 * __rustcall
<serde_json[dc3825464c436029]::number::Number_as_serde_core[48776c27239fa21f]::ser::Serialize>::
serialize::
<&mut_serde_json[dc3825464c436029]::ser::Serializer<&mut_bytes[e9829e187354639b]::buf::writer::Writer<bytes[e9829e187354639b]::bytes_mut::BytesMut>>>
          (longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  code *pcVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 unaff_R13;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 uVar8;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  
  lVar1 = *param_2;
  if (*param_1 == 0) {
    uStack_60 = 0x6006ee;
    lVar4 = (*(code *)PTR_fmt_00799cd0)();
    if (lVar4 != 0x14) {
      uVar3 = 0x14 - lVar4;
      uVar8 = extraout_XMM0_Qa_00;
      do {
        lVar4 = *(longlong *)(lVar1 + 8);
        uVar6 = 0x7fffffffffffffff - lVar4;
        if (uVar3 < uVar6) {
          uVar6 = uVar3;
        }
        uStack_60 = 0x600730;
        uVar8 = (*(code *)PTR_put_slice_00799c88)(uVar8,uVar6);
        if (lVar4 == 0x7fffffffffffffff) goto LAB_0060086e;
        uVar3 = uVar3 - uVar6;
      } while (uVar3 != 0);
    }
  }
  else if ((int)*param_1 == 1) {
    lVar4 = param_1[1];
    uStack_60 = 0x6006c9;
    uVar3 = (*(code *)PTR_fmt_00799cd0)();
    if (lVar4 < 0) {
      uVar6 = uVar3 - 1;
      if (0x13 < uVar6) {
        uStack_60 = 0x6008ad;
        (*(code *)PTR_panic_bounds_check_00799520)
                  (extraout_XMM0_Qa,
                   &anon_1b4a85c95499e1b671cf4fa96a1b6d0f_699_llvm_10049508496007902178);
        pcVar2 = (code *)swi(3);
        puVar5 = (undefined8 *)(*pcVar2)();
        return puVar5;
      }
      auStack_58[uVar3 - 1] = 0x2d;
    }
    else {
      uVar6 = uVar3;
      if (uVar3 == 0x14) {
        return (undefined8 *)0x0;
      }
    }
    uVar6 = 0x14 - uVar6;
    uVar8 = extraout_XMM0_Qa;
    do {
      lVar4 = *(longlong *)(lVar1 + 8);
      uVar3 = 0x7fffffffffffffff - lVar4;
      if (uVar6 < uVar3) {
        uVar3 = uVar6;
      }
      uStack_60 = 0x600850;
      uVar8 = (*(code *)PTR_put_slice_00799c88)(uVar8,uVar3);
      if (lVar4 == 0x7fffffffffffffff) {
LAB_0060086e:
        uStack_60 = 0x60087b;
        puVar5 = (undefined8 *)(*(code *)PTR_io_00799780)();
        return puVar5;
      }
      uVar6 = uVar6 - uVar3;
    } while (uVar6 != 0);
  }
  else {
    uVar3 = param_1[1];
    if ((uVar3 & 0x7fffffffffffffff) < 0x7ff0000000000000) {
      uStack_60 = 0x6007c2;
      lVar4 = (*(code *)PTR_write_to_zmij_buffer_0079a0c0)();
      uVar8 = extraout_XMM0_Qa_01;
      for (uVar3 = lVar4 - (longlong)auStack_58; uVar3 != 0; uVar3 = uVar3 - uVar6) {
        lVar4 = *(longlong *)(lVar1 + 8);
        uVar6 = 0x7fffffffffffffff - lVar4;
        if (uVar3 < uVar6) {
          uVar6 = uVar3;
        }
        uStack_60 = 0x6007f0;
        uVar8 = (*(code *)PTR_put_slice_00799c88)(uVar8,uVar6);
        if (lVar4 == 0x7fffffffffffffff) goto LAB_0060086e;
      }
    }
    else {
      uVar6 = 4;
      do {
        lVar4 = *(longlong *)(lVar1 + 8);
        uVar7 = 0x7fffffffffffffff - lVar4;
        if (uVar6 < uVar7) {
          uVar7 = uVar6;
        }
        uStack_60 = 0x6007a0;
        uVar3 = (*(code *)PTR_put_slice_00799c88)(uVar3,uVar7);
        if (lVar4 == 0x7fffffffffffffff) {
          uStack_40 = 0x71f5e1;
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          uStack_40 = 0x71f5f1;
          puVar5 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
          if (puVar5 == (undefined8 *)0x0) {
            uStack_40 = 0x71f626;
            (*(code *)PTR_handle_alloc_error_007991d8)();
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          puVar5[4] = 0;
          puVar5[2] = unaff_R13;
          puVar5[3] = 0;
          *puVar5 = 1;
          puVar5[1] = &anon_30b5cef53457a6ea696e8d7e9f6273d6_735_llvm_8436237269785592069;
          return puVar5;
        }
        uVar6 = uVar6 - uVar7;
      } while (uVar6 != 0);
    }
  }
  return (undefined8 *)0x0;
}


