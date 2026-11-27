// 005f7830 clone

/* <serde_json[dc3825464c436029]::value::Value as core[c0acaeba6ab4c2e0]::clone::Clone>::clone */

undefined ** __rustcall
<serde_json[dc3825464c436029]::value::Value_as_core[c0acaeba6ab4c2e0]::clone::Clone>::clone
          (byte *param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  ulonglong uVar4;
  byte *pbVar5;
  code *pcVar6;
  uint *unaff_R12;
  undefined **unaff_R13;
  
  bVar1 = *param_2;
  pcVar6 = (code *)(ulonglong)bVar1;
  ppuVar3 = (undefined **)
            ((longlong)&switchD_005f784b::switchdataD_0019da94 +
            (longlong)(int)(&switchD_005f784b::switchdataD_0019da94)[(longlong)pcVar6]);
  pbVar5 = param_1;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar1) {
  case 1:
    ppuVar3 = (undefined **)(ulonglong)param_2[1];
    param_1[1] = param_2[1];
    break;
  case 2:
    uVar2 = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_1 + 0x10) = uVar2;
    break;
  case 3:
    ppuVar3 = (undefined **)(*(code *)PTR_clone_00798fd0)();
    break;
  case 4:
    ppuVar3 = (undefined **)
              <serde_json[dc3825464c436029]::value::Value_as<[_]>::to_vec_in::ConvertVec>::to_vec::
              <alloc[12e961f32105355]::alloc::Global>
                        (param_1 + 8,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18)
                        );
    break;
  case 5:
    if (*(longlong *)(param_2 + 0x18) == 0) {
      param_1[8] = 0;
      param_1[9] = 0;
      param_1[10] = 0;
      param_1[0xb] = 0;
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      param_1[0x18] = 0;
      param_1[0x19] = 0;
      param_1[0x1a] = 0;
      param_1[0x1b] = 0;
      param_1[0x1c] = 0;
      param_1[0x1d] = 0;
      param_1[0x1e] = 0;
      param_1[0x1f] = 0;
    }
    else {
      if (*(longlong *)(param_2 + 8) == 0) {
        (*(code *)PTR_unwrap_failed_00799278)();
        pcVar6 = (code *)swi(3);
        ppuVar3 = (undefined **)(*pcVar6)();
        return ppuVar3;
      }
      ppuVar3 = (undefined **)
                <alloc[12e961f32105355]::collections::btree::map::BTreeMap<_,_,_>as_core[c0acaeba6ab4c2e0]::clone::Clone>
                ::clone::clone_subtree::
                <alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value,alloc[12e961f32105355]::alloc::Global>
                          (param_1 + 8,*(longlong *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
    }
    break;
  case 6:
    while( true ) {
      uVar4 = (*pcVar6)();
      if ((uVar4 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x005f8ab4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar3 = (undefined **)
                  (*(code *)((longlong)(int)unaff_R12[(uint)param_3 & 3] + (longlong)unaff_R12))();
        return ppuVar3;
      }
      if (param_3 == (byte *)0x0) {
        return &anon_30b5cef53457a6ea696e8d7e9f6273d6_735_llvm_8436237269785592069;
      }
      param_1 = pbVar5 + -(longlong)param_3;
      if (pbVar5 < param_3) {
        (*(code *)PTR_slice_index_fail_007993c8)
                  (&anon_30b5cef53457a6ea696e8d7e9f6273d6_736_llvm_8436237269785592069,pbVar5);
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::io::error::Error>
                  (param_3,pbVar5);
                    /* WARNING: Subroutine does not return */
        _Unwind_Resume();
      }
LAB_005f8a90:
      param_3 = param_1;
      if (param_1 == (byte *)0x0) break;
LAB_005f8a95:
      pbVar5 = param_3;
    }
    return (undefined **)0x0;
  case 7:
    goto LAB_005f8a90;
  case 8:
    return unaff_R13;
  case 9:
    unaff_R12 = &switchD_005f8ab4::switchdataD_0019daac;
    param_3 = (byte *)((ulonglong)param_3 & 0xffffffff);
    pcVar6 = (code *)PTR_write_0079a0a0;
    goto LAB_005f8a95;
  }
  *param_1 = bVar1;
  return ppuVar3;
}


