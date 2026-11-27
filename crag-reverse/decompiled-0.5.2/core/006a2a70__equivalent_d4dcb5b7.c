// 006a2a70 equivalent

/* <std[6c98fd8553dbae28]::path::PathBuf as
   hashbrown[b5c94476ffc33875]::Equivalent<std[6c98fd8553dbae28]::path::PathBuf>>::equivalent */

undefined8 __rustcall
<std[6c98fd8553dbae28]::path::PathBuf_as_hashbrown[b5c94476ffc33875]::Equivalent<std[6c98fd8553dbae28]::path::PathBuf>>
::equivalent(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  longlong local_170;
  char local_168;
  undefined8 local_167;
  undefined8 uStack_15f;
  undefined8 local_157;
  char local_140;
  char cStack_13f;
  longlong local_130;
  char local_128;
  undefined8 local_127;
  undefined8 uStack_11f;
  undefined8 local_117;
  undefined7 uStack_10f;
  undefined1 uStack_108;
  char local_100;
  char cStack_ff;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 local_98 [17];
  undefined8 local_87;
  undefined8 uStack_7f;
  undefined8 local_77;
  undefined1 local_58 [17];
  undefined4 local_47;
  undefined4 uStack_43;
  undefined4 uStack_3f;
  undefined4 uStack_3b;
  undefined4 local_37;
  undefined4 uStack_33;
  undefined4 uStack_2f;
  undefined4 uStack_2b;
  
  puVar1 = PTR_components_007995d8;
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  uVar4 = (*(code *)PTR_components_007995d8)(param_4,*(undefined8 *)(param_1 + 0x10));
  uVar4 = (*(code *)puVar1)(uVar4,uVar3);
  if (local_170 == local_130) {
    if ((((local_140 == local_100) && (cStack_13f == '\x02')) && (cStack_ff == '\x02')) &&
       (iVar2 = (*(code *)PTR_bcmp_00799020)(uVar4,local_170), iVar2 == 0)) {
      return 1;
    }
  }
  if (local_168 != -1) {
    local_e8 = local_157;
    local_f8 = local_167;
    uStack_f0 = uStack_15f;
  }
  local_87 = local_f8;
  uStack_7f = uStack_f0;
  local_77 = local_e8;
  if (local_128 != -1) {
    local_b8 = local_117;
    uStack_b0 = (undefined4)uStack_10f;
    uStack_ac = (undefined4)(CONCAT17(uStack_108,uStack_10f) >> 0x20);
    local_c8 = local_127;
    uStack_c0 = uStack_11f;
  }
  local_47 = (undefined4)local_c8;
  uStack_43 = local_c8._4_4_;
  uStack_3f = (undefined4)uStack_c0;
  uStack_3b = uStack_c0._4_4_;
  local_37 = (undefined4)local_b8;
  uStack_33 = local_b8._4_4_;
  uStack_2f = uStack_b0;
  uStack_2b = uStack_ac;
  uVar3 = <core[c0acaeba6ab4c2e0]::iter::adapters::rev::Rev<std[6c98fd8553dbae28]::path::Components>as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
          ::eq_by::
          <core[c0acaeba6ab4c2e0]::iter::adapters::rev::Rev<std[6c98fd8553dbae28]::path::Components>,<core[c0acaeba6ab4c2e0]::iter::adapters::rev::Rev<std[6c98fd8553dbae28]::path::Components>as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>::eq<core[c0acaeba6ab4c2e0]::iter::adapters::rev::Rev<std[6c98fd8553dbae28]::path::Components>>::_closure_0_>
                    (local_98,local_58);
  return uVar3;
}


