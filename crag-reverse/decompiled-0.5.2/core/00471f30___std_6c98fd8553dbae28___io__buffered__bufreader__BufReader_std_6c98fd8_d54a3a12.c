// 00471f30 <std[6c98fd8553dbae28]::io::buffered::bufreader::BufReader<std[6c98fd8553dbae28]::io::stdio::StdinLock>>

/* std[6c98fd8553dbae28]::io::default_read_exact::<std[6c98fd8553dbae28]::io::buffered::bufreader::BufReader<std[6c98fd8553dbae28]::io::stdio::StdinLock>>
    */

undefined ** __rustcall
std[6c98fd8553dbae28]::io::default_read_exact::
<std[6c98fd8553dbae28]::io::buffered::bufreader::BufReader<std[6c98fd8553dbae28]::io::stdio::StdinLock>>
          (undefined4 param_1,longlong *param_2,undefined1 *param_3,undefined **param_4)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined **ppuVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  ulonglong local_40;
  
  if (param_4 != (undefined **)0x0) {
    do {
      uVar5 = param_2[2];
      local_40 = param_2[3];
      if ((uVar5 != local_40) || (param_4 < (undefined **)param_2[1])) {
        lVar3 = *param_2;
        if (local_40 <= uVar5) {
          local_40 = 0;
          lVar1 = param_2[4];
          ppuVar4 = (undefined **)(*(code *)PTR_read_buf_007999b0)();
          param_2[2] = 0;
          param_2[3] = 0;
          *(char *)(param_2 + 4) = (char)lVar1;
          param_1 = extraout_XMM0_Da_00;
          if (ppuVar4 != (undefined **)0x0) goto LAB_00471fb6;
          uVar5 = 0;
        }
        ppuVar4 = (undefined **)(local_40 - uVar5);
        if (lVar3 == 0) goto LAB_00471fb6;
        if (param_4 <= ppuVar4) {
          ppuVar4 = param_4;
        }
        if (ppuVar4 == (undefined **)0x1) {
          *param_3 = *(undefined1 *)(lVar3 + uVar5);
        }
        else {
          param_1 = (*(code *)PTR_memcpy_00799008)(param_1,ppuVar4);
        }
        uVar6 = uVar5 + (longlong)ppuVar4;
        if (local_40 < uVar5 + (longlong)ppuVar4) {
          uVar6 = local_40;
        }
        param_2[2] = uVar6;
LAB_00472083:
        if (ppuVar4 == (undefined **)0x0) {
          return &anon_d4d3cd51d1d91a17bb767b00236b3a9b_15_llvm_17589326713533067298;
        }
        if (param_4 < ppuVar4) {
          (*(code *)PTR_slice_index_fail_007993c8)
                    (&anon_d4d3cd51d1d91a17bb767b00236b3a9b_16_llvm_17589326713533067298,param_4);
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::io::error::Error>
                    (ppuVar4,param_4);
                    /* WARNING: Subroutine does not return */
          _Unwind_Resume();
        }
        param_3 = param_3 + (longlong)ppuVar4;
        param_4 = (undefined **)((longlong)param_4 - (longlong)ppuVar4);
        goto LAB_00471f70;
      }
      param_2[2] = 0;
      param_2[3] = 0;
      ppuVar4 = param_4;
      lVar3 = (*(code *)PTR_read_007999b8)();
      param_1 = extraout_XMM0_Da;
      if (lVar3 != 1) goto LAB_00472083;
LAB_00471fb6:
      switch((uint)ppuVar4 & 3) {
      case 0:
        cVar2 = *(char *)(ppuVar4 + 2);
        goto joined_r0x00471f67;
      case 1:
        if (*(char *)((longlong)ppuVar4 + 0x1f) != '#') {
          return ppuVar4;
        }
        param_1 = (*(code *)PTR_drop_00799040)();
        break;
      case 2:
        lVar3 = (*(code *)PTR_get_os_functions_007992e0)();
        cVar2 = (**(code **)(lVar3 + 0x10))();
        param_1 = extraout_XMM0_Da_01;
        if (cVar2 == '\0') {
          return ppuVar4;
        }
        break;
      case 3:
        cVar2 = (char)((ulonglong)ppuVar4 >> 0x20);
        if (0x2a < (ulonglong)ppuVar4 >> 0x20) {
          cVar2 = -1;
        }
joined_r0x00471f67:
        if (cVar2 != '#') {
          return ppuVar4;
        }
      }
LAB_00471f70:
    } while (param_4 != (undefined **)0x0);
  }
  return (undefined **)0x0;
}


