// 00720aa0 <&mut_serde_json[dc3825464c436029]::ser::Serializer<&mut<serde_json[dc3825464c436029]::value::Value_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt::WriterFormatter,serde_json[dc3825464c436029]::ser::PrettyFormatter>>

/* WARNING: Switch with 1 destination removed at 0x00720b57 */
/* <serde_json[dc3825464c436029]::number::Number as
   serde_core[48776c27239fa21f]::ser::Serialize>::serialize::<&mut
   serde_json[dc3825464c436029]::ser::Serializer<&mut <serde_json[dc3825464c436029]::value::Value as
   core[c0acaeba6ab4c2e0]::fmt::Display>::fmt::WriterFormatter,
   serde_json[dc3825464c436029]::ser::PrettyFormatter>> */

undefined8 * __rustcall
<serde_json[dc3825464c436029]::number::Number_as_serde_core[48776c27239fa21f]::ser::Serialize>::
serialize::
<&mut_serde_json[dc3825464c436029]::ser::Serializer<&mut<serde_json[dc3825464c436029]::value::Value_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt::WriterFormatter,serde_json[dc3825464c436029]::ser::PrettyFormatter>>
          (longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 extraout_XMM0_Qa;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  undefined8 uStack_30;
  longlong lStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = *param_2;
  if (*param_1 == 0) {
    uStack_40 = 0x720af3;
    uVar4 = (*(code *)PTR_fmt_00799cd0)();
  }
  else {
    if ((int)*param_1 != 1) {
      if (0x7fefffffffffffff < (param_1[1] & 0x7fffffffffffffffU)) {
        uStack_40 = 0x720b48;
        lStack_28 = <<serde_json[dc3825464c436029]::value::Value_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt::WriterFormatter_as_std[6c98fd8553dbae28]::io::Write>
                    ::write_all(uVar1,&
                                      anon_ae02ed5756c5823c56e74cfad2f2ae4c_1_llvm_7421494092368790709
                                ,4);
        if (lStack_28 == 0) {
          return (undefined8 *)0x0;
        }
        uStack_30 = 1;
        uStack_18 = 0;
        uStack_40 = 0x71f5e1;
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        uStack_40 = 0x71f5f1;
        puVar6 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
        if (puVar6 == (undefined8 *)0x0) {
          uStack_40 = 0x71f626;
          (*(code *)PTR_handle_alloc_error_007991d8)();
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        puVar6[4] = 0;
        puVar6[2] = uStack_20;
        puVar6[3] = uStack_18;
        *puVar6 = uStack_30;
        puVar6[1] = lStack_28;
        return puVar6;
      }
      uStack_40 = 0x720b69;
      lVar5 = (*(code *)PTR_write_to_zmij_buffer_0079a0c0)();
      uStack_40 = 0x720b7a;
      lVar5 = <<serde_json[dc3825464c436029]::value::Value_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt::WriterFormatter_as_std[6c98fd8553dbae28]::io::Write>
              ::write_all(uVar1,auStack_38,lVar5 - (longlong)auStack_38);
      goto joined_r0x00720b7d;
    }
    lVar5 = param_1[1];
    uStack_40 = 0x720ace;
    uVar3 = (*(code *)PTR_fmt_00799cd0)();
    uVar4 = uVar3;
    if (lVar5 < 0) {
      uVar4 = uVar3 - 1;
      if (0x13 < uVar4) {
        uStack_40 = 0x720baf;
        (*(code *)PTR_panic_bounds_check_00799520)
                  (extraout_XMM0_Qa,
                   &anon_ae02ed5756c5823c56e74cfad2f2ae4c_24_llvm_7421494092368790709);
        pcVar2 = (code *)swi(3);
        puVar6 = (undefined8 *)(*pcVar2)();
        return puVar6;
      }
      auStack_38[uVar3 - 1] = 0x2d;
    }
  }
  uStack_40 = 0x720b07;
  lVar5 = <<serde_json[dc3825464c436029]::value::Value_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt::WriterFormatter_as_std[6c98fd8553dbae28]::io::Write>
          ::write_all(uVar1,auStack_38 + uVar4,0x14 - uVar4);
joined_r0x00720b7d:
  if (lVar5 == 0) {
    return (undefined8 *)0x0;
  }
  uStack_40 = 0x720b92;
  puVar6 = (undefined8 *)(*(code *)PTR_io_00799780)();
  return puVar6;
}


