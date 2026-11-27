// 0070d7e0 slice_ref

/* <bytes[e9829e187354639b]::bytes::Bytes>::slice_ref */

undefined8 * __rustcall
<bytes[e9829e187354639b]::bytes::Bytes>::slice_ref
          (undefined8 *param_1,undefined8 *param_2,undefined **param_3,ulonglong param_4)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **local_80;
  undefined **local_78;
  undefined ***local_70;
  code *local_68;
  undefined ***local_60;
  code *local_58;
  undefined ***local_50;
  code *local_48;
  ulonglong *local_40;
  undefined *local_38;
  undefined **local_30;
  ulonglong local_28;
  undefined **local_20;
  
  if (param_4 == 0) {
    param_1[1] = 1;
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = &anon_e1419182c2f95519b50f33ebe2147d9d_4_llvm_4643690396931717954;
    return param_1;
  }
  local_80 = (undefined **)param_2[1];
  local_30 = (undefined **)param_2[2];
  ppuVar4 = (undefined **)((longlong)param_3 - (longlong)local_80);
  local_28 = param_4;
  if (param_3 < local_80) {
    local_70 = &local_78;
    local_68 = <*const_u8_as_core[c0acaeba6ab4c2e0]::fmt::Pointer>::fmt;
    local_60 = &local_80;
    local_58 = <*const_u8_as_core[c0acaeba6ab4c2e0]::fmt::Pointer>::fmt;
    ppuVar3 = &PTR_anon_a0bdfe76b4b74febc0fe96214a8c0b42_2_llvm_14698491423915303612_00795890;
    local_78 = param_3;
    param_3 = (undefined **)(*(code *)PTR_panic_fmt_007991a8)();
LAB_0070d8ca:
    local_70 = &local_78;
    local_68 = <*const_u8_as_core[c0acaeba6ab4c2e0]::fmt::Pointer>::fmt;
    local_60 = &local_30;
    local_58 = (code *)PTR_fmt_007991f0;
    local_50 = &local_80;
    local_48 = <*const_u8_as_core[c0acaeba6ab4c2e0]::fmt::Pointer>::fmt;
    local_40 = &local_28;
    local_38 = PTR_fmt_007991f0;
    local_80 = param_3;
    local_78 = ppuVar3;
    (*(code *)PTR_panic_fmt_007991a8)
              (PTR_fmt_007991f0,
               &PTR_anon_a0bdfe76b4b74febc0fe96214a8c0b42_2_llvm_14698491423915303612_007958a8);
  }
  else {
    ppuVar3 = local_80;
    if ((ulonglong)((longlong)local_30 + (longlong)local_80) < param_4 + (longlong)param_3)
    goto LAB_0070d8ca;
    local_80 = (undefined **)((longlong)ppuVar4 + param_4);
    local_78 = ppuVar4;
    local_20 = local_30;
    if (!CARRY8((ulonglong)ppuVar4,param_4)) {
      if (local_80 <= local_30) {
        (**(code **)*param_2)();
        param_1[1] = param_1[1] + (longlong)ppuVar4;
        param_1[2] = param_4;
        return param_1;
      }
      goto LAB_0070d975;
    }
  }
  local_70 = &local_78;
  local_68 = <usize_as_core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt;
  local_60 = &local_80;
  local_58 = <usize_as_core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt;
  (*(code *)PTR_panic_fmt_007991a8)
            (local_60,&
                      PTR_anon_a0bdfe76b4b74febc0fe96214a8c0b42_2_llvm_14698491423915303612_00795800
            );
LAB_0070d975:
  local_70 = &local_80;
  local_68 = <usize_as_core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt;
  local_60 = &local_20;
  local_58 = <usize_as_core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt;
  (*(code *)PTR_panic_fmt_007991a8)
            (local_60,&
                      PTR_anon_a0bdfe76b4b74febc0fe96214a8c0b42_2_llvm_14698491423915303612_00795800
            );
  pcVar1 = (code *)swi(3);
  puVar2 = (undefined8 *)(*pcVar1)();
  return puVar2;
}


